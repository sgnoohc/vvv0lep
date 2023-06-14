#!/bin/bash

#-----------
HEADER=$(python rooutil/python/yield_for_keynote.py  plots/ZL3FJ/VVV0TreeV6/Nominal/dim6/mc/ZL3FJA__Yield.txt | head -n 1)
echo ${HEADER}

#-----------
CUTS="ZL3FJ ZL3FJPresel ZL3FJM150 ZL3FJA ZL3FJB ZL3FJC ZL3FJD ZL3FJE ZL3FJF"
for CUT in ${CUTS}; do
    LINE=$(python rooutil/python/yield_for_keynote.py  plots/ZL3FJ/VVV0TreeV6/Nominal/dim6/mc/${CUT}__Yield.txt | tail -n 2 | head -n 1)
    echo ${LINE/Bin1/${CUT}}
done

#-----------
for CUT in ${CUTS}; do
    echo ${CUT} Region
    python rooutil/python/yield_for_keynote.py  plots/ZL3FJ/VVV0TreeV6/Nominal/dim6/mc/${CUT}__SR1SumPtFJ.txt
done
