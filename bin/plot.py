#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

for sig in ["dim6"]:

    data_fname = f"{c.mdir}/jetht.root"

    # signal_scale = 137.64/59.83
    signal_scale = "auto"
    signal_scale = 1
    # signal_scale = 5000

    histxaxislabeloptions = {
            "D01"         : {"xaxis_label" : "D01"                           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "D012"        : {"xaxis_label" : "D012"                          , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "SR3SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SR2SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "ZL3FJA__SR1SumPtFJ"  : {"xaxis_label" : "#Sigma p_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False, "blind": True},
            "SR1SumPtFJ"  : {"xaxis_label" : "#Sigma p_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SumPtFJFit"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "HT_binned"   : {"xaxis_label" : "H_{T} [GeV]"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "HTJ_binned"  : {"xaxis_label" : "H_{T} [GeV]"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "ZL2FJA__HTFJ_binned" : {"xaxis_label" : "H_{T} [GeV]"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False, "blind": True},
            "HTFJ_binned" : {"xaxis_label" : "H_{T} [GeV]"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "HT"          : {"xaxis_label" : "H_{T} [GeV]"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SR1HTFJ"     : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SR2HTFJ"     : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SR1HT"       : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "SR2HT"       : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False},
            "HTFJ"        : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 90, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False, "blind": True},
            "HTFJFit2"    : {"xaxis_label" : "H_{T,Fat-Jet,MET} [GeV]"       , "xaxis_ndivisions" : 505, "nbins": 10, "signal_scale": signal_scale, "yaxis_log": True , "divide_by_bin_width": False, "blind": True},
            "SumPtFJ"     : {"xaxis_label" : "#Sigma p_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 90, "signal_scale": signal_scale, "yaxis_log": True , "blind": True},
            "SumPtJ"      : {"xaxis_label" : "H_{T,AK4Jet} [GeV]"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "VMD0"        : {"xaxis_label" : "V_{MD,lead}"                   , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "VMD1"        : {"xaxis_label" : "V_{MD,sublead}"                , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "MinVMD1"     : {"xaxis_label" : "V_{MD,sublead}"                , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "MinVMD2"     : {"xaxis_label" : "V_{MD,sublead}"                , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "VMD2"        : {"xaxis_label" : "V_{MD,trail}"                  , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "WMD0"        : {"xaxis_label" : "W_{MD,lead}"                   , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "WMD1"        : {"xaxis_label" : "W_{MD,sublead}"                , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Pt01"        : {"xaxis_label" : "p_{T,01} [GeV]"                , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "Pt0"         : {"xaxis_label" : "p_{T,lead} [GeV]"              , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "Pt1"         : {"xaxis_label" : "p_{T,sublead} [GeV]"           , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "Pt2"         : {"xaxis_label" : "p_{T,trail} [GeV]"             , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass0"       : {"xaxis_label" : "M_{lead} [GeV]"                , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass1"       : {"xaxis_label" : "M_{sublead} [GeV]"             , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass2"       : {"xaxis_label" : "M_{trail} [GeV]"               , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": False},
            "NL0"         : {"xaxis_label" : "N_{matched-udsc} lead"         , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "NL1"         : {"xaxis_label" : "N_{matched-udsc} sublead"      , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "NL2"         : {"xaxis_label" : "N_{matched-udsc} trail"        , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "NB0"         : {"xaxis_label" : "N_{matched-b} lead"            , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "NB1"         : {"xaxis_label" : "N_{matched-b} sublead"         , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "NB2"         : {"xaxis_label" : "N_{matched-b} trail"           , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale": signal_scale, "yaxis_log": True },
            "Mass01"      : {"xaxis_label" : "M_{01} [GeV]"                  , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "Mass02"      : {"xaxis_label" : "M_{02} [GeV]"                  , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "Mass12"      : {"xaxis_label" : "M_{12} [GeV]"                  , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "DPhi01"      : {"xaxis_label" : "#Delta#phi_{01}"               , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "DPhi02"      : {"xaxis_label" : "#Delta#phi_{02}"               , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "DPhi12"      : {"xaxis_label" : "#Delta#phi_{12}"               , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": False},
            "NbLoose"     : {"xaxis_label" : "NbLoose"                       , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "NbMedium"    : {"xaxis_label" : "NbMedium"                      , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "NbTight"     : {"xaxis_label" : "NbTight"                       , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "NoORNbLoose" : {"xaxis_label" : "NoORNbLoose"                   , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "NoORNbMedium": {"xaxis_label" : "NoORNbMedium"                  , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "NoORNbTight" : {"xaxis_label" : "NoORNbTight"                   , "xaxis_ndivisions" : 505, "nbins": 7 , "signal_scale": signal_scale, "yaxis_log": True },
            "MVVX"        : {"xaxis_label" : "M_{VVX} [GeV]"                 , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "MET"         : {"xaxis_label" : "MET [GeV]"                     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "SRMET"       : {"xaxis_label" : "MET [GeV]"                     , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": signal_scale, "yaxis_log": True },
            "Yield"       : {"xaxis_label" : "Yield"                         , "xaxis_ndivisions" : 505, "nbins": 50, "signal_scale": signal_scale, "yaxis_log": False},
            "Cutflow3FJ"  : {"xaxis_label" : "Cutflow"                       , "xaxis_ndivisions" : 505, "nbins": 50, "signal_scale": signal_scale, "yaxis_log": False},
            "Cutflow2FJ"  : {"xaxis_label" : "Cutflow"                       , "xaxis_ndivisions" : 505, "nbins": 50, "signal_scale": signal_scale, "yaxis_log": False},
            "ZL2FJPresel__VMD0"  : {"xaxis_label" : "V_{MD,lead}"            , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         4500, "yaxis_log": False, "blind": True },
            "ZL2FJPresel__Mass0" : {"xaxis_label" : "M_{lead} [GeV]"         , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         4500, "yaxis_log": False, "blind": True },
            "ZL2FJPresel__Mass1" : {"xaxis_label" : "M_{sublead} [GeV]"      , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         4500, "yaxis_log": False, "blind": True },
            "ZL3FJPresel__Mass0" : {"xaxis_label" : "M_{lead} [GeV]"         , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         1500, "yaxis_log": False, "blind": True },
            "ZL3FJPresel__Mass1" : {"xaxis_label" : "M_{sublead} [GeV]"      , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         1500, "yaxis_log": False, "blind": True },
            "ZL3FJPresel__Mass2" : {"xaxis_label" : "M_{trail} [GeV]"        , "xaxis_ndivisions" : 505, "nbins": 60, "signal_scale":         1500, "yaxis_log": False, "blind": True },
            }

    ## Data-Driven histograms (there are only a few)
    filter_patterns = [
            "ZL2FJA__HTFJ_binned",
            "ZL3FJA__SR1SumPtFJ",
            "ZL2FJ__Cutflow2FJ",
            "ZL3FJ__Cutflow3FJ",
            # "ZL3FJA__SumPtFJFit",
            # "ZL3FJE__SR1SumPtFJ",
            # "ZL3FJE__SumPtFJFit",
            # "ZL2FJE__HTFJ_binned",
            # "ZL2FJA__SR2SumPtFJ",
            # "ZL2FJE__SR2SumPtFJ",
            # "ZL2FJLMETA__SR2HTFJ",
            # "ZL2FJLMETE__SR2HTFJ",
            "ZL2FJPresel__VMD0",
            "ZL2FJPresel__Mass0",
            "ZL3FJA__MinVMD2",
            "ZL2FJA__MinVMD1",
            # "ZL2FJPresel__Mass1",
            # "ZL3FJPresel__Mass0",
            # "ZL3FJPresel__Mass1",
            # "ZL3FJPresel__Mass2",
            "ZL3FJTop__SR1SumPtFJ",
            "ZL3FJA__SR1SumPtFJ",
            "ZL3FJB__SR1SumPtFJ",
            "ZL3FJC__SR1SumPtFJ",
            "ZL3FJD__SR1SumPtFJ",
            "ZL3FJE__SR1SumPtFJ",
            "ZL3FJF__SR1SumPtFJ",
            "ZL3FJ__VMD0",
            "ZL3FJ__VMD1",
            "ZL3FJ__VMD2",
            "ZL3FJ__WMD0",
            "ZL3FJ__WMD1",
            "ZL3FJ__WMD2",
            "ZL3FJ__Mass0",
            "ZL3FJ__Mass1",
            "ZL3FJ__Mass2",
            "ZL3FJ__NoORNbTight",
            "ZL3FJ__NoORNbMedium",
            "ZL3FJ__NoORNbLoose",
            "ZL3FJ__NL0",
            "ZL3FJ__NL1",
            "ZL3FJ__NL2",
            "ZL3FJ__NB0",
            "ZL3FJ__NB1",
            "ZL3FJ__NB2",
            "ZL3FJA__NL0",
            "ZL3FJA__NL1",
            "ZL3FJA__NL2",
            "ZL3FJA__NB0",
            "ZL3FJA__NB1",
            "ZL3FJA__NB2",
            "ZL2FJA__NL0",
            "ZL2FJA__NL1",
            "ZL2FJA__NL2",
            "ZL2FJA__NB0",
            "ZL2FJA__NB1",
            "ZL2FJA__NB2",
            "ZL2FJA__Pt0",
            "ZL3FJA__Pt0",
            "ZL2FJA__HTFJ",
            ]
    filter_pattern = ",".join(filter_patterns)

    ## MC Out-of-the-box
    c.extraoptions["yaxis_log"] = False

    ## MC out-of-the-box
    p.dump_plot(
            fnames = c.fnames,
            legend_labels = c.legend_labels,
            sig_fnames = c.sig_fnames_dim8 if sig == "dim8" else c.sig_fnames_dim6,
            signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
            data_fname = data_fname,
            usercolors = c.usercolors,
            filter_pattern = filter_pattern,
            dirname = f"plots/ZL/{c.tag}/{sig}/mc",
            dogrep = True,
            skip2d = True,
            extraoptions = c.extraoptions,
            histxaxislabeloptions = histxaxislabeloptions,
            _plotter = p.plot_cut_scan,
            )

    ## Data-Driven histograms (there are only a few)
    filter_patterns = [
            "ZL3FJA__SumPtFJ",
            "ZL2FJA__HTFJ",
            "ZL2FJA__HTFJ_binned",
            "ZL3FJA__SR1SumPtFJ",
            "ZL2FJE__HTFJ_binned",
            "ZL3FJE__SR1SumPtFJ",
            ]
    filter_pattern = ",".join(filter_patterns)

    ## Data Driven
    p.dump_plot(
            fnames = c.ddfnames,
            legend_labels = c.ddlegend_labels,
            sig_fnames = c.sig_fnames_dim8 if sig == "dim8" else c.sig_fnames_dim6,
            signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
            data_fname = data_fname,
            usercolors = c.ddusercolors,
            filter_pattern = filter_pattern,
            dirname = f"plots/ZL/{c.tag}/{sig}/abcd",
            dogrep = False,
            extraoptions = c.extraoptions,
            histxaxislabeloptions = histxaxislabeloptions,
            )

