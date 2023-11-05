#!/bin/env python3

import os
import glob
import json
import plot_config as c
import sys
import socket


run_test = False
if len(sys.argv) > 2:
    run_test = True

idx = 1
if len(sys.argv) > 1:
    idx = int(sys.argv[1])

basedir = "/data/userdata/phchang/VVV0LepAnalysis"
nchunk = 1.5e6
jobconfigs = glob.glob(f"data/samples/{c.tag}/*.json")
os.system("rm -f .jobs.txt")
jobs = open(".jobs.txt", "w")

def chunks(j, nchunk):
    tmp = 0
    cs = []
    c = []
    ns = []
    for n, f in zip(j["nevents"], j["files"]):
        tmp += n
        ff = f"{basedir}/{f}"
        c.append(ff)
        if tmp > nchunk:
            cs.append(c)
            ns.append(tmp)
            c = []
            tmp = 0
    if len(c) != 0:
        cs.append(c)
        ns.append(tmp)
    return cs, ns

for jobconfig in jobconfigs:
    f = open(jobconfig)
    j = json.loads(f.read())

    # if "QCD" not in jobconfig and "Dim" not in jobconfig :
    #     continue

    nc = nchunk
    if "Dim" in jobconfig:
        nc = 50000

    cs, ns = chunks(j, nc)

    tag = j["tag"];
    process = j["process"]
    output_dir = j["output_dir"]

    if run_test:
        if "Dim" not in process:
            continue

    for job_index in range(len(cs)):
        output_name = f"output_{job_index}.root"
        output_fullpath = f"{output_dir}/{output_name}"
        os.system(f"mkdir -p {output_dir}/")
        output_log_fullpath = output_fullpath.replace(".root", ".log")
        inputs = ",".join(cs[job_index])
        tn = ns[job_index]
        nsplit = int(tn/50000) + 1

        for isplit in range(nsplit):
            output_fullpath_with_isplit = output_fullpath.replace(".root", f"_i{isplit}.root")
            output_log_fullpath_with_isplit = output_log_fullpath.replace(".log", f"_i{isplit}.log")
            jobs.write(f"./doAnalysis -j {nsplit} -I {isplit} --eftidx {idx} --json {jobconfig} -i {inputs} -o {output_fullpath_with_isplit} -t t > {output_log_fullpath_with_isplit} 2>&1\n")

        # if "Dim" in jobconfig and len(cs) == 1 and len(cs[0]) == 1: # If the signal is all merged in one file we split further
        #     nsplit = 6
        #     for isplit in range(nsplit):
        #         output_fullpath_with_isplit = output_fullpath.replace(".root", f"_i{isplit}.root")
        #         output_log_fullpath_with_isplit = output_log_fullpath.replace(".log", f"_i{isplit}.log")
        #         jobs.write(f"./doAnalysis -j {nsplit} -I {isplit} --json {jobconfig} -i {inputs} -o {output_fullpath_with_isplit} -t t > {output_log_fullpath_with_isplit} 2>&1\n")
        # else:
        #     jobs.write(f"./doAnalysis --json {jobconfig} -i {inputs} -o {output_fullpath} -t t > {output_log_fullpath} 2>&1\n")

jobs.close()

if "uaf-2" in socket.gethostname():
    os.system("xargs.sh -n 90 .jobs.txt PostProcessed")
else:
    os.system("xargs.sh .jobs.txt")
