#!/bin/env python3

import ROOT as r
import plot_config as c
import sys

systs = ["Nominal"]
if len(sys.argv) > 1:
    systs = ["Nominal", "JESUp", "JESDn", "JERUp", "JERDn", "JMSUp", "JMSDn", "JMRUp", "JMRDn"]

def suffix(syst):
    if "JESUp" in syst: return "_jes_Up"
    if "JESDn" in syst: return "_jes_Dn"
    if "JERUp" in syst: return "_jer_Up"
    if "JERDn" in syst: return "_jer_Dn"
    if "JMSUp" in syst: return "_jms_Up"
    if "JMSDn" in syst: return "_jms_Dn"
    if "JMRUp" in syst: return "_jmr_Up"
    if "JMRDn" in syst: return "_jmr_Dn"
    else: return ""

stat_file_name = "VVV.0L_3FJ.DataCard_Yields.v1.root"
stat_file = r.TFile(stat_file_name, "RECREATE")

samples = ["WW", "WZ", "ZZ", "ttV", "QCD", "WJets", "DY", "TTbar", "sm"]

hist_name = "ZL3FJA__SR2SumPtFJ"

for syst in systs:
    dirname = f"{c.mdir(syst)}"
    bg_files = c.ddfnames(f"{syst}")
    syst_suffix = suffix(syst)
    for s in samples:
        f = r.TFile(f"{dirname}/{s}.root")
        h = f.Get(hist_name).Clone()
        h.SetName(f"h_{s}{syst_suffix}")
        h.SetDirectory(stat_file)
        stat_file.cd()
        h.Write()

eft_names = [
"cW_m10p0",
"cW_m5p0",
"cW_m1p0",
"cW_m0p7",
"cW_m0p5",
"cW_m0p3",
"cW_m0p1",
"cW_m0p05",
"cW_m0p01",
"cW_0p01",
"cW_0p05",
"cW_0p1",
"cW_0p3",
"cW_0p5",
"cW_0p7",
"cW_1p0",
"cW_5p0",
"cW_10p0",
]

dirname = f'{c.mdir("Nominal")}'
f = r.TFile(f"{dirname}/wwwdim6.root")
for eft_idx, eft_name in enumerate(eft_names):
    idx = eft_idx + 1 
    hist_name = f"ZL3FJAEFTIDX{idx}__SR2SumPtFJ"
    h = f.Get(hist_name).Clone()
    h.SetName(f"h_WWW_{eft_name}")
    h.SetDirectory(stat_file)
    stat_file.cd()
    h.Write()


stat_file.Close()

