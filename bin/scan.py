#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

for sig in ["dim6"]:

    data_fname = f"{c.mdir}/jetht.root"

    # signal_scale = 137.64/59.83
    # signal_scale = "auto"
    signal_scale = 1

    histxaxislabeloptions = {
            "D012"        : {"xaxis_label" : "D012"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False },
            "SR3SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR2SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR1SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SumPtFJFit"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "HT_binned"   : {"xaxis_label" : "H_{T} [GeV]"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "HTJ_binned"  : {"xaxis_label" : "H_{T} [GeV]"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "HT"          : {"xaxis_label" : "H_{T} [GeV]"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR1HTFJ"     : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR2HTFJ"     : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR1HT"       : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SR2HT"       : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "HTFJ"        : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False, "divide_by_bin_width": False},
            "SumPtFJ"     : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "SumPtJ"      : {"xaxis_label" : "H_{T,AK4Jet} [GeV]"     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "VMD0"        : {"xaxis_label" : "V_{MD,lead}"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "VMD1"        : {"xaxis_label" : "V_{MD,sublead}"         , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "VMD2"        : {"xaxis_label" : "V_{MD,trail}"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "WMD0"        : {"xaxis_label" : "W_{MD,lead}"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "WMD1"        : {"xaxis_label" : "W_{MD,sublead}"         , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Pt01"        : {"xaxis_label" : "p_{T,01} [GeV]"         , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Pt0"         : {"xaxis_label" : "p_{T,lead} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Pt1"         : {"xaxis_label" : "p_{T,sublead} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Pt2"         : {"xaxis_label" : "p_{T,trail} [GeV]"      , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass0"       : {"xaxis_label" : "M_{lead} [GeV]"         , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass1"       : {"xaxis_label" : "M_{sublead} [GeV]"      , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass2"       : {"xaxis_label" : "M_{trail} [GeV]"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass01"      : {"xaxis_label" : "M_{01} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass02"      : {"xaxis_label" : "M_{02} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass12"      : {"xaxis_label" : "M_{12} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "DPhi01"      : {"xaxis_label" : "#Delta#phi_{01}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "DPhi02"      : {"xaxis_label" : "#Delta#phi_{02}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "DPhi12"      : {"xaxis_label" : "#Delta#phi_{12}"        , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "NbLoose"     : {"xaxis_label" : "NbLoose"                , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "NbMedium"    : {"xaxis_label" : "NbMedium"               , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "NbTight"     : {"xaxis_label" : "NbTight"                , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "NoORNbLoose" : {"xaxis_label" : "NoORNbLoose"            , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "NoORNbMedium": {"xaxis_label" : "NoORNbMedium"           , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "NoORNbTight" : {"xaxis_label" : "NoORNbTight"            , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": False},
            "MVVX"        : {"xaxis_label" : "M_{VVX} [GeV]"          , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "MET"         : {"xaxis_label" : "MET [GeV]"              , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "SRMET"       : {"xaxis_label" : "MET [GeV]"              , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Yield"       : {"xaxis_label" : "Yield"                  , "xaxis_ndivisions" : 505, "nbins": 1 , "signal_scale": signal_scale, "yaxis_log": False},
            }

    ## Data-Driven histograms (there are only a few)
    filter_patterns = [
            # "ZL2FJA__MinVMD1",
            # "ZL3FJA__MinVMD2",
            "ZL2FJA__HTFJ",
            # "ZL3FJA__SumPtFJ",
            ]
    filter_pattern = ",".join(filter_patterns)

    ## Data Driven
    p.dump_plot(
            # fnames = c.ddfnames,
            # legend_labels = c.ddlegend_labels,
            # usercolors = c.ddusercolors,
            fnames = c.fnames,
            legend_labels = c.legend_labels,
            usercolors = c.usercolors,
            sig_fnames = c.sig_fnames_dim8 if sig == "dim8" else c.sig_fnames_dim6,
            signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
            data_fname = data_fname,
            filter_pattern = filter_pattern,
            dirname = f"plots/ZL/{c.tag}/{sig}/scan",
            dogrep = False,
            extraoptions = c.extraoptions,
            histxaxislabeloptions = histxaxislabeloptions,
            _plotter = p.plot_cut_scan,
            )

