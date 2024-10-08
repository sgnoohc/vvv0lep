#include "VVV0Tree.h"
#include "rooutil.h"
#include "cxxopts.h"
#include <numeric> // Include the numeric header

using json = nlohmann::json;

class AnalysisConfig {

public:

    // TString that holds the input file list (comma separated)
    TString input_file_list_tstring;

    // TString that holds the name of the TTree to open for each input files
    TString input_tree_name;

    // TString that holds the name of the syst variation
    TString syst_name;

    // Output TFile
    TFile* output_tfile;

    // Number of events to loop over
    int n_events;

    // Jobs to split (if this number is positive, then we will skip certain number of events)
    // If there are N events, and was asked to split 2 ways, then depending on job_index, it will run over first half or latter half
    int nsplit_jobs;

    // Syst index
    int syst_idx;

    // Job index (assuming nsplit_jobs is set, the job_index determine where to loop over)
    int job_index;

    // Debug boolean
    bool debug;

    // TChain that holds the input TTree's
    TChain* events_tchain;

    // Custom Looper object to facilitate looping over many files
    RooUtil::Looper<VVV0Tree> looper;

    // Custom Cutflow framework
    RooUtil::Cutflow cutflow;

    // Custom Histograms object compatible with RooUtil::Cutflow framework
    RooUtil::Histograms histograms;

};

AnalysisConfig ana;

