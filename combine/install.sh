# Do this in a new terminal in uaf-10
# uaf-2 is rhel8, and higgs combine does not work with RHEL8
# uaf-10 is slc7, and it works
source /cvmfs/cms.cern.ch/cmsset_default.sh
cmsrel CMSSW_11_3_4
cd CMSSW_11_3_4/src
cmsenv
git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
cd HiggsAnalysis/CombinedLimit
git fetch origin
git checkout v9.1.0
scramv1 b clean
scramv1 b -j
cd ../../../../
bash <(curl -s https://raw.githubusercontent.com/cms-analysis/CombineHarvester/main/CombineTools/scripts/sparse-checkout-ssh.sh)
cd CMSSW_11_3_4/src/
scramv1 b -j
cd ../../
