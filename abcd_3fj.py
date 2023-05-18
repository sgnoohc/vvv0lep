#!/bin/env python3

import ROOT as r
import sys

systs = ["Nominal"]
if len(sys.argv) > 1:
    systs = ["Nominal", "JESUp", "JESDn", "JERUp", "JERDn", "JMSUp", "JMSDn", "JMRUp", "JMRDn"]

hist_names = ["SR1SumPtFJ", "SR2SumPtFJ"]

for syst in systs:

    # Configuration
    tag = "VVV0TreeV6"
    dirname = f"output/{tag}/merged/{syst}"
    files = {}
    files["nonqcd"] = [
        [f"{dirname}/diboson.root", 1],
        [f"{dirname}/onetop.root", 1],
        [f"{dirname}/ttbar.root", 1],
        [f"{dirname}/ttv.root", 1],
        [f"{dirname}/w.root", 1],
        [f"{dirname}/z.root", 1],
        ]
    files["jetht"] = [[f"{dirname}/jetht.root", 1]]
    files["qcd"] = [[f"{dirname}/qcd.root", 1]]
    files["ddqcd"] = [
        [f"{dirname}/jetht.root", 1],
        [f"{dirname}/diboson.root", -1],
        [f"{dirname}/onetop.root", -1],
        [f"{dirname}/ttbar.root", -1],
        [f"{dirname}/ttv.root", -1],
        [f"{dirname}/w.root", -1],
        [f"{dirname}/z.root", -1],
        ]
    categs = ["nonqcd", "qcd", "jetht", "ddqcd"]
    regs = ["A", "B", "C", "D", "E", "F"]

    of = r.TFile(f"{dirname}/QCD.root", "recreate")

    for hist_name in hist_names:

        # Retrieve histograms
        h = {}
        for categ in categs:
            h[categ] = {}
            for reg in regs:
                h[categ][reg] = None
            h[categ]["files"] = files[categ]
            for reg in regs:
                for f, p in h[categ]["files"]:
                    tf = r.TFile(f)
                    th1 = tf.Get(f"ZL3FJ{reg}__{hist_name}")
                    if not h[categ][reg]:
                        h[categ][reg] = th1.Clone()
                        h[categ][reg].SetDirectory(0)
                    else:
                        h[categ][reg].Add(th1, p)

        # Compute A = B * C / D
        for categ in categs:
            h[categ]["PredA"] = h[categ]["B"].Clone()
            h[categ]["PredA"].Multiply(h[categ]["C"])
            h[categ]["PredA"].Divide(h[categ]["D"])
            h[categ]["PredE"] = h[categ]["B"].Clone()
            h[categ]["PredE"].Multiply(h[categ]["F"])
            h[categ]["PredE"].Divide(h[categ]["D"])

        # Save to file
        h[categ]["PredA"].SetName(f"ZL3FJA__{hist_name}")
        h[categ]["PredE"].SetName(f"ZL3FJE__{hist_name}")
        h[categ]["PredA"].SetDirectory(of)
        h[categ]["PredE"].SetDirectory(of)
        of.cd()
        h[categ]["PredA"].Write()
        h[categ]["PredE"].Write()

        # Need to save to the bunch of other histograms with different names
        for i in range(91):
            h[categ]["PredA"].SetName(f"ZL3FJAEFTIDX{i}__{hist_name}")
            h[categ]["PredA"].SetDirectory(of)
            h[categ]["PredA"].Write()

    of.Close()
