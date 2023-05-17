#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

# cut_regions = ["ZL3FJPresel", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF"]
cut_regions = ["ZL3FJA2TeV"]

data_fname = f"{c.mdir}/jetht.root"

varfilter = "Nb"

for cut_region in cut_regions:

    ## Signal scale
    if cut_region == "ZL3FJPresel":
        c.extraoptions["signal_scale"] = 10
    else:
        c.extraoptions["signal_scale"] = 1

    ## Linear version
    c.extraoptions["yaxis_log"] = False
    p.dump_plot(
            fnames = c.fnames,
            legend_labels = c.legend_labels,
            sig_fnames = c.sig_fnames,
            signal_labels = c.signal_labels,
            data_fname = data_fname,
            usercolors = c.usercolors,
            filter_pattern = f"{cut_region}__*{varfilter}*",
            dirname = f"plots/ZL3FJ/lin",
            dogrep = True,
            extraoptions = c.extraoptions, 
            )

    ## Log version
    c.extraoptions["yaxis_log"] = True
    p.dump_plot(
            fnames = c.fnames,
            legend_labels = c.legend_labels,
            sig_fnames = c.sig_fnames,
            signal_labels = c.signal_labels,
            data_fname = data_fname,
            usercolors = c.usercolors,
            filter_pattern = f"{cut_region}__*{varfilter}*",
            dirname = f"plots/ZL3FJ/log",
            dogrep = True,
            extraoptions = c.extraoptions, 
            )
