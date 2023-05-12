#!/bin/env python3

import os
import glob
import json

nchunk = 1.5e6
tag = "VVV0TreeV6"
jobconfigs = glob.glob(f"data/samples/{tag}/*.json")
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

    os.system(f"mkdir -p {output_dir}")

    for job_index in range(len(cs)):
        output_name = f"output_{job_index}.root"
        output_fullpath = f"{output_dir}/{output_name}"
        output_log_fullpath = output_fullpath.replace(".root", ".log")
        inputs = ",".join(cs[job_index])
        jobs.write(f"./doAnalysis --json {jobconfig} -i {inputs} -o {output_fullpath} -t t > {output_log_fullpath} 2>&1\n")

jobs.close()

os.system("xargs.sh .jobs.txt")
