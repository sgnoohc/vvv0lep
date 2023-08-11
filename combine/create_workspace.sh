#!/bin/bash

version=v11
channel=2FJ

echo "creating workspace..."

text2workspace.py ${channel}_${version}/combined_card.txt -o ${channel}_${version}.root --PO 'map=.*/VVV_cW_1p0:r_vvv[0,-2,2]'
