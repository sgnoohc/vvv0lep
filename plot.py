#!/bin/env python

import plottery_wrapper as p

lumi_value = 59.83

p.dump_plot(
        fnames = [
            "output/VVV0TreeV4/merged/diboson.root",
            "output/VVV0TreeV4/merged/qcd.root",
            "output/VVV0TreeV4/merged/ttbar.root",
            "output/VVV0TreeV4/merged/w.root",
            "output/VVV0TreeV4/merged/z.root",
            ],
        legend_labels = [
            "VV",
            "QCD",
            "TT",
            "W",
            "Z",
            ],
        sig_fnames = [
            "output/VVV0TreeV4/merged/wwwdim6.root",
            "output/VVV0TreeV4/merged/wwzdim6.root",
            "output/VVV0TreeV4/merged/wzzdim6.root",
            "output/VVV0TreeV4/merged/zzzdim6.root",
            ],
        signal_labels = [
            "WWW D6",
            "WWZ D6",
            "WZZ D6",
            "ZZZ D6",
            ],
        usercolors = [
            7001,
            7002,
            7003,
            7004,
            7005,
            7006,
            7007,
            ],
        extraoptions = {
            "nbins"            : 20,
            # "autobin"          : True,
            "print_yield"      : True,
            "yield_prec"       : 6,
            "yaxis_log"        : False,
            "legend_scalex"    : 2,
            "legend_ncolumns"  : 3,
            "ratio_range"      : [0., 2.5],
            "xaxis_ndivisions" : 505,
            "blind"            : False,
            "lumi_value"       : lumi_value,
            # "bkg_sort_method"  : "unsorted",
            # "divide_by_bin_width": True,
            # "fit_bkg"          : True,
            # "signal_scale"     : "auto",
            # "signal_scale"     : 100,
            }
        )
