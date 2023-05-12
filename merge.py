#!/bin/env python3

import sys
import glob
import ROOT as r
import os
import json

tag = "VVV0TreeV6"

merge_json_file = open("data/merge.json")
merge_json = json.loads(merge_json_file.read())

to_be_merged = {}
for key in merge_json.keys():
    to_be_merged[merge_json[key]] = []

sample_jsons = glob.glob(f"data/samples/{tag}/*")
for sample_json in sample_jsons:
    f = open(sample_json)
    sj = json.loads(f.read())
    output_dir = sj["output_dir"]
    merge_category = merge_json[sj["process"]]
    output_files = glob.glob(f'{output_dir}/*.root')
    to_be_merged[merge_category] += output_files

merge_output_dir = f"output/{tag}/merged"
os.system(f"mkdir -p {merge_output_dir}")

merge_jobs = ".merge.txt"
os.system(f"rm -f {merge_jobs}")
merge_jobs_command_file = open(f"{merge_jobs}", "w")

for key in to_be_merged:
    if len(to_be_merged[key]) == 0:
        continue
    files = " ".join(to_be_merged[key])
    merge_output_file = f"{merge_output_dir}/{key}.root"
    merge_output_log = f"{merge_output_dir}/{key}.log"
    merge_jobs_command_file.write(f"hadd -f {merge_output_file} {files} > {merge_output_log} 2>&1\n")

merge_jobs_command_file.close()

os.system("xargs.sh .merge.txt")
