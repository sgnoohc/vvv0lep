#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

for syst in systs:

    for sig in ["dim8", "dim6"]:

        data_fname = f"{c.mdir(syst)}/jetht.root"

        histxaxislabeloptions = {
                "SR3SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": False},
                "SR2SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "SR1SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "VMD0"        : {"xaxis_label" : "V_{MD,lead} [GeV]"   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "VMD1"        : {"xaxis_label" : "V_{MD,sublead}"      , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "VMD2"        : {"xaxis_label" : "V_{MD,trail}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "VMD2"        : {"xaxis_label" : "V_{MD,trail}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": True},
                "Yield"       : {"xaxis_label" : "Yield"               , "xaxis_ndivisions" : 505, "nbins": 1 , "signal_scale": 137.64/59.83, "yaxis_log": True},
                "NbLoose"     : {"xaxis_label" : "NbLoose"             , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": True},
                "NbMedium"    : {"xaxis_label" : "NbMedium"            , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": True},
                "NbTight"     : {"xaxis_label" : "NbTight"             , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": True},
                "NoORNbLoose" : {"xaxis_label" : "NoORNbLoose"         , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": False},
                "NoORNbMedium": {"xaxis_label" : "NoORNbMedium"        , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": False},
                "NoORNbTight" : {"xaxis_label" : "NoORNbTight"         , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": 137.64/59.83, "yaxis_log": False},
                "MVVX"        : {"xaxis_label" : "MVVX"                , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 137.64/59.83, "yaxis_log": False},
                }

        cut_regions = ["ZL3FJ", "ZL3FJPresel", "ZL3FJM150", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF", "ZL3FJAEFTIDX12", "ZL3FJAFT0"]
        filter_patterns = []
        for hist_name in histxaxislabeloptions.keys():
            for cut_region in cut_regions:
                filter_patterns.append(f"{cut_region}__{hist_name}")
        filter_pattern = ",".join(filter_patterns)

        ## MC Out-of-the-box
        c.extraoptions["yaxis_log"] = False
        p.dump_plot(
                fnames = c.fnames(syst),
                legend_labels = c.legend_labels,
                sig_fnames = c.sig_fnames_dim8(syst) if sig == "dim8" else c.sig_fnames_dim6(syst),
                signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
                data_fname = data_fname,
                usercolors = c.usercolors,
                filter_pattern = filter_pattern,
                dirname = f"plots/ZL3FJ/{c.tag}/{syst}/{sig}/mc",
                dogrep = True,
                extraoptions = c.extraoptions,
                histxaxislabeloptions = histxaxislabeloptions,
                )

        cut_regions = ["ZL3FJA", "ZL3FJE", "ZL3FJAEFTIDX12", "ZL3FJAFT0"]
        filter_patterns = []
        for hist_name in histxaxislabeloptions.keys():
            if hist_name not in ["SR2SumPtFJ", "SR1SumPtFJ"]:
                continue
            for cut_region in cut_regions:
                filter_patterns.append(f"{cut_region}__{hist_name}")
        filter_pattern = ",".join(filter_patterns)

        ## Data Driven
        p.dump_plot(
                fnames = c.ddfnames(syst),
                legend_labels = c.ddlegend_labels,
                sig_fnames = c.sig_fnames_dim8(syst) if sig == "dim8" else c.sig_fnames_dim6(syst),
                signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
                data_fname = data_fname,
                usercolors = c.ddusercolors,
                filter_pattern = filter_pattern,
                dirname = f"plots/ZL3FJ/{c.tag}/{syst}/{sig}/abcd",
                dogrep = True,
                extraoptions = c.extraoptions,
                histxaxislabeloptions = histxaxislabeloptions,
                )

