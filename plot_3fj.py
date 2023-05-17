#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

# cut_regions = ["ZL3FJPresel", "ZL3FJA", "ZL3FJB", "ZL3FJC", "ZL3FJD", "ZL3FJE", "ZL3FJF"]
cut_regions = ["ZL3FJA", "ZL3FJE", "ZL3FJAEFTIDX0", "ZL3FJAEFTIDX14"]

data_fname = f"{c.mdir}/jetht.root"

histxaxislabeloptions = {
        "SR2SumPtFJ" : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]", "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale":   1, "yaxis_log": True},
        }

filter_patterns = []
for hist_name in histxaxislabeloptions.keys():
    for cut_region in cut_regions:
        filter_patterns.append(f"{cut_region}__{hist_name}")
filter_pattern = ",".join(filter_patterns)

## MC Out-of-the-box
## Linear version
c.extraoptions["yaxis_log"] = False
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = filter_pattern,
        dirname = f"plots/ZL3FJ/mc",
        dogrep = True,
        extraoptions = c.extraoptions, 
        histxaxislabeloptions = histxaxislabeloptions,
        )

## Log version
p.dump_plot(
        fnames = c.ddfnames,
        legend_labels = c.ddlegend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.ddusercolors,
        filter_pattern = filter_pattern,
        dirname = f"plots/ZL3FJ/abcd",
        dogrep = True,
        extraoptions = c.extraoptions, 
        histxaxislabeloptions = histxaxislabeloptions,
        )

