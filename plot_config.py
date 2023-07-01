import socket

if "uaf-2" in socket.gethostname():
    tag = "VVV0TreeV10_3FJ"
else:
    tag = "VVV0TreeV8"
year = "Run2"
if year == "Run2":
    lumi_value = 137.64
elif year == "2006":
    lumi_value = 19.52
elif year == "2016":
    lumi_value = 16.81
elif year == "2017":
    lumi_value = 41.48
elif year == "2018":
    lumi_value = 59.83
mdir = lambda syst: f"output/{tag}/{year}/merged/{syst}"

ddfnames = lambda syst: [
        f"{mdir(syst)}/diboson.root",
        f"{mdir(syst)}/QCD.root",
        f"{mdir(syst)}/ttbar.root",
        f"{mdir(syst)}/w.root",
        f"{mdir(syst)}/z.root",
        f"{mdir(syst)}/ttv.root",
        f"{mdir(syst)}/onetop.root",
        ]

# background samples
fnames = lambda syst: [
        f"{mdir(syst)}/diboson.root",
        f"{mdir(syst)}/qcd.root",
        f"{mdir(syst)}/ttbar.root",
        f"{mdir(syst)}/w.root",
        f"{mdir(syst)}/z.root",
        f"{mdir(syst)}/ttv.root",
        f"{mdir(syst)}/onetop.root",
        ]

# legend
legend_labels = [
            "VV",
            "QCD",
            "TT",
            "W",
            "Z",
            "TTV",
            "1T",
            ]

# legend
ddlegend_labels = [
            "VV",
            "QCD-DD",
            "TT",
            "W",
            "Z",
            "TTV",
            "1T",
            ]

# signal names
sig_fnames_dim8 = lambda syst: [
            f"{mdir(syst)}/vvvdim8.root",
            f"{mdir(syst)}/wwwdim8.root",
            f"{mdir(syst)}/wwzdim8.root",
            f"{mdir(syst)}/wzzdim8.root",
            f"{mdir(syst)}/zzzdim8.root",
            ]

signal_labels_dim8 = [
            "VVV D8",
            "WWW D8",
            "WWZ D8",
            "WZZ D8",
            "ZZZ D8",
            ]

# signal names
sig_fnames_dim6 = lambda syst: [
            f"{mdir(syst)}/vvvdim6.root",
            f"{mdir(syst)}/wwwdim6.root",
            f"{mdir(syst)}/wwzdim6.root",
            f"{mdir(syst)}/wzzdim6.root",
            f"{mdir(syst)}/zzzdim6.root",
            ]

signal_labels_dim6 = [
            "VVV D6",
            "WWW D6",
            "WWZ D6",
            "WZZ D6",
            "ZZZ D6",
            ]

usercolors = [
            7001,
            7002,
            7003,
            7004,
            7005,
            7006,
            7007,
            ]

ddusercolors = [
            7001,
            4003,
            7003,
            7004,
            7005,
            7006,
            7007,
            ]

extraoptions = {
            "nbins"            : 60,
            # "autobin"          : True,
            "print_yield"      : True,
            "yield_prec"       : 3,
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
            "signal_scale"     : 500,
            }

