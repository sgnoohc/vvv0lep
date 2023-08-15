#!/bin/env python3

import plottery_wrapper as p
import plot_config as c
from systematics import systs

histxaxislabeloptions = {
        "SR1SumPtFJ"  : {"xaxis_label" : "H_{T,Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 1, "yaxis_log": True , "divide_by_bin_width": False},
        "HTJ_binned"  : {"xaxis_label" : "H_{T} [GeV]"            , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 1, "yaxis_log": True , "divide_by_bin_width": False},
        "SR2HTFJ"     : {"xaxis_label" : "H_{T.Fat-Jet} [GeV]"    , "xaxis_ndivisions" : 505, "nbins": 20, "signal_scale": 1, "yaxis_log": True , "divide_by_bin_width": False},
        }

def create_validate(process = "www", proc = "WWW"):
    p.dump_plot(
            fnames = [f"output/VVV0TreeV7/Run2/merged/{process}dim6.root",],
            data_fname = f"output/VVV0TreeV7/Run2/merged/{process}1jdim6.root",
            legend_labels = [f"{proc} NLO"],
            filter_pattern = "ZL3FJA__SR1SumPtFJ,ZL2FJA__HTJ_binned,ZL2FJA__SR2HTFJ",
            dirname = f"plots/validation/{process}",
            extraoptions = {
                "legend_datalabel": f"{proc} +1J Dim6",
                "ratio_range": [0., 2.],
                "yaxis_log": True,
                "yaxis_range": [0.0001, 1e5],
                },
            histxaxislabeloptions = histxaxislabeloptions,
            )



if __name__ == "__main__":

    create_validate("www", "WWW")
    create_validate("wwz", "WWZ")
    create_validate("wzz", "WZZ")
    create_validate("zzz", "ZZZ")
