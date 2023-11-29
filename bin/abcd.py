#!/bin/env python3

import ROOT as r
import sys
from systematics import systs
import plot_config as c

hist_names = [
        ("ZL3FJ", "SR1SumPtFJ"),
        # ("ZL3FJ", "SumPtFJFit"),
        # ("ZL3FJ", "SumPtFJZoom"),
        # ("ZL3FJ", "SumPtFJFit2"),
        ("ZL2FJ", "HTFJ_binned"),
        ("ZL2FJ", "HTFJFit2"),
        # ("ZL2FJ", "HTFJFit"),
        ]

# for year in [2006, 2016, 2017, 2018, "Run2"]:
for year in ["Run2"]:

    # Configuration
    dirname = f"output/{c.tag}/{year}/merged/"
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
    of_closure = r.TFile(f"{dirname}/qcd_closure.root", "recreate")

    for channel, hist_name in hist_names:

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
                    th1 = tf.Get(f"{channel}{reg}__{hist_name}")
                    if not h[categ][reg]:
                        # print(f)
                        print(f"{channel}{reg}__{hist_name}")
                        # print(th1)
                        h[categ][reg] = th1.Clone()
                        # print(categ, reg, h[categ][reg])
                        h[categ][reg].SetDirectory(0)
                    else:
                        h[categ][reg].Add(th1, p)

        # Compute A = B * C / D
        for categ in categs:
            # if categ == "qcd":
                # print(categ, hist_name, channel, year)
                # print("A")
                # h[categ]["A"].Print("all")
                # print("B")
                # h[categ]["B"].Print("all")
                # print("C")
                # h[categ]["C"].Print("all")
                # print("D")
                # h[categ]["D"].Print("all")
                # print("E")
                # h[categ]["E"].Print("all")
                # print("F")
                # h[categ]["F"].Print("all")
            h[categ]["PredA"] = h[categ]["B"].Clone()
            h[categ]["PredA"].Multiply(h[categ]["C"])
            h[categ]["PredA"].Divide(h[categ]["D"])
            h[categ]["PredE"] = h[categ]["F"].Clone()
            h[categ]["PredE"].Multiply(h[categ]["C"])
            h[categ]["PredE"].Divide(h[categ]["D"])
            # print("PredA")
            # h[categ]["PredA"].Print("all")
            # print("PredE")
            # h[categ]["PredE"].Print("all")

        # Save to file
        of.cd()
        h["ddqcd"]["PredA"].SetName(f"{channel}A__{hist_name}")
        h["ddqcd"]["PredE"].SetName(f"{channel}E__{hist_name}")
        h["ddqcd"]["PredA"].SetDirectory(of)
        h["ddqcd"]["PredE"].SetDirectory(of)
        of.cd()
        h["ddqcd"]["PredA"].Write()
        h["ddqcd"]["PredE"].Write()
        h["ddqcd"]["PredA"].Write()

        # Save to file
        of_closure.cd()
        h["qcd"]["PredA"].SetName(f"{channel}A__{hist_name}")
        h["qcd"]["PredE"].SetName(f"{channel}E__{hist_name}")
        h["qcd"]["PredA"].SetDirectory(of_closure)
        h["qcd"]["PredE"].SetDirectory(of_closure)
        of_closure.cd()
        h["qcd"]["PredA"].Write()
        h["qcd"]["PredE"].Write()

        # Compute systematics from closure
        h["qcd"]["syst"] = h["qcd"]["PredA"].Clone()
        h["qcd"]["syst"].Divide(h["qcd"]["A"])
        h["ddqcd"]["PredASyst"] = h["ddqcd"]["PredA"].Clone()
        h["ddqcd"]["PredASyst"].SetName(f"{channel}A__{hist_name}_ABCDSyst")
        for i in range(0, h["qcd"]["syst"].GetNbinsX()+2):
            bc = h["qcd"]["syst"].GetBinContent(i)
            be = h["qcd"]["syst"].GetBinError(i)
            bc = abs(bc-1)
            syst = bc if bc > be else be
            h["ddqcd"]["PredASyst"].SetBinError(i, h["ddqcd"]["PredASyst"].GetBinContent(i) * syst)
        of.cd()
        h["ddqcd"]["PredASyst"].Write()

    of.Close()
    of_closure.Close()
