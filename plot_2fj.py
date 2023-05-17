#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

syst = "Nominal"
data_fname = f"{c.mdir(syst)}/jetht.root"
p.dump_plot(
        fnames = c.fnames(syst),
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames(syst),
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "ZL2FJ*",
        dirname = "plots/ZL2FJ/",
        dogrep = True,
        extraoptions = c.extraoptions, 
        )