// ./process INPUTFILEPATH OUTPUTFILE [NEVENTS]
int main(int argc, char** argv)
{

//********************************************************************************
//
// 1. Parsing options
//
//********************************************************************************

    // cxxopts is just a tool to parse argc, and argv easily

    // Grand option setting
    cxxopts::Options options("\n  $ doAnalysis",  "\n         **********************\n         *                    *\n         *       Looper       *\n         *                    *\n         **********************\n");

    // Read the options
    options.add_options()
        ("J,json"        , "json job config",                                                                                                                         cxxopts::value<std::string>())
        ("i,input"       , "Comma separated input file list OR if just a directory is provided it will glob all in the directory BUT must end with '/' for the path", cxxopts::value<std::string>())
        ("t,tree"        , "Name of the tree in the root file to open and loop over"                                             , cxxopts::value<std::string>())
        ("s,syst"        , "Syst variation name"                                                                                 , cxxopts::value<std::string>())
        ("e,systidx"     , "Syst index"                                                                                          , cxxopts::value<int>())
        ("o,output"      , "Output file name"                                                                                    , cxxopts::value<std::string>())
        ("n,nevents"     , "N events to loop over"                                                                               , cxxopts::value<int>()->default_value("-1"))
        ("j,nsplit_jobs" , "Enable splitting jobs by N blocks (--job_index must be set)"                                         , cxxopts::value<int>())
        ("I,job_index"   , "job_index of split jobs (--nsplit_jobs must be set. index starts from 0. i.e. 0, 1, 2, 3, etc...)"   , cxxopts::value<int>())
        ("d,debug"       , "Run debug job. i.e. overrides output option to 'debug.root' and 'recreate's the file.")
        ("h,help"        , "Print help")
        ;

    auto result = options.parse(argc, argv);

    // NOTE: When an option was provided (e.g. -i or --input), then the result.count("<option name>") is more than 0
    // Therefore, the option can be parsed easily by asking the condition if (result.count("<option name>");
    // That's how the several options are parsed below

    //_______________________________________________________________________________
    // --help
    if (result.count("help"))
    {
        std::cout << options.help() << std::endl;
        exit(1);
    }

    //_______________________________________________________________________________
    // --input
    if (result.count("input"))
    {
        ana.input_file_list_tstring = result["input"].as<std::string>();
    }
    else
    {
        std::cout << options.help() << std::endl;
        std::cout << "ERROR: Input list is not provided! Check your arguments" << std::endl;
        exit(1);
    }

    //_______________________________________________________________________________
    // --json
    if (result.count("json"))
    {
    }
    else
    {
        std::cout << options.help() << std::endl;
        std::cout << "ERROR: Json file not provided! Check your arguments" << std::endl;
        exit(1);
    }

    //_______________________________________________________________________________
    // --tree
    if (result.count("tree"))
    {
        ana.input_tree_name = result["tree"].as<std::string>();
    }
    else
    {
        std::cout << options.help() << std::endl;
        std::cout << "ERROR: Input tree name is not provided! Check your arguments" << std::endl;
        exit(1);
    }

    //_______________________________________________________________________________
    // --syst
    if (result.count("syst"))
    {
        ana.syst_name = result["syst"].as<std::string>();
    }
    else
    {
        ana.syst_name = "";
    }

    //_______________________________________________________________________________
    // --systidx
    if (result.count("systidx"))
    {
        ana.syst_idx = result["systidx"].as<int>();
    }
    else
    {
        std::cout << "No Syst index set set to -1" << std::endl;
        ana.syst_idx = -1;
    }

    //_______________________________________________________________________________
    // --debug
    if (result.count("debug"))
    {
        ana.output_tfile = new TFile("debug.root", "recreate");
    }
    else
    {
        //_______________________________________________________________________________
        // --output
        if (result.count("output"))
        {
            ana.output_tfile = new TFile(result["output"].as<std::string>().c_str(), "recreate");
            // if (not ana.output_tfile->IsOpen())
            // {
            //     std::cout << options.help() << std::endl;
            //     std::cout << "ERROR: output already exists! provide new output name or delete old file. OUTPUTFILE=" << result["output"].as<std::string>() << std::endl;
            //     exit(1);
            // }
        }
        else
        {
            std::cout << options.help() << std::endl;
            std::cout << "ERROR: Output file name is not provided! Check your arguments" << std::endl;
            exit(1);
        }
    }

    //_______________________________________________________________________________
    // --nevents
    ana.n_events = result["nevents"].as<int>();

    //_______________________________________________________________________________
    // --nsplit_jobs
    if (result.count("nsplit_jobs"))
    {
        ana.nsplit_jobs = result["nsplit_jobs"].as<int>();
        if (ana.nsplit_jobs <= 0)
        {
            std::cout << options.help() << std::endl;
            std::cout << "ERROR: option string --nsplit_jobs" << ana.nsplit_jobs << " has zero or negative value!" << std::endl;
            std::cout << "I am not sure what this means..." << std::endl;
            exit(1);
        }
    }
    else
    {
        ana.nsplit_jobs = -1;
    }

    //_______________________________________________________________________________
    // --nsplit_jobs
    if (result.count("job_index"))
    {
        ana.job_index = result["job_index"].as<int>();
        if (ana.job_index < 0)
        {
            std::cout << options.help() << std::endl;
            std::cout << "ERROR: option string --job_index" << ana.job_index << " has negative value!" << std::endl;
            std::cout << "I am not sure what this means..." << std::endl;
            exit(1);
        }
    }
    else
    {
        ana.job_index = -1;
    }


    // Sanity check for split jobs (if one is set the other must be set too)
    if (result.count("job_index") or result.count("nsplit_jobs"))
    {
        // If one is not provided then throw error
        if ( not (result.count("job_index") and result.count("nsplit_jobs")))
        {
            std::cout << options.help() << std::endl;
            std::cout << "ERROR: option string --job_index and --nsplit_jobs must be set at the same time!" << std::endl;
            exit(1);
        }
        // If it is set then check for sanity
        else
        {
            if (ana.job_index >= ana.nsplit_jobs)
            {
                std::cout << options.help() << std::endl;
                std::cout << "ERROR: --job_index >= --nsplit_jobs ! This does not make sense..." << std::endl;
                exit(1);
            }
        }
    }

    //
    // Printing out the option settings overview
    //
    std::cout <<  "=========================================================" << std::endl;
    std::cout <<  " Setting of the analysis job based on provided arguments " << std::endl;
    std::cout <<  "---------------------------------------------------------" << std::endl;
    std::cout <<  " ana.input_file_list_tstring: " << ana.input_file_list_tstring <<  std::endl;
    std::cout <<  " ana.output_tfile: " << ana.output_tfile->GetName() <<  std::endl;
    std::cout <<  " ana.n_events: " << ana.n_events <<  std::endl;
    std::cout <<  " ana.nsplit_jobs: " << ana.nsplit_jobs <<  std::endl;
    std::cout <<  " ana.job_index: " << ana.job_index <<  std::endl;
    std::cout <<  "=========================================================" << std::endl;

//********************************************************************************
//
// 2. Opening input baby files
//
//********************************************************************************

    // Create the TChain that holds the TTree's of the baby ntuples
    ana.events_tchain = RooUtil::FileUtil::createTChain(ana.input_tree_name, ana.input_file_list_tstring);

    // Create a Looper object to loop over input files
    // the "www" object is defined in the wwwtree.h/cc
    // This is an instance which helps read variables in the WWW baby TTree
    // It is a giant wrapper that facilitates reading TBranch values.
    // e.g. if there is a TBranch named "lep_pt" which is a std::vector<float> then, one can access the branch via
    //
    //    std::vector<float> lep_pt = www.lep_pt();
    //
    // and no need for "SetBranchAddress" and declaring variable shenanigans necessary
    // This is a standard thing SNT does pretty much every looper we use
    ana.looper.init(ana.events_tchain, &vvv, ana.n_events);

//********************************************************************************
//
// Interlude... notes on RooUtil framework
//
//********************************************************************************

    // Set the cutflow object output file
    ana.cutflow.setTFile(ana.output_tfile);

    // various information on the sample is saved in a json format
    std::ifstream jj(result["json"].as<std::string>()); //
    json j;
    jj >> j;
    int is_data = j["is_data"];
    int is_sig = j["is_sig"];
    int is_eft = j["is_eft"];
    float lumi = j["lumi"];
    float xsec = j["xsec"];
    float sum_genWeight = j["sum_genWeight"];
    TString process = j["process"];
    int sm_eft_idx = 0;
    int year = j["year"];
    int eft_idx_benchmark = j["eft_benchmark"];
    // int eft_idx_benchmark = 0;

    std::ifstream eftjj("data/eft_idx_database.json"); //
    json eftnames;
    eftjj >> eftnames;

    TString eftname_db_key = "";
    if (process.Contains("Dim6"))
        eftname_db_key = "Dim61J";
    if (process.Contains("Dim8") and process.Contains("WWW"))
        eftname_db_key = "WWWD8";
    if (process.Contains("Dim8") and process.Contains("WWZ"))
        eftname_db_key = "WWZD8";
    if (process.Contains("Dim8") and process.Contains("WZZ"))
        eftname_db_key = "WZZD8";
    if (process.Contains("Dim8") and process.Contains("ZZZ"))
        eftname_db_key = "ZZZD8";

    int neftidxs = eftname_db_key.IsNull() ? 0 : eftnames[eftname_db_key.Data()].size();

    std::cout <<  " neftidxs: " << neftidxs <<  std::endl;

    std::vector<TString> regions = {"A", "B", "C", "D", "E", "F"};

    #include "lambda.h"

    //===============================================================================================================================================================
    // Applying weights
    ana.cutflow.addCut("Base",
                       [&, is_sig, is_eft]()
                       {
                           if (is_eft)
                           {
                               return LHEReweightingWeight().size() != 0;
                           }
                           else
                           {
                               return true;
                           }
                       },
                       [&, is_data, is_sig, is_eft, sm_eft_idx, lumi, xsec, sum_genWeight, eft_idx_benchmark]()
                       {
                           if (is_data)
                           {
                               return 1.f;
                           }
                           else
                           {

                               float wgt = genWeight() * FJSFMedium() * FJSFLoose() * lumi * xsec * 1000.0 / sum_genWeight;

                               if (is_eft)
                               {

                                   float syst = 1;
                                   if (LHEReweightingWeight().size() != 0)
                                       return LHEReweightingWeight()[eft_idx_benchmark] * wgt * syst;
                                   else
                                       return 0.f;
                               }
                               else
                               {
                                   return wgt;
                               }
                           }
                       } );

    //===============================================================================================================================================================
    // Zero lepton region
    ana.cutflow.getCut("Base");
    ana.cutflow.addCutToLastActiveCut("ZL", [&]() { return is0Lep() and trigger(); }, UNITY);
    ana.cutflow.getCut("ZL");
    ana.cutflow.addCutToLastActiveCut("ZL2FJ", [&]() { return NFJ() == 2; }, UNITY);
    ana.cutflow.getCut("ZL");
    ana.cutflow.addCutToLastActiveCut("ZL3FJ", [&]() { return NFJ() >= 3; }, UNITY);

    for (auto& syst : variations)
    {
        TString systname = syst.EqualTo("Nominal") ? "" : syst;
        TString preselname_2fj = TString::Format("ZL2FJPresel%s", systname.Data());

        ana.cutflow.getCut("ZL2FJ");
        ana.cutflow.addCutToLastActiveCut(preselname_2fj,
                                          [&, syst]()
                                          {
                                              std::vector<std::function<bool()>> cuts_2fj = 
                                              {
                                                  [&, syst]() { return HTFJ(syst) > 1100; },
                                                  [&, syst]() { return FJ0(syst).pt() > 600.; },
                                                  [&, syst]() { return FJ0(syst).mass() < 150.; },
                                                  [&, syst]() { return FJ1(syst).mass() < 150.; },
                                              };
                                              for (auto& cut : cuts_2fj)
                                              {
                                                  if (not cut()) return false;
                                              }
                                              return true;
                                          }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJA%s", systname.Data()), [&, syst]() { return is_inside_2d(syst)  and wmd_reg_2d(syst) == 4; }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJB%s", systname.Data()), [&, syst]() { return is_inside_2d(syst)  and wmd_reg_2d(syst) != 4; }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJC%s", systname.Data()), [&, syst]() { return is_outside_2d(syst) and wmd_reg_2d(syst) == 4; }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJD%s", systname.Data()), [&, syst]() { return is_outside_2d(syst) and wmd_reg_2d(syst) != 4; }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJE%s", systname.Data()), [&, syst]() { return is_shell_2d(syst)   and wmd_reg_2d(syst) == 4; }, UNITY);
        ana.cutflow.getCut(preselname_2fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL2FJF%s", systname.Data()), [&, syst]() { return is_shell_2d(syst)   and wmd_reg_2d(syst) != 4; }, UNITY);

        TString preselname_3fj = TString::Format("ZL3FJPresel%s", systname.Data());
        ana.cutflow.getCut("ZL3FJ");
        ana.cutflow.addCutToLastActiveCut(preselname_3fj,
                                          [&, syst]()
                                          {
                                              std::vector<std::function<bool()>> cuts_3fj = 
                                              {
                                                  [&, syst]() { return SumPtFJ(syst) > 1250; },
                                                  [&, syst]() { return FJ0(syst).pt() > 600.; },
                                                  [&, syst]() { return FJ0(syst).mass() < 150.; },
                                                  [&, syst]() { return FJ1(syst).mass() < 150.; },
                                                  [&, syst]() { return FJ2(syst).mass() < 150.; },
                                              };
                                              for (auto& cut : cuts_3fj)
                                              {
                                                  if (not cut()) return false;
                                              }
                                              return true;
                                          }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJA%s", systname.Data()), [&, syst]() { return is_inside_3d(syst)  and wmd_reg_3d(syst) == 8; }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJB%s", systname.Data()), [&, syst]() { return is_inside_3d(syst)  and wmd_reg_3d(syst) != 8; }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJC%s", systname.Data()), [&, syst]() { return is_outside_3d(syst) and wmd_reg_3d(syst) == 8; }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJD%s", systname.Data()), [&, syst]() { return is_outside_3d(syst) and wmd_reg_3d(syst) != 8; }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJE%s", systname.Data()), [&, syst]() { return is_shell_3d(syst)   and wmd_reg_3d(syst) == 8; }, UNITY);
        ana.cutflow.getCut(preselname_3fj); ana.cutflow.addCutToLastActiveCut(TString::Format("ZL3FJF%s", systname.Data()), [&, syst]() { return is_shell_3d(syst)   and wmd_reg_3d(syst) != 8; }, UNITY);

    }

    ana.cutflow.getCut("ZL");
    ana.cutflow.addCutToLastActiveCut("ZL3FJTop",
                                      [&]()
                                      {
                                          return is_atleast_onetop_3d()
                                              and NFJ() >= 3
                                              and SumPtFJ() > 1250
                                              and FJ0().pt() > 500.
                                              and NoORNbTight() >= 2
                                              and FJ2().mass() > 80.
                                              and is_outside_3d()
                                              and wmd_reg_3d() == 8
                                              ;
                                      },
                                      UNITY);

    //===============================================================================================================================================================
    // Print cut structure
    ana.cutflow.printCuts();

    // Histogram utility object that is used to define the histograms
    RooUtil::Histograms histograms_FJ0;
    histograms_FJ0.addHistogram("Pt0"    , 180 , 0       , 3000   , [&]() { return FJ0().pt(); } );
    histograms_FJ0.addHistogram("Eta0"   , 180 , -5      , 5      , [&]() { return FJ0().eta(); } );
    histograms_FJ0.addHistogram("Mass0"  , 180 , 0       , 250    , [&]() { return FJ0().mass(); } );
    histograms_FJ0.addHistogram("VMD0"   , 180 , 0       , 1      , [&]() { return VMD0(); } );
    histograms_FJ0.addHistogram("NL0"    , 3   , 0       , 3      , [&]() { return NLGen0(); } );
    histograms_FJ0.addHistogram("NB0"    , 3   , 0       , 3      , [&]() { return NBGen0(); } );

    RooUtil::Histograms histograms_FJ1;
    histograms_FJ1.addHistogram("Pt1"    , 180 , 0       , 2500   , [&]() { return FJ1().pt(); } );
    histograms_FJ1.addHistogram("Eta1"   , 180 , -5      , 5      , [&]() { return FJ1().eta(); } );
    histograms_FJ1.addHistogram("Mass1"  , 180 , 0       , 250    , [&]() { return FJ1().mass(); } );
    histograms_FJ1.addHistogram("VMD1"   , 180 , 0       , 1      , [&]() { return VMD1(); } );
    histograms_FJ1.addHistogram("NL1"    , 3   , 0       , 3      , [&]() { return NLGen1(); } );
    histograms_FJ1.addHistogram("NB1"    , 3   , 0       , 3      , [&]() { return NBGen1(); } );

    RooUtil::Histograms histograms_FJ2;
    histograms_FJ2.addHistogram("Pt2"    , 180 , 0       , 1500   , [&]() { return FJ2().pt(); } );
    histograms_FJ2.addHistogram("Eta2"   , 180 , -5      , 5      , [&]() { return FJ2().eta(); } );
    histograms_FJ2.addHistogram("Mass2"  , 180 , 0       , 250    , [&]() { return FJ2().mass(); } );
    histograms_FJ2.addHistogram("VMD2"   , 180 , 0       , 1      , [&]() { return VMD2(); } );
    histograms_FJ2.addHistogram("NL2"    , 3   , 0       , 3      , [&]() { return NLGen2(); } );
    histograms_FJ2.addHistogram("NB2"    , 3   , 0       , 3      , [&]() { return NBGen2(); } );

    RooUtil::Histograms histograms_event;
    histograms_event.addHistogram("HTFJ"         , 180 , 0 , 5000 , [&]() { return HTFJ(); } );
    histograms_event.addHistogram("SumPtFJ"      , 180 , 0 , 5000 , [&]() { return SumPtFJ(); } );
    histograms_event.addHistogram("HTFJFit2"     , {1000., 1100., 1200., 1300., 1400., 1500., 1600., 1700., 1800., 1900., 2000., 2100., 2200., 2300., 2400., 2500., 2600., 2700., 2800., 2900., 3000., 3250., 3500., 3750., 4000.} , [&]() { return HTFJ(); } );
    histograms_event.addHistogram("NoORNbLoose"  , 7   , 0 , 7    , [&]() { return NoORNbLoose(); } );
    histograms_event.addHistogram("NoORNbMedium" , 7   , 0 , 7    , [&]() { return NoORNbMedium(); } );
    histograms_event.addHistogram("NoORNbTight"  , 7   , 0 , 7    , [&]() { return NoORNbTight(); } );

    RooUtil::Histograms histograms_FJ0_SF;
    histograms_FJ0_SF.addHistogram("SFVMD0" , 10000  , 0     , 1     , [&]() { return VMD0(); } );

    RooUtil::Histograms histograms_3FJ_SR;
    histograms_3FJ_SR.addHistogram("SR1SumPtFJ", SR1SumPtFJ_bins, SR1SumPtFJ_var["Nominal"] );
    histograms_3FJ_SR.add2DVecHistogram("SR1SumPtFJ", SR1SumPtFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, SR1SumPtFJ_var_w_wgt["Nominal"], nweight, wgtvec);

    RooUtil::Histograms histograms_2FJ_SR;
    histograms_2FJ_SR.addHistogram("HTFJ_binned", HTFJ_bins, HTFJ_var["Nominal"] );
    histograms_2FJ_SR.add2DVecHistogram("HTFJ_binned", HTFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, HTFJ_var_w_wgt["Nominal"], nweight, wgtvec);

    std::map<TString, RooUtil::Histograms> syst_hists_3FJ_SR;
    // for (auto& syst : systs)
    // {
    //     for (auto& var : vars)
    //     {
    //         TString systvar = TString::Format("%s%s", syst.Data(), var.Data());
    //         syst_hists_3FJ_SR[systvar].addHistogram(TString::Format("SR1SumPtFJ%s", systvar.Data()), SR1SumPtFJ_bins, SR1SumPtFJ_var[systvar]);
    //         syst_hists_3FJ_SR[systvar].add2DVecHistogram(TString::Format("SR1SumPtFJ%s", systvar.Data()), SR1SumPtFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, SR1SumPtFJ_var_w_wgt[systvar], nweight, wgtvec);
    //     }
    // }
    for (auto& systvar : variations)
    {
        if (systvar.EqualTo("Nominal"))
            continue;
        syst_hists_3FJ_SR[systvar].addHistogram(TString::Format("SR1SumPtFJ%s", systvar.Data()), SR1SumPtFJ_bins, SR1SumPtFJ_var[systvar]);
        // syst_hists_3FJ_SR[systvar].add2DVecHistogram(TString::Format("SR1SumPtFJ%s", systvar.Data()), SR1SumPtFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, SR1SumPtFJ_var_w_wgt[systvar], nweight, wgtvec);
    }

    std::map<TString, RooUtil::Histograms> syst_hists_2FJ_SR;
    // for (auto& syst : systs)
    // {
    //     for (auto& var : vars)
    //     {
    //         TString systvar = TString::Format("%s%s", syst.Data(), var.Data());
    //         syst_hists_2FJ_SR[systvar].addHistogram(TString::Format("HTFJ%s", systvar.Data()), HTFJ_bins, HTFJ_var[systvar]);
    //         syst_hists_2FJ_SR[systvar].add2DVecHistogram(TString::Format("HTFJ%s", systvar.Data()), HTFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, HTFJ_var_w_wgt[systvar], nweight, wgtvec);
    //     }
    // }
    for (auto& systvar : variations)
    {
        if (systvar.EqualTo("Nominal"))
            continue;
        syst_hists_2FJ_SR[systvar].addHistogram(TString::Format("HTFJ_binned%s", systvar.Data()), HTFJ_bins, HTFJ_var[systvar]);
        // syst_hists_2FJ_SR[systvar].add2DVecHistogram(TString::Format("HTFJ%s", systvar.Data()), HTFJ_bins, "Wgts", n_wgt_syst, 0., (float) n_wgt_syst, HTFJ_var_w_wgt[systvar], nweight, wgtvec);
    }

    RooUtil::Histograms histograms_2FJ_Cutflow;
    std::vector<std::function<bool()>> cuts_2fj = 
    {
        [&]() { return HTFJ() > 1100; },
        [&]() { return FJ0().pt() > 500.; },
        [&]() { return FJ0().mass() < 150.; },
        [&]() { return FJ1().mass() < 150.; },
    };
    histograms_2FJ_Cutflow.addVecHistogram("Cutflow2FJ", cuts_2fj.size() + 1, 0, cuts_2fj.size() + 1, [&, cuts_2fj]() { std::vector<float> rtn; rtn.push_back(0); int icut = 1; for (auto& cut : cuts_2fj) { if (cut()) { rtn.push_back(icut); } else { break; } icut += 1; } return rtn; } );

    RooUtil::Histograms histograms_3FJ_Cutflow;
    std::vector<std::function<bool()>> cuts_3fj = 
    {
        [&]() { return SumPtFJ() > 1250; },
        [&]() { return FJ0().pt() > 500.; },
        [&]() { return FJ0().mass() < 150.; },
        [&]() { return FJ1().mass() < 150.; },
        [&]() { return FJ2().mass() < 150.; },
    };
    histograms_3FJ_Cutflow.addVecHistogram("Cutflow3FJ", cuts_3fj.size() + 1, 0, cuts_3fj.size() + 1, [&, cuts_3fj]() { std::vector<float> rtn; rtn.push_back(0); int icut = 1; for (auto& cut : cuts_3fj) { if (cut()) { rtn.push_back(icut); } else { break; } icut += 1; } return rtn; } );

    ana.cutflow.bookHistogramsForCut(histograms_2FJ_Cutflow, "ZL2FJ");
    ana.cutflow.bookHistogramsForCut(histograms_3FJ_Cutflow, "ZL3FJ");

    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "ZL2FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ1, "ZL2FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "ZL2FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_2FJ_SR, "ZL2FJPresel");

    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "ZL3FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ1, "ZL3FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ2, "ZL3FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "ZL3FJPresel");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_3FJ_SR, "ZL3FJPresel");

    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "ZL3FJTop");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ1, "ZL3FJTop");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ2, "ZL3FJTop");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "ZL3FJTop");
    ana.cutflow.bookHistogramsForCutAndBelow(histograms_3FJ_SR, "ZL3FJTop");

    // for (auto& syst : systs)
    // {
    //     for (auto& var : vars)
    //     {
    //         TString systvar = TString::Format("%s%s", syst.Data(), var.Data());
    //         TString cut = TString::Format("ZL3FJA%s", systvar.Data());
    //         ana.cutflow.bookHistogramsForCut(syst_hists_3FJ_SR[systvar], cut);
    //     }
    // }
    for (auto& systvar : variations)
    {
        if (systvar.EqualTo("Nominal"))
            continue;
        TString cut = TString::Format("ZL3FJA%s", systvar.Data());
        ana.cutflow.bookHistogramsForCut(syst_hists_3FJ_SR[systvar], cut);
    }

    // for (auto& syst : systs)
    // {
    //     for (auto& var : vars)
    //     {
    //         TString systvar = TString::Format("%s%s", syst.Data(), var.Data());
    //         TString cut = TString::Format("ZL2FJA%s", systvar.Data());
    //         ana.cutflow.bookHistogramsForCut(syst_hists_2FJ_SR[systvar], cut);
    //     }
    // }
    for (auto& systvar : variations)
    {
        if (systvar.EqualTo("Nominal"))
            continue;
        TString cut = TString::Format("ZL2FJA%s", systvar.Data());
        ana.cutflow.bookHistogramsForCut(syst_hists_2FJ_SR[systvar], cut);
    }

    // Looping input file
    while (ana.looper.nextEvent())
    {

        // If splitting jobs are requested then determine whether to process the event or not based on remainder
        if (result.count("job_index") and result.count("nsplit_jobs"))
        {
            if (ana.looper.getNEventsProcessed() % ana.nsplit_jobs != (unsigned int) ana.job_index)
                continue;
        }

        //Do what you need to do in for each event here
        //To save use the following function
        ana.cutflow.fill();
    }

    // Writing output file
    ana.cutflow.saveOutput();

    // The below can be sometimes crucial
    delete ana.output_tfile;
}























































    ////signal region
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJA", [&]() { return is_inside_2d() and vmd_reg_2d() == 4; }, BLIND);
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJB", [&]() { return is_outside_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJC", [&]() { return is_inside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJD", [&]() { return is_outside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJE", [&]() { return is_shell_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJF", [&]() { return is_shell_2d() and vmd_reg_2d() != 4; }, UNITY);

    ////signal region
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJLowMET" , [&]() { return MET().pt() <= 400.; }, UNITY);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJALowMET", [&]() { return is_inside_2d() and vmd_reg_2d() == 4; }, BLIND);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJBLowMET", [&]() { return is_outside_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJCLowMET", [&]() { return is_inside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJDLowMET", [&]() { return is_outside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJELowMET", [&]() { return is_shell_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJLowMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJFLowMET", [&]() { return is_shell_2d() and vmd_reg_2d() != 4; }, UNITY);

    ////signal region
    //ana.cutflow.getCut("ZL2FJNoB");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJHighMET" , [&]() { return MET().pt() > 400. and NoORNbTight() == 0; }, UNITY);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJAHighMET", [&]() { return is_inside_2d() and vmd_reg_2d() == 4; }, BLIND);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJBHighMET", [&]() { return is_outside_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJCHighMET", [&]() { return is_inside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJDHighMET", [&]() { return is_outside_2d() and vmd_reg_2d() != 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJEHighMET", [&]() { return is_shell_2d() and vmd_reg_2d() == 4; }, UNITY);
    //ana.cutflow.getCut("ZL2FJHighMET");
    //ana.cutflow.addCutToLastActiveCut("ZL2FJFHighMET", [&]() { return is_shell_2d() and vmd_reg_2d() != 4; }, UNITY);

    // // Now that the cuts are defined
    // // Declaring systematics for this channel
    // //                       VVVVVV  == The "ZL3FJ" prefixes are gonna get triggered to keep track of Systematics
    // if (do_systematics)
    // {

    //     std::vector<TString> systs = {"JES", "JER"};
    //     std::vector<TString> vars = {"Up", "Dn"};

    //     for (auto& syst : systs)
    //     {
    //         for (auto& var : vars)
    //         {
    //             TString systvar = TString::Format("%s%s", syst.Data(), var.Data());
    //             ana.cutflow.addCutSyst(systvar, {"ZL3FJ"});
    //             ana.cutflow.setCutSyst("ZL3FJ", systvar,
    //                                           [&, systvar]()
    //                                           {
    //                                               return NFJ(systvar) >= 3 and
    //                                                   SumPtFJ(systvar) > 1250 and
    //                                                   FJ0(systvar).pt() > 500. and
    //                                                   FJ0(systvar).mass() < 150. and
    //                                                   FJ1(systvar).mass() < 150. and
    //                                                   FJ2(systvar).mass() < 150.;
    //                                           }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJA", systvar, [&, systvar]() { return is_inside_3d(systvar) and vmd_reg_3d(systvar) == 8; }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJB", systvar, [&, systvar]() { return is_outside_3d(systvar) and vmd_reg_3d(systvar) == 8; }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJC", systvar, [&, systvar]() { return is_inside_3d(systvar) and vmd_reg_3d(systvar) != 8; }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJD", systvar, [&, systvar]() { return is_outside_3d(systvar) and vmd_reg_3d(systvar) != 8; }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJE", systvar, [&, systvar]() { return is_shell_3d(systvar) and vmd_reg_3d(systvar) == 8; }, UNITY);
    //             ana.cutflow.setCutSyst("ZL3FJF", systvar, [&, systvar]() { return is_shell_3d(systvar) and vmd_reg_3d(systvar) != 8; }, UNITY);
    //         }
    //     }
    // }

    // // Histogram utility object that is used to define the histograms
    // RooUtil::Histograms histograms_FJ0;
    // histograms_FJ0.addHistogram("Pt0"    , 180 , 0       , 3000   , [&]() { return FJ0().pt(); } );
    // histograms_FJ0.addHistogram("Eta0"   , 180 , -5      , 5      , [&]() { return FJ0().eta(); } );
    // // histograms_FJ0.addHistogram("Phi0"   , 180 , -3.1416 , 3.1416 , [&]() { return FJ0().phi(); } );
    // histograms_FJ0.addHistogram("Mass0"  , 180 , 0       , 250    , [&]() { return FJ0().mass(); } );
    // histograms_FJ0.addHistogram("VMD0"   , 180 , 0       , 1      , [&]() { return VMD0(); } );
    // // histograms_FJ0.addHistogram("WMD0"   , 180 , 0       , 1      , [&]() { return WMD0(); } );
    // // histograms_FJ0.addHistogram("NQGen0" , 7   , 0       , 7      , [&]() { return NQGen0(); } );
    // // histograms_FJ0.addHistogram("NBGen0" , 7   , 0       , 7      , [&]() { return NBGen0(); } );
    // // histograms_FJ0.addHistogram("NLGen0" , 7   , 0       , 7      , [&]() { return NLGen0(); } );

    // RooUtil::Histograms histograms_FJ1;
    // histograms_FJ1.addHistogram("Pt1"    , 180 , 0       , 2500   , [&]() { return FJ1().pt(); } );
    // histograms_FJ1.addHistogram("Eta1"   , 180 , -5      , 5      , [&]() { return FJ1().eta(); } );
    // // histograms_FJ1.addHistogram("Phi1"   , 180 , -3.1416 , 3.1416 , [&]() { return FJ1().phi(); } );
    // histograms_FJ1.addHistogram("Mass1"  , 180 , 0       , 250    , [&]() { return FJ1().mass(); } );
    // histograms_FJ1.addHistogram("VMD1"   , 180 , 0       , 1      , [&]() { return VMD1(); } );
    // // histograms_FJ1.addHistogram("WMD1"   , 180 , 0       , 1      , [&]() { return WMD1(); } );
    // // histograms_FJ1.addHistogram("NQGen1" , 7   , 0       , 7      , [&]() { return NQGen1(); } );
    // // histograms_FJ1.addHistogram("NBGen1" , 7   , 0       , 7      , [&]() { return NBGen1(); } );
    // // histograms_FJ1.addHistogram("NLGen1" , 7   , 0       , 7      , [&]() { return NLGen1(); } );
    // // histograms_FJ1.addHistogram("Pt01"   , 180 , 0       , 4500   , [&]() { return (FJ0() + FJ1()).pt(); } );
    // // histograms_FJ1.addHistogram("Mass01" , 180 , 0       , 4500   , [&]() { return (FJ0() + FJ1()).mass(); } );
    // // histograms_FJ1.addHistogram("DPhi01" , 180 , 0       , 3.1416 , [&]() { return fabs(RooUtil::Calc::DeltaPhi(FJ0(), FJ1())); } );
    // // histograms_FJ1.addHistogram("D01"    , 180 , 0       , 10     , [&]() { return scaled_dist_2d(82.5); } );
    // // histograms_FJ1.addHistogram("MinVMD1", 180 , 0       , 1      , [&]() { return min(VMD0(), VMD1()); } );
    // // histograms_FJ1.add2DHistogram("Mass0" , 90 , 40 , 150, "Mass1" , 90 , 40 , 150, [&]() { return (FJ0()).mass(); }, [&]() { return (FJ1()).mass(); } );
    // // histograms_FJ1.add2DHistogram("MassR01" , 90 , 0 , 8, "MinVMD" , 90 , 0 , 1, [&]() { return scaled_dist_2d(82.5); }, [&]() { return min(VMD0(), VMD1()); } );
    // // histograms_FJ1.add2DHistogram("MassR01Coarse" ,  8 , 0 , 8, "MinVMDCoarse" , 10 , 0 , 1, [&]() { return scaled_dist_2d(82.5); }, [&]() { return min(VMD0(), VMD1()); } );

    // RooUtil::Histograms histograms_FJ2;
    // histograms_FJ2.addHistogram("Pt2"    , 180 , 0       , 1500   , [&]() { return FJ2().pt(); } );
    // histograms_FJ2.addHistogram("Eta2"   , 180 , -5      , 5      , [&]() { return FJ2().eta(); } );
    // // histograms_FJ2.addHistogram("Phi2"   , 180 , -3.1416 , 3.1416 , [&]() { return FJ2().phi(); } );
    // histograms_FJ2.addHistogram("Mass2"  , 180 , 0       , 250    , [&]() { return FJ2().mass(); } );
    // histograms_FJ2.addHistogram("VMD2"   , 180 , 0       , 1      , [&]() { return VMD2(); } );
    // // histograms_FJ2.addHistogram("NQGen2" , 7   , 0       , 7      , [&]() { return NQGen2(); } );
    // // histograms_FJ2.addHistogram("NBGen2" , 7   , 0       , 7      , [&]() { return NBGen2(); } );
    // // histograms_FJ2.addHistogram("NLGen2" , 7   , 0       , 7      , [&]() { return NLGen2(); } );
    // // histograms_FJ2.addHistogram("PtVVV"  , 180 , 0       , 2500   , [&]() { return (FJ0() + FJ1() + FJ2()).pt(); } );
    // // histograms_FJ2.addHistogram("Mass02" , 180 , 0       , 2500   , [&]() { return (FJ0() + FJ2()).mass(); } );
    // // histograms_FJ2.addHistogram("Mass12" , 180 , 0       , 2500   , [&]() { return (FJ1() + FJ2()).mass(); } );
    // // histograms_FJ2.addHistogram("DPhi02" , 180 , 0       , 3.1416 , [&]() { return fabs(RooUtil::Calc::DeltaPhi(FJ0(), FJ2())); } );
    // // histograms_FJ2.addHistogram("DPhi12" , 180 , 0       , 3.1416 , [&]() { return fabs(RooUtil::Calc::DeltaPhi(FJ1(), FJ2())); } );
    // // histograms_FJ2.addHistogram("MinVMD2", 180 , 0       , 1      , [&]() { return min(min(VMD0(), VMD1()), VMD2()); } );
    // // histograms_FJ2.add2DHistogram("Mass0" , 90 , 40 , 150, "Mass1" , 90 , 40 , 150, [&]() { return (FJ0()).mass(); }, [&]() { return (FJ1()).mass(); } );
    // // histograms_FJ2.add2DHistogram("Mass0" , 90 , 40 , 150, "Mass2" , 90 , 40 , 150, [&]() { return (FJ0()).mass(); }, [&]() { return (FJ2()).mass(); } );
    // // histograms_FJ2.add2DHistogram("Mass1" , 90 , 40 , 150, "Mass2" , 90 , 40 , 150, [&]() { return (FJ1()).mass(); }, [&]() { return (FJ2()).mass(); } );
    // // histograms_FJ2.addHistogram("D012"    , 180 , 0       , 10      , [&]() { return scaled_dist_3d(85); } );

    // RooUtil::Histograms histograms_event;
    // // histograms_event.addHistogram("Yield"        , 1   , 0 , 1    , [&]() { return 0.f; } );
    // // histograms_event.addHistogram("NFJ"          , 7   , 0 , 7    , [&]() { return NFJ(); } );
    // // histograms_event.addHistogram("NJ"           , 7   , 0 , 7    , [&]() { return NJ(); } );
    // // histograms_event.addHistogram("NbLoose"      , 7   , 0 , 7    , [&]() { return NbLoose(); } );
    // // histograms_event.addHistogram("NbMedium"     , 7   , 0 , 7    , [&]() { return NbMedium(); } );
    // // histograms_event.addHistogram("NbTight"      , 7   , 0 , 7    , [&]() { return NbTight(); } );
    // // histograms_event.addHistogram("NoORNbLoose"  , 7   , 0 , 7    , [&]() { return NoORNbLoose(); } );
    // // histograms_event.addHistogram("NoORNbMedium" , 7   , 0 , 7    , [&]() { return NoORNbMedium(); } );
    // // histograms_event.addHistogram("NoORNbTight"  , 7   , 0 , 7    , [&]() { return NoORNbTight(); } );
    // // histograms_event.addHistogram("HT"           , 180 , 0 , 5000 , [&]() { return HT(); } );
    // histograms_event.addHistogram("HTFJ"         , 180 , 0 , 5000 , [&]() { return HTFJ(); } );
    // // histograms_event.addHistogram("HTJ"          , 180 , 0 , 5000 , [&]() { return HTJ(); } );
    // histograms_event.addHistogram("SumPtFJ"      , 180 , 0 , 5000 , [&]() { return SumPtFJ(); } );
    // // histograms_event.addHistogram("SumPtFJZoom"  , 180 , 1200 , 3000 , [&]() { return SumPtFJ(); } );
    // // histograms_event.addHistogram("SumPtJ"       , 180 , 0 , 5000 , [&]() { return SumPtJ(); } );
    // // histograms_event.addHistogram("MVVX"         , 180 , 0 , 5000 , [&]() { return MVVX(); } );
    // // histograms_event.addHistogram("MET"          , 180 , 0 , 3000 , [&]() { return MET().pt(); } );
    // // histograms_event.addHistogram("SRMET"        , {0., 400., 600., 800., 1000., 1500.}, [&]() { if (MET().pt() < 1500.) return MET().pt(); else return 1499.f; } );
    // // histograms_event.addHistogram("HTJFit"       , 180 , 0 , 9000 , [&]() { return HTJ(); } );
    // // histograms_event.addHistogram("HTJFit2"      , {0., 1000., 1100., 1200., 1300., 1400., 1500., 1600., 1700., 1800., 1900., 2000., 2100., 2200., 2300., 2400., 2500., 2600., 2700., 2800., 2900., 3000., 3250., 3500., 3750., 4000., 5000., 7000.} , [&]() { return HTJ(); } );
    // // histograms_event.addHistogram("SumPtFJFit"   , 180 , 0 , 9000 , [&]() { return SumPtFJ(); } );
    // // histograms_event.addHistogram("SumPtFJFit2"  , {0., 1000., 1100., 1200., 1300., 1400., 1500., 1600., 1700., 1800., 1900., 2000., 2100., 2200., 2300., 2400., 2500., 2600., 2700., 2800., 2900., 3000., 3250., 3500., 3750., 4000., 5000., 7000.} , [&]() { return SumPtFJ(); } );
    // // histograms_event.addHistogram("HTFJFit"      , 180 , 0 , 9000 , [&]() { return HTFJ(); } );
    // // histograms_event.addHistogram("HTFit"        , 180 , 0 , 9000 , [&]() { return HT(); } );
    // histograms_event.addHistogram("HTFJFit2"     , {1000., 1100., 1200., 1300., 1400., 1500., 1600., 1700., 1800., 1900., 2000., 2100., 2200., 2300., 2400., 2500., 2600., 2700., 2800., 2900., 3000., 3250., 3500., 3750., 4000.} , [&]() { return HTFJ(); } );

    // RooUtil::Histograms histograms_FJ0_SF;
    // histograms_FJ0_SF.addHistogram("SFVMD0" , 10000  , 0     , 1     , [&]() { return VMD0(); } );

    // RooUtil::Histograms histograms_3FJ_SR;
    // histograms_3FJ_SR.addHistogram("SR1SumPtFJ", {1250, 1500, 1750, 2000, 2250, 2500, 3000, 4000} , [&]() { if (SumPtFJ() < 4000) return SumPtFJ(); else return 3999.f; } );
    // // histograms_3FJ_SR.addHistogram("SR2SumPtFJ", {1250, 1500, 1750, 2000, 3000} , [&]() { if (SumPtFJ() < 2500) return SumPtFJ(); else return 2499.f; } );

    // RooUtil::Histograms histograms_2FJ_SR;
    // histograms_2FJ_SR.addHistogram("HTFJ_binned", {1100, 1500, 2000, 2500, 3000, 3500} , [&]() { if (HTFJ() < 3500) return HTFJ(); else return 3499.f; } );
    // // histograms_2FJ_SR.addHistogram("HTJ_binned", {1100, 2500, 4000, 6000} , [&]() { if (HTJ() < 6000) return HTJ(); else return 5999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR1HT", {1100, 1500, 2000, 2500, 3000} , [&]() { if (HT() < 3000) return HT(); else return 2999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR2HT", {1100, 1500, 2000, 2500, 3000, 3500, 4000, 5000} , [&]() { if (HT() < 5000) return HT(); else return 4999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR1HTFJ", {1100, 1500, 2000, 2500, 3000} , [&]() { if (HTFJ() < 3000) return HTFJ(); else return 2999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR2HTFJ", {1100, 1500, 2000, 2500, 3000, 3500, 4000, 5000} , [&]() { if (HTFJ() < 5000) return HTFJ(); else return 4999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR1SumPtFJ", {1250, 1500, 1750, 2000, 2250, 2500, 2750, 3000, 3500, 4000, 5000, 6000} , [&]() { if (SumPtFJ() < 6000) return SumPtFJ(); else return 5999.f; } );
    // // histograms_2FJ_SR.addHistogram("SR2SumPtFJ", {1250, 1500, 1750, 2000, 2500, 3000, 4000} , [&]() { if (SumPtFJ() < 4000) return SumPtFJ(); else return 3999.f; } );

    // histograms_2FJ_Cutflow.addVecHistogram("Cutflow2FJLMET", cuts_2fj_lowmet.size() + 1, 0, cuts_2fj_lowmet.size() + 1, [&, cuts_2fj_lowmet]() { std::vector<float> rtn; rtn.push_back(0); int icut = 1; for (auto& cut : cuts_2fj_lowmet) { if (cut()) { rtn.push_back(icut); } else { break; } icut += 1; } return rtn; } );
    // histograms_2FJ_Cutflow.addVecHistogram("Cutflow2FJHMET", cuts_2fj_highmet.size() + 1, 0, cuts_2fj_highmet.size() + 1, [&, cuts_2fj_highmet]() { std::vector<float> rtn; rtn.push_back(0); int icut = 1; for (auto& cut : cuts_2fj_highmet) { if (cut()) { rtn.push_back(icut); } else { break; } icut += 1; } return rtn; } );
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "ZL2FJLMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ1, "ZL2FJLMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "ZL2FJLMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_2FJ_SR, "ZL2FJLMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "ZL2FJHMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ1, "ZL2FJHMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "ZL2FJHMETPresel");
    // ana.cutflow.bookHistogramsForCutAndBelow(histograms_2FJ_SR, "ZL2FJHMETPresel");

    ////===============================================================================================================================================================
    //// One lepton region
    //ana.cutflow.getCut("Base");

    // bool do_onelep = false;
    // if (do_onelep)
    // {
    //     ana.cutflow.addCutToLastActiveCut("OL", [&]() { return is1Lep(); }, UNITY);
    //     ana.cutflow.addCutToLastActiveCut("OL1FJ", [&]() { return NFJ() == 1; }, UNITY);
    //     // True Fat-jet's (W fat-jets from top)
    //     ana.cutflow.getCut("OL1FJ");
    //     ana.cutflow.addCutToLastActiveCut("OLTB", [&]() { return NbTight() >= 1; }, UNITY);
    //     ana.cutflow.getCut("OLTB");
    //     ana.cutflow.addCutToLastActiveCut("OLElTB", [&]() { return abs(LepFlav()) == 11; }, UNITY);
    //     ana.cutflow.getCut("OLTB");
    //     ana.cutflow.addCutToLastActiveCut("OLMuTB", [&]() { return abs(LepFlav()) == 13; }, UNITY);
    //     // Fake Fat-jet's
    //     ana.cutflow.getCut("OL1FJ");
    //     ana.cutflow.addCutToLastActiveCut("OLNB", [&]() { return NoORNbTight() == 0; }, UNITY);
    //     ana.cutflow.getCut("OLNB");
    //     ana.cutflow.addCutToLastActiveCut("OLElNB", [&]() { return abs(LepFlav()) == 11; }, UNITY);
    //     ana.cutflow.getCut("OLNB");
    //     ana.cutflow.addCutToLastActiveCut("OLMuNB", [&]() { return abs(LepFlav()) == 13; }, UNITY);
    //     // For each regions add regions with pt bins and flavors
    //     vector<TString> regions = {"OLTB", "OLElTB", "OLMuTB", "OLNB", "OLElNB", "OLMuNB"};
    //     vector<float> ptbins = {200, 250, 300, 350, 400, 450, 500, 600, 800, 1000, 1300};
    //     vector<TString> flavor_names = {"Top", "W", "QB", "Q", "B", "Other"};
    //     for (unsigned int ibin = 0; ibin < ptbins.size(); ++ibin)
    //     {
    //         int pt_lower_bound = ptbins[ibin];
    //         int pt_upper_bound = ibin != ptbins.size() - 1 ? ptbins[ibin + 1] : 13600;
    //         for (auto& region : regions)
    //         {
    //             TString kinematic_bin_name = TString::Format("%sPtLo%dHi%d", region.Data(), pt_lower_bound, pt_upper_bound);
    //             ana.cutflow.getCut(region);
    //             ana.cutflow.addCutToLastActiveCut(
    //                 kinematic_bin_name,
    //                 [&, pt_lower_bound, pt_upper_bound]()
    //                 {
    //                     float pt = FJ0().pt();
    //                     return (pt > pt_lower_bound and pt <= pt_upper_bound);
    //                 }, UNITY);
    //             // Split by flavors
    //             for (unsigned int iflavor = 0; iflavor < flavor_names.size(); ++iflavor)
    //             {
    //                 ana.cutflow.getCut(kinematic_bin_name);
    //                 TString name = TString::Format("%s%s", kinematic_bin_name.Data(), flavor_names[iflavor].Data());
    //                 ana.cutflow.addCutToLastActiveCut(name, [&, iflavor]() { return fjcateg() == int(iflavor); }, UNITY);
    //             }
    //         }
    //     }
    // }

    // // Book Histograms
    // if (do_onelep)
    // {
    //     ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0, "OL");
    //     ana.cutflow.bookHistogramsForCutAndBelow(histograms_FJ0_SF, "OL");
    //     ana.cutflow.bookHistogramsForCutAndBelow(histograms_event, "OL");
    //     ana.cutflow.bookHistogramsForCutAndBelow(histograms_onelep, "OL");
    // }

    // RooUtil::Histograms histograms_onelep;
    // histograms_onelep.addHistogram("LPt"     , 180 , 0       , 1000   , [&]() { return Lep().pt(); } );
    // histograms_onelep.addHistogram("LEta"    , 180 , -5      , 5      , [&]() { return Lep().eta(); } );
    // histograms_onelep.addHistogram("LPhi"    , 180 , -3.1416 , 3.1416 , [&]() { return Lep().phi(); } );
    // histograms_onelep.addHistogram("LepFlav" , 30  , -15     , 15     , [&]() { return LepFlav(); } );

