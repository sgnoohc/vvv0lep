#!/bin/env python3

import os
import glob
import json
# from systematics import systs
import plot_config as c
import sys
import socket

systs = ["Nominal"]

run_test = False
if len(sys.argv) > 1:
    run_test = True

nchunk = 1.5e6
jobconfigs = glob.glob(f"data/samples/{c.tag}/*.json")
os.system("rm -f .jobs.txt")
jobs = open(".jobs.txt", "w")

def chunks(j, nchunk):
    tmp = 0
    cs = []
    c = []
    for n, f in zip(j["nevents"], j["files"]):
        tmp += n
        c.append(f)
        if tmp > nchunk:
            cs.append(c)
            c = []
            tmp = 0
    if len(c) != 0:
        cs.append(c)
    return cs

for jobconfig in jobconfigs:
    f = open(jobconfig)
    j = json.loads(f.read())

    cs = chunks(j, nchunk)

    tag = j["tag"];
    process = j["process"]
    output_dir = j["output_dir"]

    if run_test:
        if "Dim" not in process:
            continue

    for job_index in range(len(cs)):
        for syst in systs:
            output_name = f"output_{job_index}.root"
            output_fullpath = f"{output_dir}/{syst}/{output_name}"
            os.system(f"mkdir -p {output_dir}/{syst}")
            output_log_fullpath = output_fullpath.replace(".root", ".log")
            inputs = ",".join(cs[job_index])
            jobs.write(f"./doAnalysis --json {jobconfig} -i {inputs} -o {output_fullpath} -t t -s {syst} > {output_log_fullpath} 2>&1\n")

jobs.close()

if "uaf-2" in socket.gethostname():
    os.system("xargs.sh .jobs.txt")
else:
    os.system("xargs.sh .jobs.txt")
