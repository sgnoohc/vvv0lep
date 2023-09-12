#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

p.dump_plot(
        fnames = [
            f"{c.mdir}/qcd.root"
            ],
        sig_fnames = [
            f"{c.mdir}/vvv1jdim6.root",
            f"{c.mdir}/www1jdim6.root",
            f"{c.mdir}/wwz1jdim6.root",
            f"{c.mdir}/wzz1jdim6.root",
            f"{c.mdir}/zzz1jdim6.root",
            ],
        # filter_pattern = "ZL2FJPresel__,ZL2FJA__,ZL2FJB__,ZL2FJC__,ZL2FJD__,ZL2FJE__,ZL2FJF__",
        # filter_pattern = "ZL3FJPresel__*_v_,ZL3FJA__*_v_,ZL3FJB__*_v_,ZL3FJC__*_v_,ZL3FJD__*_v_,ZL3FJE__*_v_,ZL3FJF__*_v_",
        # filter_pattern = "ZL3FJPresel__*_v_",
        filter_pattern = "ZL3FJA__*_v_",
        # filter_pattern = "ZL2FJE__,ZL2FJF__",
        dogrep = True,
        dirname = f"plots/ZL/{c.tag}/dim6/test3fj",
        legend_labels = ["QCD"],
        extraoptions = {
            "nbins": 30,
            "ratio_range": [0., 2],
            # "yaxis_log": True,
            "lumi_value": 137,
            "print_yield": True,
            "yield_prec": 3,
            },
        )


