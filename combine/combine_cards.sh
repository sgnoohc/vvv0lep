#!/bin/bash

version=v11
channel=2FJ

echo "combining data cards"

cmd="combineCards.py "
for i in $(ls ${channel}_${version}/*); do
    name=$(basename ${i})
    temp=${name/*_/}
    binid=${temp/.txt/}
    cmd="${cmd} ${binid}=${i}"
done
${cmd} > ${channel}_${version}/combined_card.txt
