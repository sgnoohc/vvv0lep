#!/bin/env python3

import datacard_writer as dw
import ROOT as r
import sys

def set_title(h):
    print(h)
    h.SetTitle(h.GetName().replace("h_", ""))

channel = "2FJ"
version = "v11"

f = r.TFile(f"../datacards/VVV.0L_{channel}.DataCard_Yields.{version}.root")

bgs = []
bgs.append(f.Get("h_WW"))
bgs.append(f.Get("h_WZ"))
bgs.append(f.Get("h_ZZ"))
bgs.append(f.Get("h_ttV"))
bgs.append(f.Get("h_QCDFIT"))
bgs.append(f.Get("h_WJets"))
bgs.append(f.Get("h_DY"))
bgs.append(f.Get("h_TTbar"))
for bkg in bgs:
    set_title(bkg)

sig = f.Get("h_VVV_cW_1p0")
set_title(sig)

systs = []

d = dw.DataCardWriter(sig=sig, bgs=bgs, data=None, systs=systs, no_stat_procs=[])

for i in range(sig.GetNbinsX()):

    ibin = i + 1

    d.set_bin(ibin)
    d.set_region_name(f"bin{ibin}")
    d.write(f"{channel}_{version}/datacard_bin{ibin}.txt")

