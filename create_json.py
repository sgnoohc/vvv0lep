#!/bin/env python3

import glob
import ROOT as r
import os
import json

tag = "VVV0TreeV6"
sample_dirs = glob.glob(f"/ceph/cms/store/user/phchang/VVV0LepAnalysis/{tag}/*_{tag}")
os.system(f"mkdir -p data/samples/{tag}")

xsec_json_file = open("data/MCxsec.json")
xsec_json = json.loads(xsec_json_file.read())

def parse_sample_category(name, json):

    # Check it's data
    if "Run201" in name:
        json["is_sig"] = 0
        json["is_bkg"] = 0
        json["is_data"] = 1
        return

    # Check it's signal
    signal_patterns = [
            "WWW_NoFilter",
            "WWZ_NoFilter",
            "WZZ_NoFilter",
            "ZZZ_NoFilter",
            ]
    for sp in signal_patterns:
        if sp in name:
            json["is_sig"] = 1
            json["is_bkg"] = 0
            json["is_data"] = 0
            return

    # at this point it's always background
    json["is_sig"] = 0
    json["is_bkg"] = 1
    json["is_data"] = 0
    return

def get_sample_name(name, json):
    n = os.path.basename(name)
    json["name"] = n.split("_VVV0Tree")[0]
    if json["is_bkg"] or json["is_sig"]:
        json["process"] = json["name"].split("_RunII")[0]
    else:
        json["process"] = json["name"].split("_Run201")[0]

def get_sample_dir(name, json):
    json["dir"] = name

def get_xsec(d, json):
    if json["is_bkg"] or json["is_sig"]:
        json["xsec"] = xsec_json[json["process"]]
    else:
        json["xsec"] = 1

def get_lumi(d, json):
    if json["is_bkg"] or json["is_sig"]:
        if "UL16NanoAODAPVv9" in json["name"]:
            json["lumi"] = 19.52
        elif "UL16NanoAODv9" in json["name"]:
            json["lumi"] = 16.81
        elif "UL17NanoAODv9" in json["name"]:
            json["lumi"] = 41.48
        elif "UL18NanoAODv9" in json["name"]:
            json["lumi"] = 59.83
        else:
            json["lumi"] = 137.64
    else:
        json["lumi"] = 1

def build_output_dir(d, json):
    json["output_dir"] = f'output/{json["tag"]}/{json["process"]}'

def parse_sample(d, j):
    parse_sample_category(d, j)
    get_sample_dir(d, j)
    get_sample_name(d, j)
    get_xsec(d, j)
    get_lumi(d, j)
    build_output_dir(d, j)

def main():

    for d in sample_dirs:
        print(f"Processing sample: {d}")
        j = dict()
        rootfiles = glob.glob(f"{d}/*.root")
        j["tag"] = tag
        j["noriginalevents"] = int(0)
        j["sum_genWeight"] = 0
        j["nfiles"] = len(rootfiles)
        j["files"] = rootfiles
        j["nevents"] = []
        parse_sample(d, j)
        for rf in rootfiles:
            print(f"  Processing file: {rf}")
            f = r.TFile(rf)
            j["nevents"].append(f.Get("t").GetEntries())
            j["noriginalevents"] += int(f.Get("Root__h_nevents").GetBinContent(1))
            if j["is_bkg"] or j["is_sig"]:
                j["sum_genWeight"] += f.Get("Root__h_Common_genWeight").GetBinContent(1)
        json_formatted_str = json.dumps(j, indent=4)
        jfile = open(f'data/samples/{tag}/{j["name"]}.json', "w")
        jfile.write(json_formatted_str)

if __name__ == "__main__":

    main()
