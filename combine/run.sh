#!/bin bash

version=v11
channel=2FJ

rm -rf ${channel}_${version}/

python3 write_datacard.py ${channel} ${version}

#####################################
echo "combining data cards"
cmd="combineCards.py "
for i in $(ls ${channel}_${version}/*); do
    name=$(basename ${i})
    temp=${name/*_/}
    binid=${temp/.txt/}
    cmd="${cmd} ${binid}=${i}"
done
${cmd} > ${channel}_${version}/combined_card.txt

#####################################
echo "creating workspace..."
text2workspace.py ${channel}_${version}/combined_card.txt -o ${channel}_${version}.root --PO 'map=.*/VVV_cW_1p0:r_vvv[0,-2,2]'

#####################################
echo "running combine..."
combine -M MultiDimFit -d ${channel}_${version}.root -m 125 -t -1 --setParameters r=0 --setParameterRanges r=0.0,2.0 --saveNLL --algo grid --points 101 --rMin 0 --rMax 5 --alignEdges 1 > ${channel}_${version}.txt

#####################################
echo "plotting..."
./plot1DScan.py higgsCombineTest.MultiDimFit.mH125.root \
    --main-label "Total Uncert."  \
    --output breakdown --y-max 10 --y-cut 40

#####################################
python3 find_cW_limit.py

# Cleaning up
rm ${channel}_${version}.root
rm ${channel}_${version}.txt
rm breakdown.pdf
rm breakdown.png
rm breakdown.root
rm combine_logger.out
rm fit.pdf
rm higgsCombineTest.MultiDimFit.mH125.root
rm r_limit.txt

