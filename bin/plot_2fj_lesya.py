#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

for syst in systs:

    for sig in ["dim8", "dim6"]:
        data_fname = f"{c.mdir(syst)}/jetht.root"
        p.dump_plot(
                fnames = c.ddfnames(syst),
                legend_labels = c.ddlegend_labels,
                sig_fnames = c.sig_fnames_dim8(syst) if sig == "dim8" else c.sig_fnames_dim6(syst),
                signal_labels = c.signal_labels_dim8 if sig == "dim8" else c.signal_labels_dim6,
                data_fname = data_fname,
                usercolors = c.ddusercolors,
                filter_pattern = "ZL2FJ*",
                dirname = f"plots/ZL2FJ/{c.tag}/{syst}/{sig}/abcd",
                dogrep = True,
                extraoptions = c.extraoptions,
                )

