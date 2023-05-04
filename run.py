#!/bin/env python3

import os
import glob
import json

nchunk = 1.5e6
jobconfigs = glob.glob("data/samples/VVV0TreeV4/*.json")
os.system("rm -f .jobs.txt")
jobs = open(".jobs.txt", "w")

for jobconfig in jobconfigs:
    f = open(jobconfig)
    j = json.loads(f.read())
    njobs = int(int(j["nevents"]) / int(nchunk) + 1)

    tag = j["tag"];
    process = j["process"]
    output_dir = j["output_dir"]

    os.system(f"mkdir -p {output_dir}")

    for job_index in range(njobs):
        output_name = f"output_{job_index}.root"
        output_fullpath = f"{output_dir}/{output_name}"
        output_log_fullpath = output_fullpath.replace(".root", ".log")
        jobs.write(f"./doAnalysis --json {jobconfig} --nsplit_jobs {njobs} --job_index {job_index} > {output_log_fullpath} 2>&1\n")
