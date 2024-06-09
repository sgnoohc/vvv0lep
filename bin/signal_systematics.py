#!/bin/env python3 
import ROOT as r
import math
import plottery_wrapper as p
import sys
import numpy as np

#-----------------------

systs = {}
# list_of_systs = ["PDF", "QCDScale", "JESUp", "JESDn", "JERUp", "JERDn"]
# list_of_systs = ["PDF", "QCDScale", "Prefire", "PileUp", "JESUp", "JESDn"]

list_of_systs_to_print = ["PDF", "QCDScale", "Prefire", "PileUpUp", "PileUpDn", "TriggerUp", "TriggerDn", "AlphaSUp", "AlphaSDn", "JESUp", "JESDn", "JERUp", "JERDn"]

# hist_region = "ZL3FJA"
# hist_name_jes = "SR1SumPtFJ"
# hist_name_jer = "SR1SumPtFJ"
# hist_name_nom = "SR1SumPtFJ"

hist_region = "ZL2FJA"
hist_name_jes = "HTFJ_binned"
hist_name_jer = "HTFJ_binned"
hist_name_nom = "HTFJ_binned"

jes_systs = [
# "JESUp",
# "JESDn",
# "JERUp",
# "JERDn",
"jesAbsoluteMPFBiasdn",
"jesAbsoluteMPFBiasup",
"jesAbsoluteScaledn",
"jesAbsoluteScaleup",
"jesAbsoluteStatdn",
"jesAbsoluteStatup",
"jesFlavorQCDdn",
"jesFlavorQCDup",
"jesFragmentationdn",
"jesFragmentationup",
"jesPileUpDataMCdn",
"jesPileUpDataMCup",
"jesPileUpPtBBdn",
"jesPileUpPtBBup",
"jesPileUpPtEC1dn",
"jesPileUpPtEC1up",
"jesPileUpPtEC2dn",
"jesPileUpPtEC2up",
"jesPileUpPtHFdn",
"jesPileUpPtHFup",
"jesPileUpPtRefdn",
"jesPileUpPtRefup",
"jesRelativeBaldn",
"jesRelativeBalup",
"jesRelativeFSRdn",
"jesRelativeFSRup",
# "jesRelativeJEREC1dn",
# "jesRelativeJEREC1up",
# "jesRelativeJEREC2dn",
# "jesRelativeJEREC2up",
# "jesRelativeJERHFdn",
# "jesRelativeJERHFup",
"jesRelativePtBBdn",
"jesRelativePtBBup",
"jesRelativePtEC1dn",
"jesRelativePtEC1up",
"jesRelativePtEC2dn",
"jesRelativePtEC2up",
"jesRelativePtHFdn",
"jesRelativePtHFup",
"jesRelativeSampledn",
"jesRelativeSampleup",
"jesRelativeStatECdn",
"jesRelativeStatECup",
"jesRelativeStatFSRdn",
"jesRelativeStatFSRup",
"jesRelativeStatHFdn",
"jesRelativeStatHFup",
"jesSinglePionECALdn",
"jesSinglePionECALup",
"jesSinglePionHCALdn",
"jesSinglePionHCALup",
"jesTimePtEtadn",
"jesTimePtEtaup",
]

jer_systs = [
"jesRelativeJEREC1dn",
"jesRelativeJEREC1up",
"jesRelativeJEREC2dn",
"jesRelativeJEREC2up",
"jesRelativeJERHFdn",
"jesRelativeJERHFup",
]

list_of_systs = list_of_systs_to_print + jes_systs + jer_systs

for s in list_of_systs:
    systs[s] = []

#-----------------------

f = r.TFile("output/VVV0TreeV13.2/Run2/merged/vvv1jdim6.root")

nominals = []
errors = []

hnom = f.Get("{}__{}".format(hist_region, hist_name_nom))
hnom.Print("all")

