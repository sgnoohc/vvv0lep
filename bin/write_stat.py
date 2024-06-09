#!/bin/env python3

import ROOT as r
import plot_config as c
import sys
from systematics import systs
import json
import os

systs = ["Nominal"]

def suffix(syst):
    if "JESUp" in syst: return "_jes_Up"
    elif "JESDn" in syst: return "_jes_Down"
    elif "JERUp" in syst: return "_jer_Up"
    elif "JERDn" in syst: return "_jer_Down"
    elif "JMSUp" in syst: return "_jms_Up"
    elif "JMSDn" in syst: return "_jms_Down"
    elif "JMRUp" in syst: return "_jmr_Up"
    elif "JMRDn" in syst: return "_jmr_Down"
    elif "prefireWgtUp" in syst: return "_prefire_weight_Up"
    elif "prefireWgtDn" in syst: return "_prefire_weight_Down"
    elif "puWgtUp" in syst: return "_pu_weight_Up"
    elif "puWgtDn" in syst: return "_pu_weight_Down"
    elif "trigWgtUp" in syst: return "_trigger_weight_Up"
    elif "trigWgtDn" in syst: return "_trigger_weight_Down"
    else: return ""

def zero_out_negative(h):
    for i in range(0, h.GetNbinsX()+2):
        if h.GetBinContent(i) < 0:
            h.SetBinContent(i, 0)

def write_cards(version, channel, hn):

    os.system("mkdir -p datacards")

    hist_name = f"ZL{channel}A__{hn}"
    stat_file_name = f"datacards/VVV.0L_{channel}.DataCard_Yields.{version}.root"
    stat_file = r.TFile(stat_file_name, "RECREATE")

    samples = ["WW", "WZ", "ZZ", "ttV", "QCD", "WJets", "DY", "TTbar"]
    samplenames = {
            "WW": "WW",
            "WZ": "WZ",
            "ZZ": "ZZ",
            "ttV": "ttV",
            "QCD": "QCD",
            "QCDFIT": "QCD",
            "WJets": "WJets",
            "DY": "DY",
            "TTbar": "TTbar",
            }

    for s in samples:
        for syst in systs:
            dirname = f"{c.mdir}"
            bg_files = c.ddfnames
            syst_suffix = suffix(syst)
            f = r.TFile(f"{dirname}/{s}.root")
            h = f.Get(hist_name).Clone()
            h.SetName(f"h_{samplenames[s]}{syst_suffix}")
            print("before")
            h.Print("all")
            zero_out_negative(h)
            print("before")
            h.Print("all")
            h.SetDirectory(stat_file)
            stat_file.cd()
            h.Write()

    f_eft_idx_information = open("data/dim61j_eft_information.txt")
    j = json.loads(f_eft_idx_information.read())

    # signals = ["vvv1jdim6", "vvvdim8"]
    signals = ["vvv1jdim6"]
    signames = {"vvvdim8": "VVV", "vvv1jdim6": "VVV", "www1jdim6" : "WWW", "wwz1jdim6" : "WWZ", "wzz1jdim6" : "WZZ", "zzz1jdim6" : "ZZZ"}
    efts = ["cT0", "cM0", "cW", "cHbox", "cHDD", "cHW", "cHB", "cHWB", "cHl3", "cHq1", "cHq3", "cHu", "cHd", "cll1"]

    hist_name = f"ZL{channel}A__{hn}_v_Wgts"

    for s in signals:
        for syst in systs:
            syst_suffix = suffix(syst)
            dirname = f'{c.mdir}'
            f = r.TFile(f"{dirname}/{s}.root")
            h = f.Get(hist_name).Clone()
            for idx in range(121, 338):
                eftname = j[str(idx-121)]
                hh = r.TH1F(f"h_{signames[s]}_{eftname}", f"h_{signames[s]}_{eftname}", h.GetNbinsX(), 0, h.GetNbinsX())
                for ibin in range(h.GetNbinsX()):
                    hh.SetBinContent(1 + ibin, h.GetBinContent(1 + ibin, idx))
                    hh.SetBinError(1 + ibin, h.GetBinError(1 + ibin, idx))
                hh.SetDirectory(stat_file)
                stat_file.cd()
                hh.Write()

            # good_eft_names = []
            # for key in f.GetListOfKeys():
            #     histkey = str(key.GetName())
            #     if f"ZL{channel}AEFT" not in histkey:
            #         continue
            #     eft_name = histkey.split("AEFT_")[1].split("__")[0]
            #     eft_op_name = eft_name.split("_")[0]
            #     if eft_op_name not in efts:
            #         continue
            #     good_eft_names.append(eft_name)
            # good_eft_names = list(set(good_eft_names))
            # good_eft_names.sort()
            # for eft_name in good_eft_names:
            #     hist_name = f"ZL{channel}AEFT_{eft_name}__{hn}"
            #     h = f.Get(hist_name).Clone()
            #     h.SetName(f"h_{signames[s]}_{eft_name}{syst_suffix}")
            #     h.SetDirectory(stat_file)
            #     # h.Scale(137.64/59.83)
            #     stat_file.cd()
            #     h.Write()

    stat_file.Close()

if __name__ == "__main__":

    version = "v18"
    write_cards(version, "2FJ", "HTFJ_binned")
    write_cards(version, "3FJ", "SR1SumPtFJ")
