lumi_value = 59.83

tag = "VVV0TreeV6"
mdir = f"output/{tag}/merged/Nominal"

# fnames with QCD replaced with ddqcd.root
ddfnames = [
        f"{mdir}/diboson.root",
        f"{mdir}/ddqcd.root",
        f"{mdir}/ttbar.root",
        f"{mdir}/w.root",
        f"{mdir}/z.root",
        f"{mdir}/ttv.root",
        f"{mdir}/onetop.root",
        ]

# background samples
fnames = [
        f"{mdir}/diboson.root",
        f"{mdir}/qcd.root",
        f"{mdir}/ttbar.root",
        f"{mdir}/w.root",
        f"{mdir}/z.root",
        f"{mdir}/ttv.root",
        f"{mdir}/onetop.root",
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
sig_fnames = [
            f"{mdir}/wwwdim6.root",
            f"{mdir}/wwzdim6.root",
            f"{mdir}/wzzdim6.root",
            f"{mdir}/zzzdim6.root",
            ]

signal_labels = [
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
            "signal_scale"     : 500,
            }