for i in range(1, hnom.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    nominals.append(nom)
    errors.append(err)

#-----------------------

hvar = f.Get("{}__{}_v_Wgts".format(hist_region, hist_name_nom))

nQCDScales = 8
QCDScales = range(1, 1 + nQCDScales)
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

nPrefires = 2
Prefires = range(10, 10 + nPrefires)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in Prefires:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["Prefire"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nPileUpUps = 1
PileUpUps = range(13, 13 + nPileUpUps)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in PileUpUps:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["PileUpUp"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nPileUpDns = 1
PileUpDns = range(14, 14 + nPileUpDns)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in PileUpDns:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["PileUpDn"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nTriggerUps = 1
TriggerUps = range(16, 16 + nTriggerUps)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in TriggerUps:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["TriggerUp"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nTriggerDns = 1
TriggerDns = range(17, 17 + nTriggerDns)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in TriggerDns:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["TriggerDn"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nPDFs = 101
PDFs = range(19, 19 + nPDFs)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in PDFs:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
        print(f"bin{i} {diff/nom}")
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["PDF"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nAlphaSUps = 1
AlphaSUps = range(16, 16 + nAlphaSUps)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in AlphaSUps:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["AlphaSUp"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

nAlphaSDns = 1
AlphaSDns = range(17, 17 + nAlphaSDns)
for i in range(1, hvar.GetNbinsX() + 1):
    nom = hnom.GetBinContent(i)
    err = hnom.GetBinError(i) / nom
    sumsq = 0
    for j in AlphaSDns:
        var = hvar.GetBinContent(i, j)
        diff = nom - var
        sumsq += diff**2
    unc = math.sqrt(sumsq)
    frac = unc / nom
    systs["AlphaSDn"].append(frac)
    # print(f"bin{i}, {nom}, {err}, {frac}")

#--------------------

for ijes in jes_systs:
    hvar = f.Get("{}{}__{}{}".format(hist_region, ijes, hist_name_jes, ijes))
    # hnom.Print("all")
    # hvar.Print("all")
    for i in range(1, hvar.GetNbinsX() + 1):
        nom = hnom.GetBinContent(i)
        err = hnom.GetBinError(i) / nom
        var = hvar.GetBinContent(i)
        diff = nom - var
        frac = diff / nom
        systs[ijes].append(frac)
        # print(f"bin{i}, {nom}, {err}, {frac}")

#--------------------

for ijer in jer_systs:
    hvar = f.Get("{}{}__{}{}".format(hist_region, ijer, hist_name_jer, ijer))
    # hnom.Print("all")
    # hvar.Print("all")
    for i in range(1, hvar.GetNbinsX() + 1):
        nom = hnom.GetBinContent(i)
        err = hnom.GetBinError(i) / nom
        var = hvar.GetBinContent(i)
        diff = nom - var
        frac = diff / nom
        systs[ijer].append(frac)
        # print(f"bin{i}, {nom}, {err}, {frac}")

#---------------------
# Processing jes_systs systs and getting the square sums

nbin = len(systs[jes_systs[0]]) # get first jes_systs and get the nbin info

for ibin in range(nbin):
    minuses = []
    pluses = []
    for ijes in jes_systs:
        syst_err = systs[ijes][ibin]
        if syst_err > 0:
            pluses.append(syst_err)
        else:
            minuses.append(syst_err)
    pluses = np.array(pluses)
    minuses = np.array(minuses)
    plus_err = np.sqrt(np.sum(pluses * pluses))
    minus_err = np.sqrt(np.sum(minuses * minuses))
    systs["JESUp"].append(plus_err)
    systs["JESDn"].append(-minus_err)

#---------------------
# Processing jer_systs systs and getting the square sums

nbin = len(systs[jer_systs[0]]) # get first jer_systs and get the nbin info

for ibin in range(nbin):
    minuses = []
    pluses = []
    for ijer in jer_systs:
        syst_err = systs[ijer][ibin]
        if syst_err > 0:
            pluses.append(syst_err)
        else:
            minuses.append(syst_err)
    pluses = np.array(pluses)
    minuses = np.array(minuses)
    plus_err = np.sqrt(np.sum(pluses * pluses))
    minus_err = np.sqrt(np.sum(minuses * minuses))
    systs["JERUp"].append(plus_err)
    systs["JERDn"].append(-minus_err)

#---------------------

columns = ",".join(list_of_systs_to_print)
print(f"Y,,E,{columns}")
for i, (n, e) in enumerate(zip(nominals, errors)):
    syst_errs = []
    for s in list_of_systs_to_print:
        syst_errs.append(f"{systs[s][i]:.8g}")
    syst_errs_str = ",".join(syst_errs)
    print(f"{n:.4g},\xB1,{e:.4g},{syst_errs_str}")

#---------------------

#hvar = f.Get("ZL3FJAJESDn__SR1SumPtFJJESDn")
#for i in range(1, hvar.GetNbinsX() + 1):
#    nom = hnom.GetBinContent(i)
#    err = hnom.GetBinError(i) / nom
#    var = hvar.GetBinContent(i)
#    diff = nom - var
#    frac = diff / nom
#    systs["JESDn"].append(frac)
#    # print(f"bin{i}, {nom}, {err}, {frac}")

#hvar = f.Get("ZL3FJAJERUp__SR1SumPtFJJERUp")
#for i in range(1, hvar.GetNbinsX() + 1):
#    nom = hnom.GetBinContent(i)
#    err = hnom.GetBinError(i) / nom
#    var = hvar.GetBinContent(i)
#    diff = nom - var
#    frac = diff / nom
#    systs["JERUp"].append(frac)
#    # print(f"bin{i}, {nom}, {err}, {frac}")

#hvar = f.Get("ZL3FJAJERDn__SR1SumPtFJJERDn")
#for i in range(1, hvar.GetNbinsX() + 1):
#    nom = hnom.GetBinContent(i)
#    err = hnom.GetBinError(i) / nom
#    var = hvar.GetBinContent(i)
#    diff = nom - var
#    frac = diff / nom
#    systs["JERDn"].append(frac)
#    # print(f"bin{i}, {nom}, {err}, {frac}")

# hvar = f.Get("ZL3FJAJESUp__SR1SumPtFJJESUp")
# hvar.Print("all")
# hvar = f.Get("ZL3FJBJESUp__SR1SumPtFJJESUp")
# hvar.Print("all")
# hvar = f.Get("ZL3FJCJESUp__SR1SumPtFJJESUp")
# hvar.Print("all")
# hvar = f.Get("ZL3FJDJESUp__SR1SumPtFJJESUp")
# hvar.Print("all")
# hvar = f.Get("ZL3FJEJESUp__SR1SumPtFJJESUp")
# hvar.Print("all")

# hvar = f.Get("ZL3FJA__SR1SumPtFJ")
# hvar.Print("all")
# hvar = f.Get("ZL3FJB__SR1SumPtFJ")
# hvar.Print("all")
# hvar = f.Get("ZL3FJC__SR1SumPtFJ")
# hvar.Print("all")
# hvar = f.Get("ZL3FJD__SR1SumPtFJ")
# hvar.Print("all")
# hvar = f.Get("ZL3FJE__SR1SumPtFJ")
# hvar.Print("all")
