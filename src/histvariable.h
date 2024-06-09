
// The length of the weight variations will be NPDF + NQCDScale + NLHEReweight with 1 empty spots in between
std::cout <<  " PDF().size(): " << PDF().size() <<  std::endl;
std::cout <<  " QCDScale().size(): " << QCDScale().size() <<  std::endl;
std::cout <<  " LHEReweightingWeight().size(): " << LHEReweightingWeight().size() <<  std::endl;
int n_wgt_syst = 9
               + 2 // prefireweight
               + 2 // puwgt
               + 2 // trigwgt
               + 2 // lumi
               + 103 // PDF
               + LHEReweightingWeight().size()
               ;
std::cout <<  " n_wgt_syst: " << n_wgt_syst <<  std::endl;
auto nweight = [&, n_wgt_syst]() { std::vector<float> rtn(n_wgt_syst); std::iota(rtn.begin(), rtn.end(), 0); return rtn; };
auto wgtvec = [&, eft_idx_benchmark]() {

                    // 1 - 9 is QCD Scale
                    std::vector<float> rtn = QCDScale();
                    if (rtn.size() == 0)
                    {
                        for (size_t i = 0; i < 9; ++i)
                            rtn.push_back(0);
                    }
                    else if (rtn.size() == 8)
                    {
                        rtn.push_back(0);
                    }
                    // 10, 11 is Prefire
                    rtn.push_back(vvv.prefireWgtUp());
                    rtn.push_back(vvv.prefireWgtDn());
                    // 12, 13 is Pileup
                    rtn.push_back(vvv.puWgtUp());
                    rtn.push_back(vvv.puWgtDn());
                    // 14, 15 is Trigger
                    rtn.push_back(1.05); // trigger_weight place holders
                    rtn.push_back(0.95); // trigger_weight place holders
                    // 16, 17 is Luminosity
                    rtn.push_back(1.016); // luminosity unc place holders
                    rtn.push_back(0.984); // luminosity unc place holders
                    // 18 - 120 is PDF
                    std::vector<float> rtn2 = PDF();
                    rtn.insert(rtn.end(), rtn2.begin(), rtn2.end());
                    if (PDF().size() == 101)
                    {
                        rtn.push_back(0); // empty placeholder for alpha S if don't exist
                        rtn.push_back(0); // empty placeholder for alpha S if don't exist
                    }
                    else if (PDF().size() == 0)
                    {
                        for (size_t i = 0; i < 103; ++i)
                            rtn.push_back(0);
                    }
                    // Starting from 121 LHEReweightingWeight
                    std::vector<float> rtn3 = LHEReweightingWeight();
                    for (auto& v : rtn3)
                    {
                        rtn.push_back(v / LHEReweightingWeight()[eft_idx_benchmark]);
                    }
                    rtn.insert(rtn.end(), rtn3.begin(), rtn3.end());
                    return rtn;
                };

std::vector<float> SR1SumPtFJ_bins = {1250, 1500, 1750, 2000, 2250, 2500, 3000, 4000};
std::vector<float> HTFJ_bins = {1100, 1500, 2000, 2500, 3000, 3500};

std::map<TString, std::function<float()>> SR1SumPtFJ_var;
std::map<TString, std::function<std::vector<float>()>> SR1SumPtFJ_var_w_wgt;
std::map<TString, std::function<float()>> HTFJ_var;
std::map<TString, std::function<std::vector<float>()>> HTFJ_var_w_wgt;

std::vector<TString> variations = {"Nominal", "JESUp", "JESDn", "JERUp", "JERDn", "JMSUp", "JMSDn", "JMRUp", "JMRDn", "jesAbsoluteStatup", "jesAbsoluteStatdn", "jesAbsoluteScaleup", "jesAbsoluteScaledn", "jesAbsoluteMPFBiasup", "jesAbsoluteMPFBiasdn", "jesFragmentationup", "jesFragmentationdn", "jesSinglePionECALup", "jesSinglePionECALdn", "jesSinglePionHCALup", "jesSinglePionHCALdn", "jesFlavorQCDup", "jesFlavorQCDdn", "jesTimePtEtaup", "jesTimePtEtadn", "jesRelativeJEREC1up", "jesRelativeJEREC1dn", "jesRelativeJEREC2up", "jesRelativeJEREC2dn", "jesRelativeJERHFup", "jesRelativeJERHFdn", "jesRelativePtBBup", "jesRelativePtBBdn", "jesRelativePtEC1up", "jesRelativePtEC1dn", "jesRelativePtEC2up", "jesRelativePtEC2dn", "jesRelativePtHFup", "jesRelativePtHFdn", "jesRelativeBalup", "jesRelativeBaldn", "jesRelativeSampleup", "jesRelativeSampledn", "jesRelativeFSRup", "jesRelativeFSRdn", "jesRelativeStatFSRup", "jesRelativeStatFSRdn", "jesRelativeStatECup", "jesRelativeStatECdn", "jesRelativeStatHFup", "jesRelativeStatHFdn", "jesPileUpDataMCup", "jesPileUpDataMCdn", "jesPileUpPtRefup", "jesPileUpPtRefdn", "jesPileUpPtBBup", "jesPileUpPtBBdn", "jesPileUpPtEC1up", "jesPileUpPtEC1dn", "jesPileUpPtEC2up", "jesPileUpPtEC2dn", "jesPileUpPtHFup", "jesPileUpPtHFdn"};
// std::vector<TString> variations = {"Nominal", "JESUp", "JESDn"};
// std::vector<TString> variations = {"Nominal"};

for (auto& systvar : variations)
{
    SR1SumPtFJ_var[systvar]= [&, SR1SumPtFJ_bins]() { return SumPtFJ(systvar) < SR1SumPtFJ_bins.back() ? SumPtFJ(systvar) : SR1SumPtFJ_bins.back() - 1.f; };
    SR1SumPtFJ_var_w_wgt[systvar]= [&, n_wgt_syst, SR1SumPtFJ_bins]() { float var = SumPtFJ(systvar) < SR1SumPtFJ_bins.back() ? SumPtFJ(systvar) : SR1SumPtFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
    HTFJ_var[systvar]= [&, HTFJ_bins]() { return HTFJ(systvar) < HTFJ_bins.back() ? HTFJ(systvar) : HTFJ_bins.back() - 1.f; };
    HTFJ_var_w_wgt[systvar]= [&, n_wgt_syst, HTFJ_bins]() { float var = HTFJ(systvar) < HTFJ_bins.back() ? HTFJ(systvar) : HTFJ_bins.back() - 1.f; std::vector<float> rtn(n_wgt_syst, var); return rtn; };
}

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

