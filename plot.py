#!/bin/env python

import plottery_wrapper as p

p.dump_plot(
        fnames = ["debug.root"],
        extraoptions = {
            "nbins": 30,
            "print_yield" : True,
            },
        )
