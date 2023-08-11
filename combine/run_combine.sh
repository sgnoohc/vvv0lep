#!/bin/bash

version=v11
channel=2FJ

echo "running combine..."

combine -M MultiDimFit -d ${channel}_${version}.root -m 125 -t -1 --setParameters r=0 --setParameterRanges r=0.0,2.0 --saveNLL --algo grid --points 101 --rMin 0 --rMax 5 --alignEdges 1 > ${channel}_${version}.txt
