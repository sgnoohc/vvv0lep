
// The length of the weight variations will be NPDF + NQCDScale + NLHEReweight with 1 empty spots in between
std::cout <<  " PDF().size(): " << PDF().size() <<  std::endl;
std::cout <<  " QCDScale().size(): " << QCDScale().size() <<  std::endl;
std::cout <<  " LHEReweightingWeight().size(): " << LHEReweightingWeight().size() <<  std::endl;
int n_wgt_syst = PDF().size() + 1
               + QCDScale().size() + 1
               + 2 + 1 // prefireweight
               + 2 + 1 // puwgt
               + 2 + 1 // trigwgt
               + LHEReweightingWeight().size()
               ;
std::cout <<  " n_wgt_syst: " << n_wgt_syst <<  std::endl;
auto nweight = [&, n_wgt_syst]() { std::vector<float> rtn(n_wgt_syst); std::iota(rtn.begin(), rtn.end(), 0); return rtn; };
auto wgtvec = [&]() {
                    std::vector<float> rtn = PDF();
                    rtn.push_back(0);
                    std::vector<float> rtn2 = QCDScale();
                    rtn.insert(rtn.end(), rtn2.begin(), rtn2.end());
                    rtn.push_back(0);
                    rtn.push_back(vvv.prefireWgtUp());
                    rtn.push_back(vvv.prefireWgtDn());
                    rtn.push_back(0);
                    rtn.push_back(vvv.puWgtUp());
                    rtn.push_back(vvv.puWgtDn());
                    rtn.push_back(0);
                    rtn.push_back(vvv.trigWgtUp());
                    rtn.push_back(vvv.trigWgtDn());
                    rtn.push_back(0);
                    std::vector<float> rtn3 = LHEReweightingWeight();
                    rtn.insert(rtn.end(), rtn3.begin(), rtn3.end());
                    return rtn;
                };

std::vector<float> SR1SumPtFJ_bins = {1250, 1500, 1750, 2000, 2250, 2500, 3000, 4000};
std::vector<float> HTFJ_bins = {1100, 1500, 2000, 2500, 3000, 3500};

std::map<TString, std::function<float()>> SR1SumPtFJ_var;
std::map<TString, std::function<std::vector<float>()>> SR1SumPtFJ_var_w_wgt;

SR1SumPtFJ_var["Nominal"]= [&, SR1SumPtFJ_bins]() { return SumPtFJ("Nominal") < SR1SumPtFJ_bins.back() ? SumPtFJ("Nominal") : SR1SumPtFJ_bins.back() - 1.f; };
SR1SumPtFJ_var["JESUp"]  = [&, SR1SumPtFJ_bins]() { return SumPtFJ("JESUp"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JESUp"  ) : SR1SumPtFJ_bins.back() - 1.f; };
SR1SumPtFJ_var["JESDn"]  = [&, SR1SumPtFJ_bins]() { return SumPtFJ("JESDn"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JESDn"  ) : SR1SumPtFJ_bins.back() - 1.f; };
SR1SumPtFJ_var["JERUp"]  = [&, SR1SumPtFJ_bins]() { return SumPtFJ("JERUp"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JERUp"  ) : SR1SumPtFJ_bins.back() - 1.f; };
SR1SumPtFJ_var["JERDn"]  = [&, SR1SumPtFJ_bins]() { return SumPtFJ("JERDn"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JERDn"  ) : SR1SumPtFJ_bins.back() - 1.f; };

SR1SumPtFJ_var_w_wgt["Nominal"]= [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ("Nominal") < SR1SumPtFJ_bins.back() ? SumPtFJ("Nominal") : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
SR1SumPtFJ_var_w_wgt["JESUp"]  = [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ("JESUp"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JESUp"  ) : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
SR1SumPtFJ_var_w_wgt["JESDn"]  = [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ("JESDn"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JESDn"  ) : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
SR1SumPtFJ_var_w_wgt["JERUp"]  = [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ("JERUp"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JERUp"  ) : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
SR1SumPtFJ_var_w_wgt["JERDn"]  = [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ("JERDn"  ) < SR1SumPtFJ_bins.back() ? SumPtFJ("JERDn"  ) : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };

std::map<TString, std::function<float()>> HTFJ_var;
std::map<TString, std::function<std::vector<float>()>> HTFJ_var_w_wgt;

HTFJ_var["Nominal"]= [&, HTFJ_bins]() { return HTFJ("Nominal") < HTFJ_bins.back() ? HTFJ("Nominal") : HTFJ_bins.back() - 1.f; };
HTFJ_var["JESUp"]  = [&, HTFJ_bins]() { return HTFJ("JESUp"  ) < HTFJ_bins.back() ? HTFJ("JESUp"  ) : HTFJ_bins.back() - 1.f; };
HTFJ_var["JESDn"]  = [&, HTFJ_bins]() { return HTFJ("JESDn"  ) < HTFJ_bins.back() ? HTFJ("JESDn"  ) : HTFJ_bins.back() - 1.f; };
HTFJ_var["JERUp"]  = [&, HTFJ_bins]() { return HTFJ("JERUp"  ) < HTFJ_bins.back() ? HTFJ("JERUp"  ) : HTFJ_bins.back() - 1.f; };
HTFJ_var["JERDn"]  = [&, HTFJ_bins]() { return HTFJ("JERDn"  ) < HTFJ_bins.back() ? HTFJ("JERDn"  ) : HTFJ_bins.back() - 1.f; };

HTFJ_var_w_wgt["Nominal"]= [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ("Nominal") < HTFJ_bins.back() ? HTFJ("Nominal") : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
HTFJ_var_w_wgt["JESUp"]  = [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ("JESUp"  ) < HTFJ_bins.back() ? HTFJ("JESUp"  ) : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
HTFJ_var_w_wgt["JESDn"]  = [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ("JESDn"  ) < HTFJ_bins.back() ? HTFJ("JESDn"  ) : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
HTFJ_var_w_wgt["JERUp"]  = [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ("JERUp"  ) < HTFJ_bins.back() ? HTFJ("JERUp"  ) : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
HTFJ_var_w_wgt["JERDn"]  = [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ("JERDn"  ) < HTFJ_bins.back() ? HTFJ("JERDn"  ) : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };

std::vector<TString> systs = {"JES", "JER"};
std::vector<TString> vars = {"Up", "Dn"};
std::vector<TString> abcdef_regions = {"A", "B", "C", "D", "E", "F"};
std::vector<TString> syst_cut_to_book_3fj;
for (auto& reg : abcdef_regions)
{
    TString cutname = TString::Format("ZL3FJ%s", reg.Data());
    syst_cut_to_book_3fj.push_back(cutname);
}
std::vector<TString> syst_cut_to_book_2fj;
for (auto& reg : abcdef_regions)
{
    TString cutname = TString::Format("ZL2FJ%s", reg.Data());
    syst_cut_to_book_2fj.push_back(cutname);
}

