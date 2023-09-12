#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

p.dump_plot(
        fnames = [f"{c.mdir}/qcd.root"],
        data_fname = f"{c.mdir}/qcd_closure.root",
        # filter_pattern = "ZL2FJA__HTFJ_binned,ZL3FJA__SR1SumPtFJ,ZL2FJA__HTFJFit,ZL3FJA__SumPtFJFit,ZL2FJE__HTFJ_binned,ZL3FJE__SR1SumPtFJ,ZL2FJE__HTFJFit,ZL3FJE__SumPtFJFit",
        filter_pattern = "ZL2FJA__HTFJ_binned,ZL2FJA__HTFJFit,ZL2FJE__HTFJ_binned,ZL2FJE__HTFJFit",
        # filter_pattern = "ZL3FJA__SR1SumPtFJ,ZL3FJA__SumPtFJFit,ZL3FJE__SR1SumPtFJ,ZL3FJE__SumPtFJFit",
        dirname = f"plots/ZL/{c.tag}/dim6/closure",
        legend_labels = ["QCD MC"],
        extraoptions = {
            "nbins": 60,
            "legend_datalabel": "QCD Predict",
            "ratio_range": [0., 2],
            "yaxis_range": [0.001, 1e7],
            "yaxis_log": True,
            "lumi_value": 137,
            "print_yield": True,
            "yield_prec": 3,
            },
        )

#             fnames = c.fnames,
#             legend_labels = c.legend_labels,
#             sig_fnames = c.sig_fnames_dim8 if sig == "dim8" else c.sig_fnames_dim6,
#             signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
#             data_fname = data_fname,
#             usercolors = c.usercolors,
#             filter_pattern = filter_pattern,
#             dirname = f"plots/ZL/{c.tag}/{sig}/mc",
#             dogrep = False,
#             extraoptions = c.extraoptions,
#             histxaxislabeloptions = histxaxislabeloptions,
