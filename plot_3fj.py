#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

for syst in systs:

    for sig in ["dim6"]:

        data_fname = f"{c.mdir(syst)}/jetht.root"

        signal_scale = 137.64/59.83
        # signal_scale = "auto"
        # signal_scale = 1

        histxaxislabeloptions = {
                "SR3SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True, "divide_by_bin_width": False},
                "SR2SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True, "divide_by_bin_width": False},
                "SR1SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True, "divide_by_bin_width": False},
                "SumPtFJ"     : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True},
                "VMD0"        : {"xaxis_label" : "V_{MD,lead}"         , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "VMD1"        : {"xaxis_label" : "V_{MD,sublead}"      , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "VMD2"        : {"xaxis_label" : "V_{MD,trail}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Pt0"         : {"xaxis_label" : "p_{T,lead} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Pt1"         : {"xaxis_label" : "p_{T,sublead} [GeV]" , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Pt2"         : {"xaxis_label" : "p_{T,trail} [GeV]"   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass0"       : {"xaxis_label" : "M_{lead} [GeV]"      , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass1"       : {"xaxis_label" : "M_{sublead} [GeV]"   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass2"       : {"xaxis_label" : "M_{trail} [GeV]"     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass01"      : {"xaxis_label" : "M_{01} [GeV]"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass02"      : {"xaxis_label" : "M_{02} [GeV]"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Mass12"      : {"xaxis_label" : "M_{12} [GeV]"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "DPhi01"      : {"xaxis_label" : "#Delta#phi_{01}"     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "DPhi02"      : {"xaxis_label" : "#Delta#phi_{02}"     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "DPhi12"      : {"xaxis_label" : "#Delta#phi_{12}"     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                "Yield"       : {"xaxis_label" : "Yield"               , "xaxis_ndivisions" : 505, "nbins": 1 , "signal_scale": signal_scale, "yaxis_log": False},
                "NbLoose"     : {"xaxis_label" : "NbLoose"             , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "NbMedium"    : {"xaxis_label" : "NbMedium"            , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "NbTight"     : {"xaxis_label" : "NbTight"             , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "NoORNbLoose" : {"xaxis_label" : "NoORNbLoose"         , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "NoORNbMedium": {"xaxis_label" : "NoORNbMedium"        , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "NoORNbTight" : {"xaxis_label" : "NoORNbTight"         , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
                "MVVX"        : {"xaxis_label" : "MVVX"                , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
                }

        # cut_regions = ["ZL3FJ", "ZL3FJPresel", "ZL3FJM150", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF", "ZL3FJAEFTIDX12", "ZL3FJAFT0"]
        # cut_regions = ["ZL3FJ", "ZL3FJPresel", "ZL3FJM150", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF"]
        cut_regions = ["ZL3FJ", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF", "ZL3FJTop", "ZL3FJAEFTIDX16", "ZL3FJEEFTIDX12", "ZL3FJAHigh", "ZL3FJAHighEFTIDX12", "ZL3FJAHighEFTIDX16"]
        # cut_regions = ["ZL3FJA", "ZL3FJB", "ZL3FJE", "ZL3FJTop"]
        # cut_regions = ["ZL3FJAEFTIDX16"]
        filter_patterns = []
        for cut_region in cut_regions:
            for hist_name in histxaxislabeloptions.keys():
                filter_patterns.append(f"{cut_region}__{hist_name}")
            filter_patterns.append(f"{cut_region}_cutflow")
            filter_patterns.append(f"{cut_region}_rawcutflow")
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
                dogrep = False,
                extraoptions = c.extraoptions,
                histxaxislabeloptions = histxaxislabeloptions,
                )

        cut_regions = ["ZL3FJA", "ZL3FJE", "ZL3FJAEFTIDX16", "ZL3FJAEFTIDX12"]
        filter_patterns = []
        for hist_name in histxaxislabeloptions.keys():
            # if hist_name not in ["SR2SumPtFJ", "SR1SumPtFJ"]:
            #     continue
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
                dogrep = False,
                extraoptions = c.extraoptions,
                histxaxislabeloptions = histxaxislabeloptions,
                )

