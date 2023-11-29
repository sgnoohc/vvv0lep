#!/bin/env python3

import ROOT as r
import math
import plottery_wrapper as p

#-----------------------

systs = {}
list_of_systs = ["PDF", "QCDScale", "JESUp", "JESDn", "JERUp", "JERDn"]
for s in list_of_systs:
    systs[s] = []

#-----------------------

f = r.TFile("output/VVV0TreeV12/Run2/merged/vvv1jdim6.root")

nominals = []
errors = []

hnom = f.Get("ZL3FJA__SR1SumPtFJ")

for i in range(1, hnom.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    nominals.append(nom)
    errors.append(err)

#-----------------------

hvar = f.Get("ZL3FJA__SR1SumPtFJ_v_Wgts")

nQCDScales = 8
QCDScales = range(103, 103 + nQCDScales)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    maxdiff = 0
    for j in QCDScales:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        if abs(diff) > abs(maxdiff):
            maxdiff = diff
    unc = maxdiff
    frac = unc / nom
    systs["QCDScale"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nPDFs = 101
PDFs = range(1, 1 + nPDFs)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in PDFs:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["PDF"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

#--------------------

hvar = f.Get("ZL3FJAJESUp__SR1SumPtFJJESUp")
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    var = hvar.GetBinContent(i)
    diff = nom - var
    frac = diff / nom
    systs["JESUp"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

hvar = f.Get("ZL3FJAJESDn__SR1SumPtFJJESDn")
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    var = hvar.GetBinContent(i)
    diff = nom - var
    frac = diff / nom
    systs["JESDn"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

hvar = f.Get("ZL3FJAJERUp__SR1SumPtFJJERUp")
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    var = hvar.GetBinContent(i)
    diff = nom - var
    frac = diff / nom
    systs["JERUp"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

hvar = f.Get("ZL3FJAJERDn__SR1SumPtFJJERDn")
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    var = hvar.GetBinContent(i)
    diff = nom - var
    frac = diff / nom
    systs["JERDn"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")


#---------------------

columns = ",".join(list_of_systs)
print(f"Y,,E,{columns}")
for i, (n, e) in enumerate(zip(nominals, errors)):
    syst_errs = []
    for s in list_of_systs:
        syst_errs.append(str(systs[s][i]))
    syst_errs_str = ",".join(syst_errs)
    print(f"{n},\xB1,{e},{syst_errs_str}")

#---------------------

hvar = f.Get("ZL3FJAJESUp__SR1SumPtFJJESUp")
hvar.Print("all")
hvar = f.Get("ZL3FJBJESUp__SR1SumPtFJJESUp")
hvar.Print("all")
hvar = f.Get("ZL3FJCJESUp__SR1SumPtFJJESUp")
hvar.Print("all")
hvar = f.Get("ZL3FJDJESUp__SR1SumPtFJJESUp")
hvar.Print("all")
hvar = f.Get("ZL3FJEJESUp__SR1SumPtFJJESUp")
hvar.Print("all")

hvar = f.Get("ZL3FJA__SR1SumPtFJ")
hvar.Print("all")
hvar = f.Get("ZL3FJB__SR1SumPtFJ")
hvar.Print("all")
hvar = f.Get("ZL3FJC__SR1SumPtFJ")
hvar.Print("all")
hvar = f.Get("ZL3FJD__SR1SumPtFJ")
hvar.Print("all")
hvar = f.Get("ZL3FJE__SR1SumPtFJ")
hvar.Print("all")
