#!/bin/bash

if [[ "${HOSTNAME}" == *"uaf-2"* ]]; then
    PYTHON=python3
    CONVERTER=rooutil/python/yield_for_keynote3.py
else
    PYTHON=python
    CONVERTER=rooutil/python/yield_for_keynote.py
fi

VERSION=V12

mkdir -p cutflows/

# echo "----------------------------"
# echo "ZL3FJ Cutflow"
# echo "----------------------------"
${PYTHON} ${CONVERTER}  plots/ZL/VVV0Tree${VERSION}/dim6/mc/ZL3FJ__Cutflow3FJ.txt > cutflows/ZL3FJ_Cutflow.csv

# echo "----------------------------"
# echo "ZL2FJ Cutflow"
# echo "----------------------------"
${PYTHON} ${CONVERTER}  plots/ZL/VVV0Tree${VERSION}/dim6/mc/ZL2FJ__Cutflow2FJ.txt > cutflows/ZL2FJ_Cutflow.csv

${PYTHON} ${CONVERTER}  plots/ZL/VVV0Tree${VERSION}/dim6/abcd/ZL3FJA__SR1SumPtFJ.txt > cutflows/SR1SumPtFJ.csv
${PYTHON} ${CONVERTER}  plots/ZL/VVV0Tree${VERSION}/dim6/abcd/ZL2FJA__HTFJ_binned.txt > cutflows/HTFJ_binned.csv















































## echo "----------------------------"
## echo "ZL2FJ Low MET Cutflow"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJ__Cutflow2FJLMET.txt > cutflows/ZL2FJ_LMET_Cutflow.csv

## echo "----------------------------"
## echo "ZL2FJ High MET Cutflow"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJ__Cutflow2FJHMET.txt > cutflows/ZL2FJ_HMET_Cutflow.csv

## echo "----------------------------"
## echo "ZL3FJ ABCDEF"
## echo "----------------------------"
##-----------
#HEADER=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL3FJA__Yield.txt | head -n 1)
#echo ${HEADER} > cutflows/ZL3FJ_ABCDEF.csv
#CUTS="ZL3FJA ZL3FJB ZL3FJC ZL3FJD ZL3FJE ZL3FJF"
#for CUT in ${CUTS}; do
#    LINE=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/${CUT}__Yield.txt | tail -n 2 | head -n 1)
#    echo ${LINE/Bin1/${CUT}} >> cutflows/ZL3FJ_ABCDEF.csv
#done

## echo "----------------------------"
## echo "ZL2FJ ABCDEF"
## echo "----------------------------"
##-----------
#HEADER=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJA__Yield.txt | head -n 1)
#echo ${HEADER} > cutflows/ZL2FJ_ABCDEF.csv
#CUTS="ZL2FJA ZL2FJB ZL2FJC ZL2FJD ZL2FJE ZL2FJF"
#for CUT in ${CUTS}; do
#    LINE=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/${CUT}__Yield.txt | tail -n 2 | head -n 1)
#    echo ${LINE/Bin1/${CUT}} >> cutflows/ZL2FJ_ABCDEF.csv
#done

## echo "----------------------------"
## echo "ZL2FJ LowMET ABCDEF"
## echo "----------------------------"
##-----------
#HEADER=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJLMETA__Yield.txt | head -n 1)
#echo ${HEADER} > cutflows/ZL2FJ_LMET_ABCDEF.csv
#CUTS="ZL2FJLMETA ZL2FJLMETB ZL2FJLMETC ZL2FJLMETD ZL2FJLMETE ZL2FJLMETF"
#for CUT in ${CUTS}; do
#    LINE=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/${CUT}__Yield.txt | tail -n 2 | head -n 1)
#    echo ${LINE/Bin1/${CUT}} >> cutflows/ZL2FJ_LMET_ABCDEF.csv
#done

## echo "----------------------------"
## echo "ZL3FJA SR1SumPtFJ (MC Only Yields)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/mc/ZL3FJA__SR1SumPtFJ.txt > cutflows/ZL3FJA_SR1SumPtFJ_MCOnly.csv

## echo "----------------------------"
## echo "ZL2FJA HTFJ_binned (MC Only Yields)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/mc/ZL2FJA__HTFJ_binned.txt > cutflows/ZL2FJA_HTFJ_binned_MCOnly.csv

