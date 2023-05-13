#!/bin/env python3

import plottery_wrapper as p
import plot_config as c

c.extraoptions["signal_scale"] = 1

data_fname = f"{c.mdir}/onemu.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLMuTB*Pt*__Mass0",
        dogrep = True,
        extraoptions = c.extraoptions, 
        dirname = "plots/vmdsf/mu/w", 
        )

data_fname = f"{c.mdir}/onemu.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLMuNB*Pt*__Mass0",
        dogrep = True,
        extraoptions = c.extraoptions, 
        dirname = "plots/vmdsf/mu/fake", 
        )

data_fname = f"{c.mdir}/oneel.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLElTB*Pt*__Mass0",
        dogrep = True,
        extraoptions = c.extraoptions, 
        dirname = "plots/vmdsf/el/w", 
        )

data_fname = f"{c.mdir}/oneel.root"
p.dump_plot(
        fnames = c.fnames,
        legend_labels = c.legend_labels,
        sig_fnames = c.sig_fnames,
        signal_labels = c.signal_labels,
        data_fname = data_fname,
        usercolors = c.usercolors,
        filter_pattern = "OLElNB*Pt*__Mass0",
        dogrep = True,
        extraoptions = c.extraoptions, 
        dirname = "plots/vmdsf/el/fake", 
        )
