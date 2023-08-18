#!/bin/env python3

import datacard_writer as dw
import ROOT as r
import sys

r_limit_file = open("r_limit.txt")
lines = r_limit_file.readlines()

r_limit = float(lines[0])

r.gROOT.SetBatch(True)

version = "v11"
channel = "2FJ"

f = r.TFile(f"../datacards/VVV.0L_{channel}.DataCard_Yields.{version}.root")

points = [-10.0, -5.0, -1.0, -0.7, -0.5, -0.3, -0.1, -0.05, -0.01, 0.01, 0.05, 0.1, 0.3, 0.5, 0.7, 1.0, 5.0, 10.0]

data = []

y_at_1p0 = 0

for point in points:
    pt_str = str(point)
    pt_str = pt_str.replace("-", "m")
    pt_str = pt_str.replace(".", "p")
    h = f.Get(f"h_VVV_cW_{pt_str}")
    y = h.GetBinContent(h.GetNbinsX())
    if point == 1.0:
        y_at_1p0 = y
    data.append((point, y))

g = r.TGraph(len(points))

for i, d in enumerate(data):
    g.SetPoint(i, d[0], d[1])

tf1 = r.TF1("myfunc", "pol2")

g.Fit(tf1)

y_limit = y_at_1p0 * r_limit

c = tf1.GetParameter(0) - y_limit
b = tf1.GetParameter(1)
a = tf1.GetParameter(2)

hi_x_limit = (-b + (b ** 2 - 4 * a * c) ** 0.5) / (2 * a)
lo_x_limit = (-b - (b ** 2 - 4 * a * c) ** 0.5) / (2 * a)

c = r.TCanvas()

g.Draw("alp")

c.SaveAs("fit.pdf")


print("cW limit:", hi_x_limit)
print("cW limit:", lo_x_limit)
