#!/bin/env python3

import ROOT as r

# Configuration
tag = "VVV0TreeV6"
dirname = f"output/{tag}/merged"
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
            th1 = tf.Get(f"ZL3FJ{reg}__SR2SumPtFJ")
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
of = r.TFile(f"{dirname}/ddqcd.root", "recreate")
h[categ]["PredA"].SetName("ZL3FJA__SR2SumPtFJ")
h[categ]["PredE"].SetName("ZL3FJE__SR2SumPtFJ")
h[categ]["PredA"].SetDirectory(of)
h[categ]["PredE"].SetDirectory(of)
h[categ]["PredA"].Write()
h[categ]["PredE"].Write()

# Need to save to the bunch of other histograms with different names
for i in range(91):
    h[categ]["PredA"].SetName(f"ZL3FJAEFTIDX{i}__SR2SumPtFJ")
    h[categ]["PredA"].SetDirectory(of)
    h[categ]["PredA"].Write()

of.Close()
