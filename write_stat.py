#!/bin/env python3

import ROOT as r
import plot_config as c
import sys
from systematics import systs

def suffix(syst):
    if "JESUp" in syst: return "_jes_Up"
    elif "JESDn" in syst: return "_jes_Down"
    elif "JERUp" in syst: return "_jer_Up"
    elif "JERDn" in syst: return "_jer_Down"
    elif "JMSUp" in syst: return "_jms_Up"
    elif "JMSDn" in syst: return "_jms_Down"
    elif "JMRUp" in syst: return "_jmr_Up"
    elif "JMRDn" in syst: return "_jmr_Down"
    elif "prefireWgtUp" in syst: return "_prefire_weight_Up"
    elif "prefireWgtDn" in syst: return "_prefire_weight_Down"
    elif "puWgtUp" in syst: return "_pu_weight_Up"
    elif "puWgtDn" in syst: return "_pu_weight_Down"
    elif "trigWgtUp" in syst: return "_trigger_weight_Up"
    elif "trigWgtDn" in syst: return "_trigger_weight_Down"
    else: return ""

stat_file_name = "VVV.0L_3FJ.DataCard_Yields.v4.root"
stat_file = r.TFile(stat_file_name, "RECREATE")

samples = ["WW", "WZ", "ZZ", "ttV", "QCD", "WJets", "DY", "TTbar"]

hist_name = "ZL3FJA__SR2SumPtFJ"

for s in samples:
    for syst in systs:
        dirname = f"{c.mdir(syst)}"
        bg_files = c.ddfnames(f"{syst}")
        syst_suffix = suffix(syst)
        f = r.TFile(f"{dirname}/{s}.root")
        h = f.Get(hist_name).Clone()
        h.SetName(f"h_{s}{syst_suffix}")
        h.SetDirectory(stat_file)
        stat_file.cd()
        h.Write()

eft_names = [
"cW_0p0",
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

# signals = ["wwwdim6", "wwzdim6", "wzzdim6", "zzzdim6", "vvvdim6"]
# signames = {"wwwdim6": "WWW", "wwzdim6": "WWZ", "wzzdim6": "WZZ", "zzzdim6": "ZZZ", "vvvdim6": "VVV"}

signals = ["vvvdim6"]
signames = {"vvvdim6": "WWW"}

for eft_idx, eft_name in enumerate(eft_names):
    for s in signals:
        for syst in systs:
            syst_suffix = suffix(syst)
            dirname = f'{c.mdir(syst)}'
            f = r.TFile(f"{dirname}/{s}.root")
            idx = eft_idx
            hist_name = f"ZL3FJAEFTIDX{idx}__SR2SumPtFJ"
            h = f.Get(hist_name).Clone()
            h.SetName(f"h_{signames[s]}_{eft_name}{syst_suffix}")
            h.SetDirectory(stat_file)
            h.Scale(137.64/59.83)
            stat_file.cd()
            h.Write()


stat_file.Close()