## echo "----------------------------"
## echo "ZL2FJA Low MET SR2HTFJ (MC Only Yields)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/mc/ZL2FJLMETA__SR2HTFJ.txt > cutflows/ZL2FJA_LMET_SR2HTFJ_MCOnly.csv

## echo "----------------------------"
## echo "ZL2FJA High MET SR1HTFJ (MC Only Yields)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/mc/ZL2FJHMETA__SR1HTFJ.txt > cutflows/ZL2FJA_HMET_SR1HTFJ_MCOnly.csv

## echo "----------------------------"
## echo "ZL3FJA ABCD SR1SumPtFJ (Data Driven)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/abcd/ZL3FJA__SR1SumPtFJ.txt > cutflows/ZL3FJA_SR1SumPtFJ_DataDriven.csv

## echo "----------------------------"
## echo "ZL3FJA ABCD SR1SumPtFJ (Data Driven + fitting)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/fit/ZL3FJA__SR1SumPtFJ.txt > cutflows/ZL3FJA_SR1SumPtFJ_Fitted.csv

## echo "----------------------------"
## echo "ZL3FJE ABCD SR1SumPtFJ (Data Driven + fitting)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/fit/ZL3FJE__SR1SumPtFJ.txt > cutflows/ZL3FJE_SR1SumPtFJ_Fitted.csv

## echo "----------------------------"
## echo "ZL2FJA ABCD HTFJ_binned (Data Driven)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/abcd/ZL2FJA__HTFJ_binned.txt > cutflows/ZL2FJA_HTFJ_binned_DataDriven.csv

## echo "----------------------------"
## echo "ZL2FJA ABCD HTFJ_binned (Data Driven + fitting)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/fit/ZL2FJA__HTFJ_binned.txt > cutflows/ZL2FJA_HTFJ_binned_Fitted.csv

## echo "----------------------------"
## echo "ZL2FJE ABCD HTFJ_binned (Data Driven + fitting)"
## echo "----------------------------"
#${PYTHON} ${CONVERTER}  plots/ZL/VVV0TreeV7/dim6/fit/ZL2FJE__HTFJ_binned.txt > cutflows/ZL2FJE_HTFJ_binned_Fitted.csv

## echo "----------------------------"
## echo "ZL3FJ ABCDEF SR1SumPtFJ"
## echo "----------------------------"
#HEADER=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL3FJA__Yield.txt | head -n 1)
#echo ${HEADER} > cutflows/ZL3FJ_SR1SumPtFJ_ABCDEF_Full.csv
#CUTS="ZL3FJA ZL3FJB ZL3FJC ZL3FJD ZL3FJE ZL3FJF"
#NLINERAW=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL3FJA__SR1SumPtFJ.txt | wc -l)
#NLINE=$((NLINERAW-4))
#NLINEONE=$((NLINE+1))
#for CUT in ${CUTS}; do
#    echo ${CUT} >> cutflows/ZL3FJ_SR1SumPtFJ_ABCDEF_Full.csv
#    LINE=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/${CUT}__SR1SumPtFJ.txt | tail -n ${NLINEONE} | head -n ${NLINE})
#    echo ${LINE} | tr ' ' '\n' >> cutflows/ZL3FJ_SR1SumPtFJ_ABCDEF_Full.csv
#done

## echo "----------------------------"
## echo "ZL2FJ ABCDEF HTFJ_binned"
## echo "----------------------------"
#HEADER=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJA__Yield.txt | head -n 1)
#echo ${HEADER} >> cutflows/ZL2FJ_HTFJ_binned_ABCDEF_Full.csv
#CUTS="ZL2FJA ZL2FJB ZL2FJC ZL2FJD ZL2FJE ZL2FJF"
#NLINERAW=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/ZL2FJA__HTFJ_binned.txt | wc -l)
#NLINE=$((NLINERAW-4))
#NLINEONE=$((NLINE+1))
#for CUT in ${CUTS}; do
#    echo ${CUT} >> cutflows/ZL2FJ_HTFJ_binned_ABCDEF_Full.csv
#    LINE=$(${PYTHON} ${CONVERTER}  plots/Cutflows/VVV0TreeV7/dim6/mc/${CUT}__HTFJ_binned.txt | tail -n ${NLINEONE} | head -n ${NLINE})
#    echo ${LINE} | tr ' ' '\n' >> cutflows/ZL2FJ_HTFJ_binned_ABCDEF_Full.csv
#done

