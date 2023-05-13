#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

data_fname = f"{c.mdir}/onemu.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLMu*",
        dogrep = True,
        extraoptions = c.extraoptions, 
        )

data_fname = f"{c.mdir}/oneel.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLEl*",
        dogrep = True,
        extraoptions = c.extraoptions, 
        )
