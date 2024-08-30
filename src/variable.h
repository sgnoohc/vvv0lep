#define VARIATION "Nominal"
auto NFJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NFJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NFJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NFJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NFJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NFJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NFJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NFJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NFJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NFJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NFJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NFJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NFJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NFJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NFJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NFJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NFJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NFJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NFJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NFJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NFJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NFJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NFJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NFJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NFJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NFJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NFJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NFJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NFJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NFJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NFJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NFJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NFJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NFJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NFJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NFJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NFJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NFJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NFJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NFJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NFJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NFJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NFJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NFJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NFJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NFJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NFJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NFJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NFJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NFJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NFJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NFJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NFJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NFJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NFJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NFJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NFJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NFJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NFJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NFJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NFJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NFJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NFJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NFJjesPileUpPtHFdn();
    else
        return vvv.NFJ();
};

auto FJ0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.FJ0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.FJ0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.FJ0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.FJ0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.FJ0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.FJ0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.FJ0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.FJ0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.FJ0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.FJ0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.FJ0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.FJ0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.FJ0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.FJ0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.FJ0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.FJ0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.FJ0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.FJ0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.FJ0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.FJ0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.FJ0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.FJ0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.FJ0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.FJ0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.FJ0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.FJ0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.FJ0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.FJ0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.FJ0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.FJ0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.FJ0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.FJ0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.FJ0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.FJ0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.FJ0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.FJ0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.FJ0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.FJ0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.FJ0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.FJ0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.FJ0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.FJ0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.FJ0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.FJ0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.FJ0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.FJ0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.FJ0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.FJ0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.FJ0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.FJ0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.FJ0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.FJ0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.FJ0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.FJ0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.FJ0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.FJ0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.FJ0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.FJ0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.FJ0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.FJ0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.FJ0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.FJ0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.FJ0jesPileUpPtHFdn();
    else
        return vvv.FJ0();
};

auto FJ1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.FJ1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.FJ1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.FJ1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.FJ1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.FJ1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.FJ1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.FJ1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.FJ1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.FJ1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.FJ1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.FJ1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.FJ1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.FJ1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.FJ1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.FJ1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.FJ1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.FJ1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.FJ1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.FJ1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.FJ1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.FJ1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.FJ1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.FJ1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.FJ1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.FJ1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.FJ1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.FJ1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.FJ1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.FJ1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.FJ1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.FJ1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.FJ1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.FJ1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.FJ1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.FJ1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.FJ1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.FJ1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.FJ1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.FJ1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.FJ1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.FJ1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.FJ1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.FJ1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.FJ1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.FJ1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.FJ1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.FJ1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.FJ1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.FJ1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.FJ1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.FJ1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.FJ1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.FJ1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.FJ1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.FJ1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.FJ1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.FJ1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.FJ1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.FJ1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.FJ1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.FJ1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.FJ1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.FJ1jesPileUpPtHFdn();
    else
        return vvv.FJ1();
};

auto FJ2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.FJ2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.FJ2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.FJ2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.FJ2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.FJ2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.FJ2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.FJ2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.FJ2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.FJ2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.FJ2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.FJ2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.FJ2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.FJ2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.FJ2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.FJ2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.FJ2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.FJ2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.FJ2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.FJ2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.FJ2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.FJ2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.FJ2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.FJ2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.FJ2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.FJ2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.FJ2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.FJ2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.FJ2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.FJ2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.FJ2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.FJ2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.FJ2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.FJ2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.FJ2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.FJ2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.FJ2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.FJ2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.FJ2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.FJ2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.FJ2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.FJ2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.FJ2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.FJ2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.FJ2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.FJ2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.FJ2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.FJ2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.FJ2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.FJ2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.FJ2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.FJ2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.FJ2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.FJ2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.FJ2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.FJ2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.FJ2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.FJ2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.FJ2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.FJ2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.FJ2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.FJ2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.FJ2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.FJ2jesPileUpPtHFdn();
    else
        return vvv.FJ2();
};

auto FJ3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.FJ3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.FJ3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.FJ3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.FJ3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.FJ3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.FJ3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.FJ3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.FJ3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.FJ3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.FJ3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.FJ3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.FJ3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.FJ3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.FJ3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.FJ3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.FJ3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.FJ3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.FJ3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.FJ3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.FJ3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.FJ3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.FJ3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.FJ3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.FJ3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.FJ3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.FJ3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.FJ3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.FJ3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.FJ3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.FJ3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.FJ3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.FJ3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.FJ3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.FJ3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.FJ3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.FJ3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.FJ3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.FJ3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.FJ3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.FJ3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.FJ3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.FJ3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.FJ3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.FJ3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.FJ3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.FJ3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.FJ3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.FJ3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.FJ3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.FJ3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.FJ3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.FJ3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.FJ3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.FJ3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.FJ3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.FJ3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.FJ3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.FJ3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.FJ3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.FJ3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.FJ3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.FJ3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.FJ3jesPileUpPtHFdn();
    else
        return vvv.FJ3();
};

auto FJ4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.FJ4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.FJ4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.FJ4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.FJ4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.FJ4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.FJ4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.FJ4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.FJ4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.FJ4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.FJ4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.FJ4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.FJ4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.FJ4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.FJ4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.FJ4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.FJ4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.FJ4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.FJ4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.FJ4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.FJ4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.FJ4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.FJ4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.FJ4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.FJ4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.FJ4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.FJ4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.FJ4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.FJ4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.FJ4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.FJ4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.FJ4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.FJ4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.FJ4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.FJ4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.FJ4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.FJ4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.FJ4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.FJ4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.FJ4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.FJ4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.FJ4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.FJ4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.FJ4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.FJ4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.FJ4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.FJ4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.FJ4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.FJ4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.FJ4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.FJ4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.FJ4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.FJ4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.FJ4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.FJ4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.FJ4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.FJ4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.FJ4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.FJ4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.FJ4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.FJ4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.FJ4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.FJ4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.FJ4jesPileUpPtHFdn();
    else
        return vvv.FJ4();
};

auto VMD0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.VMD0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.VMD0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.VMD0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.VMD0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.VMD0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.VMD0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.VMD0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.VMD0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.VMD0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.VMD0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.VMD0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.VMD0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.VMD0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.VMD0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.VMD0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.VMD0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.VMD0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.VMD0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.VMD0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.VMD0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.VMD0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.VMD0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.VMD0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.VMD0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.VMD0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.VMD0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.VMD0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.VMD0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.VMD0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.VMD0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.VMD0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.VMD0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.VMD0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.VMD0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.VMD0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.VMD0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.VMD0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.VMD0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.VMD0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.VMD0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.VMD0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.VMD0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.VMD0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.VMD0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.VMD0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.VMD0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.VMD0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.VMD0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.VMD0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.VMD0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.VMD0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.VMD0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.VMD0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.VMD0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.VMD0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.VMD0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.VMD0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.VMD0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.VMD0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.VMD0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.VMD0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.VMD0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.VMD0jesPileUpPtHFdn();
    else
        return vvv.VMD0();
};

auto VMD1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.VMD1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.VMD1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.VMD1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.VMD1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.VMD1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.VMD1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.VMD1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.VMD1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.VMD1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.VMD1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.VMD1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.VMD1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.VMD1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.VMD1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.VMD1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.VMD1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.VMD1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.VMD1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.VMD1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.VMD1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.VMD1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.VMD1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.VMD1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.VMD1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.VMD1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.VMD1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.VMD1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.VMD1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.VMD1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.VMD1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.VMD1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.VMD1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.VMD1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.VMD1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.VMD1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.VMD1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.VMD1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.VMD1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.VMD1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.VMD1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.VMD1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.VMD1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.VMD1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.VMD1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.VMD1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.VMD1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.VMD1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.VMD1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.VMD1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.VMD1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.VMD1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.VMD1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.VMD1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.VMD1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.VMD1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.VMD1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.VMD1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.VMD1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.VMD1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.VMD1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.VMD1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.VMD1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.VMD1jesPileUpPtHFdn();
    else
        return vvv.VMD1();
};

auto VMD2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.VMD2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.VMD2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.VMD2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.VMD2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.VMD2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.VMD2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.VMD2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.VMD2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.VMD2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.VMD2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.VMD2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.VMD2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.VMD2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.VMD2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.VMD2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.VMD2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.VMD2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.VMD2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.VMD2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.VMD2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.VMD2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.VMD2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.VMD2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.VMD2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.VMD2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.VMD2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.VMD2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.VMD2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.VMD2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.VMD2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.VMD2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.VMD2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.VMD2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.VMD2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.VMD2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.VMD2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.VMD2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.VMD2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.VMD2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.VMD2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.VMD2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.VMD2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.VMD2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.VMD2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.VMD2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.VMD2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.VMD2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.VMD2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.VMD2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.VMD2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.VMD2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.VMD2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.VMD2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.VMD2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.VMD2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.VMD2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.VMD2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.VMD2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.VMD2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.VMD2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.VMD2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.VMD2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.VMD2jesPileUpPtHFdn();
    else
        return vvv.VMD2();
};

auto VMD3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.VMD3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.VMD3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.VMD3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.VMD3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.VMD3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.VMD3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.VMD3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.VMD3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.VMD3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.VMD3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.VMD3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.VMD3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.VMD3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.VMD3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.VMD3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.VMD3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.VMD3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.VMD3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.VMD3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.VMD3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.VMD3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.VMD3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.VMD3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.VMD3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.VMD3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.VMD3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.VMD3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.VMD3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.VMD3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.VMD3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.VMD3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.VMD3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.VMD3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.VMD3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.VMD3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.VMD3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.VMD3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.VMD3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.VMD3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.VMD3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.VMD3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.VMD3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.VMD3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.VMD3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.VMD3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.VMD3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.VMD3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.VMD3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.VMD3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.VMD3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.VMD3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.VMD3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.VMD3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.VMD3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.VMD3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.VMD3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.VMD3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.VMD3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.VMD3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.VMD3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.VMD3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.VMD3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.VMD3jesPileUpPtHFdn();
    else
        return vvv.VMD3();
};

auto VMD4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.VMD4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.VMD4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.VMD4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.VMD4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.VMD4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.VMD4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.VMD4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.VMD4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.VMD4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.VMD4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.VMD4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.VMD4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.VMD4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.VMD4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.VMD4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.VMD4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.VMD4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.VMD4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.VMD4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.VMD4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.VMD4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.VMD4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.VMD4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.VMD4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.VMD4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.VMD4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.VMD4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.VMD4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.VMD4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.VMD4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.VMD4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.VMD4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.VMD4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.VMD4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.VMD4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.VMD4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.VMD4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.VMD4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.VMD4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.VMD4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.VMD4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.VMD4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.VMD4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.VMD4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.VMD4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.VMD4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.VMD4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.VMD4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.VMD4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.VMD4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.VMD4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.VMD4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.VMD4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.VMD4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.VMD4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.VMD4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.VMD4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.VMD4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.VMD4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.VMD4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.VMD4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.VMD4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.VMD4jesPileUpPtHFdn();
    else
        return vvv.VMD4();
};

auto WMD0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.WMD0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.WMD0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.WMD0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.WMD0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.WMD0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.WMD0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.WMD0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.WMD0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.WMD0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.WMD0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.WMD0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.WMD0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.WMD0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.WMD0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.WMD0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.WMD0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.WMD0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.WMD0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.WMD0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.WMD0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.WMD0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.WMD0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.WMD0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.WMD0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.WMD0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.WMD0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.WMD0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.WMD0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.WMD0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.WMD0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.WMD0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.WMD0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.WMD0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.WMD0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.WMD0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.WMD0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.WMD0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.WMD0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.WMD0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.WMD0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.WMD0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.WMD0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.WMD0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.WMD0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.WMD0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.WMD0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.WMD0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.WMD0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.WMD0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.WMD0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.WMD0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.WMD0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.WMD0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.WMD0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.WMD0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.WMD0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.WMD0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.WMD0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.WMD0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.WMD0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.WMD0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.WMD0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.WMD0jesPileUpPtHFdn();
    else
        return vvv.WMD0();
};

auto WMD1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.WMD1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.WMD1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.WMD1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.WMD1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.WMD1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.WMD1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.WMD1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.WMD1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.WMD1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.WMD1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.WMD1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.WMD1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.WMD1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.WMD1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.WMD1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.WMD1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.WMD1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.WMD1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.WMD1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.WMD1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.WMD1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.WMD1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.WMD1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.WMD1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.WMD1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.WMD1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.WMD1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.WMD1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.WMD1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.WMD1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.WMD1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.WMD1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.WMD1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.WMD1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.WMD1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.WMD1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.WMD1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.WMD1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.WMD1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.WMD1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.WMD1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.WMD1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.WMD1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.WMD1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.WMD1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.WMD1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.WMD1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.WMD1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.WMD1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.WMD1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.WMD1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.WMD1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.WMD1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.WMD1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.WMD1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.WMD1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.WMD1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.WMD1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.WMD1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.WMD1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.WMD1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.WMD1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.WMD1jesPileUpPtHFdn();
    else
        return vvv.WMD1();
};

auto WMD2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.WMD2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.WMD2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.WMD2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.WMD2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.WMD2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.WMD2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.WMD2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.WMD2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.WMD2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.WMD2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.WMD2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.WMD2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.WMD2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.WMD2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.WMD2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.WMD2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.WMD2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.WMD2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.WMD2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.WMD2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.WMD2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.WMD2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.WMD2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.WMD2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.WMD2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.WMD2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.WMD2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.WMD2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.WMD2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.WMD2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.WMD2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.WMD2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.WMD2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.WMD2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.WMD2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.WMD2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.WMD2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.WMD2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.WMD2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.WMD2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.WMD2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.WMD2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.WMD2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.WMD2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.WMD2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.WMD2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.WMD2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.WMD2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.WMD2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.WMD2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.WMD2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.WMD2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.WMD2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.WMD2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.WMD2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.WMD2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.WMD2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.WMD2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.WMD2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.WMD2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.WMD2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.WMD2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.WMD2jesPileUpPtHFdn();
    else
        return vvv.WMD2();
};

auto WMD3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.WMD3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.WMD3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.WMD3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.WMD3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.WMD3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.WMD3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.WMD3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.WMD3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.WMD3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.WMD3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.WMD3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.WMD3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.WMD3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.WMD3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.WMD3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.WMD3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.WMD3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.WMD3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.WMD3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.WMD3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.WMD3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.WMD3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.WMD3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.WMD3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.WMD3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.WMD3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.WMD3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.WMD3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.WMD3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.WMD3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.WMD3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.WMD3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.WMD3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.WMD3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.WMD3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.WMD3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.WMD3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.WMD3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.WMD3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.WMD3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.WMD3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.WMD3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.WMD3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.WMD3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.WMD3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.WMD3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.WMD3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.WMD3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.WMD3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.WMD3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.WMD3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.WMD3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.WMD3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.WMD3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.WMD3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.WMD3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.WMD3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.WMD3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.WMD3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.WMD3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.WMD3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.WMD3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.WMD3jesPileUpPtHFdn();
    else
        return vvv.WMD3();
};

auto WMD4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.WMD4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.WMD4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.WMD4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.WMD4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.WMD4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.WMD4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.WMD4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.WMD4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.WMD4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.WMD4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.WMD4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.WMD4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.WMD4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.WMD4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.WMD4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.WMD4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.WMD4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.WMD4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.WMD4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.WMD4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.WMD4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.WMD4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.WMD4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.WMD4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.WMD4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.WMD4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.WMD4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.WMD4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.WMD4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.WMD4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.WMD4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.WMD4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.WMD4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.WMD4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.WMD4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.WMD4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.WMD4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.WMD4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.WMD4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.WMD4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.WMD4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.WMD4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.WMD4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.WMD4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.WMD4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.WMD4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.WMD4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.WMD4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.WMD4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.WMD4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.WMD4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.WMD4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.WMD4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.WMD4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.WMD4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.WMD4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.WMD4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.WMD4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.WMD4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.WMD4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.WMD4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.WMD4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.WMD4jesPileUpPtHFdn();
    else
        return vvv.WMD4();
};

auto NQGen0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NQGen0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NQGen0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NQGen0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NQGen0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NQGen0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NQGen0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NQGen0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NQGen0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NQGen0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NQGen0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NQGen0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NQGen0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NQGen0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NQGen0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NQGen0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NQGen0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NQGen0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NQGen0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NQGen0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NQGen0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NQGen0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NQGen0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NQGen0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NQGen0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NQGen0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NQGen0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NQGen0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NQGen0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NQGen0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NQGen0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NQGen0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NQGen0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NQGen0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NQGen0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NQGen0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NQGen0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NQGen0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NQGen0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NQGen0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NQGen0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NQGen0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NQGen0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NQGen0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NQGen0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NQGen0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NQGen0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NQGen0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NQGen0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NQGen0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NQGen0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NQGen0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NQGen0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NQGen0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NQGen0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NQGen0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NQGen0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NQGen0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NQGen0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NQGen0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NQGen0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NQGen0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NQGen0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NQGen0jesPileUpPtHFdn();
    else
        return vvv.NQGen0();
};

auto NQGen1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NQGen1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NQGen1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NQGen1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NQGen1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NQGen1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NQGen1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NQGen1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NQGen1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NQGen1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NQGen1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NQGen1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NQGen1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NQGen1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NQGen1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NQGen1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NQGen1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NQGen1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NQGen1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NQGen1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NQGen1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NQGen1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NQGen1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NQGen1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NQGen1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NQGen1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NQGen1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NQGen1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NQGen1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NQGen1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NQGen1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NQGen1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NQGen1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NQGen1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NQGen1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NQGen1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NQGen1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NQGen1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NQGen1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NQGen1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NQGen1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NQGen1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NQGen1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NQGen1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NQGen1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NQGen1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NQGen1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NQGen1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NQGen1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NQGen1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NQGen1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NQGen1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NQGen1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NQGen1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NQGen1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NQGen1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NQGen1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NQGen1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NQGen1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NQGen1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NQGen1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NQGen1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NQGen1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NQGen1jesPileUpPtHFdn();
    else
        return vvv.NQGen1();
};

auto NQGen2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NQGen2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NQGen2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NQGen2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NQGen2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NQGen2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NQGen2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NQGen2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NQGen2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NQGen2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NQGen2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NQGen2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NQGen2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NQGen2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NQGen2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NQGen2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NQGen2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NQGen2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NQGen2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NQGen2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NQGen2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NQGen2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NQGen2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NQGen2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NQGen2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NQGen2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NQGen2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NQGen2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NQGen2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NQGen2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NQGen2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NQGen2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NQGen2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NQGen2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NQGen2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NQGen2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NQGen2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NQGen2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NQGen2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NQGen2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NQGen2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NQGen2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NQGen2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NQGen2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NQGen2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NQGen2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NQGen2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NQGen2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NQGen2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NQGen2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NQGen2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NQGen2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NQGen2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NQGen2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NQGen2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NQGen2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NQGen2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NQGen2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NQGen2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NQGen2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NQGen2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NQGen2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NQGen2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NQGen2jesPileUpPtHFdn();
    else
        return vvv.NQGen2();
};

auto NQGen3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NQGen3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NQGen3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NQGen3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NQGen3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NQGen3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NQGen3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NQGen3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NQGen3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NQGen3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NQGen3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NQGen3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NQGen3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NQGen3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NQGen3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NQGen3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NQGen3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NQGen3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NQGen3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NQGen3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NQGen3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NQGen3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NQGen3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NQGen3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NQGen3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NQGen3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NQGen3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NQGen3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NQGen3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NQGen3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NQGen3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NQGen3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NQGen3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NQGen3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NQGen3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NQGen3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NQGen3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NQGen3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NQGen3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NQGen3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NQGen3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NQGen3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NQGen3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NQGen3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NQGen3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NQGen3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NQGen3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NQGen3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NQGen3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NQGen3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NQGen3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NQGen3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NQGen3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NQGen3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NQGen3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NQGen3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NQGen3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NQGen3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NQGen3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NQGen3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NQGen3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NQGen3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NQGen3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NQGen3jesPileUpPtHFdn();
    else
        return vvv.NQGen3();
};

auto NQGen4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NQGen4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NQGen4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NQGen4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NQGen4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NQGen4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NQGen4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NQGen4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NQGen4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NQGen4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NQGen4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NQGen4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NQGen4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NQGen4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NQGen4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NQGen4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NQGen4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NQGen4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NQGen4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NQGen4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NQGen4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NQGen4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NQGen4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NQGen4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NQGen4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NQGen4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NQGen4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NQGen4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NQGen4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NQGen4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NQGen4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NQGen4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NQGen4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NQGen4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NQGen4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NQGen4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NQGen4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NQGen4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NQGen4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NQGen4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NQGen4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NQGen4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NQGen4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NQGen4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NQGen4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NQGen4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NQGen4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NQGen4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NQGen4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NQGen4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NQGen4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NQGen4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NQGen4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NQGen4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NQGen4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NQGen4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NQGen4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NQGen4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NQGen4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NQGen4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NQGen4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NQGen4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NQGen4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NQGen4jesPileUpPtHFdn();
    else
        return vvv.NQGen4();
};

auto NBGen0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NBGen0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NBGen0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NBGen0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NBGen0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NBGen0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NBGen0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NBGen0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NBGen0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NBGen0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NBGen0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NBGen0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NBGen0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NBGen0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NBGen0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NBGen0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NBGen0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NBGen0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NBGen0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NBGen0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NBGen0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NBGen0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NBGen0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NBGen0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NBGen0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NBGen0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NBGen0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NBGen0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NBGen0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NBGen0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NBGen0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NBGen0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NBGen0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NBGen0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NBGen0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NBGen0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NBGen0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NBGen0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NBGen0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NBGen0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NBGen0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NBGen0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NBGen0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NBGen0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NBGen0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NBGen0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NBGen0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NBGen0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NBGen0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NBGen0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NBGen0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NBGen0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NBGen0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NBGen0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NBGen0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NBGen0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NBGen0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NBGen0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NBGen0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NBGen0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NBGen0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NBGen0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NBGen0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NBGen0jesPileUpPtHFdn();
    else
        return vvv.NBGen0();
};

auto NBGen1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NBGen1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NBGen1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NBGen1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NBGen1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NBGen1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NBGen1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NBGen1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NBGen1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NBGen1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NBGen1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NBGen1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NBGen1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NBGen1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NBGen1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NBGen1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NBGen1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NBGen1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NBGen1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NBGen1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NBGen1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NBGen1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NBGen1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NBGen1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NBGen1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NBGen1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NBGen1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NBGen1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NBGen1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NBGen1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NBGen1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NBGen1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NBGen1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NBGen1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NBGen1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NBGen1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NBGen1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NBGen1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NBGen1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NBGen1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NBGen1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NBGen1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NBGen1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NBGen1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NBGen1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NBGen1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NBGen1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NBGen1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NBGen1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NBGen1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NBGen1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NBGen1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NBGen1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NBGen1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NBGen1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NBGen1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NBGen1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NBGen1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NBGen1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NBGen1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NBGen1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NBGen1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NBGen1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NBGen1jesPileUpPtHFdn();
    else
        return vvv.NBGen1();
};

auto NBGen2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NBGen2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NBGen2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NBGen2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NBGen2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NBGen2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NBGen2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NBGen2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NBGen2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NBGen2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NBGen2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NBGen2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NBGen2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NBGen2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NBGen2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NBGen2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NBGen2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NBGen2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NBGen2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NBGen2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NBGen2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NBGen2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NBGen2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NBGen2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NBGen2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NBGen2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NBGen2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NBGen2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NBGen2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NBGen2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NBGen2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NBGen2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NBGen2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NBGen2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NBGen2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NBGen2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NBGen2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NBGen2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NBGen2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NBGen2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NBGen2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NBGen2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NBGen2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NBGen2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NBGen2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NBGen2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NBGen2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NBGen2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NBGen2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NBGen2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NBGen2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NBGen2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NBGen2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NBGen2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NBGen2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NBGen2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NBGen2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NBGen2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NBGen2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NBGen2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NBGen2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NBGen2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NBGen2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NBGen2jesPileUpPtHFdn();
    else
        return vvv.NBGen2();
};

auto NBGen3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NBGen3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NBGen3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NBGen3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NBGen3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NBGen3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NBGen3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NBGen3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NBGen3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NBGen3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NBGen3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NBGen3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NBGen3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NBGen3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NBGen3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NBGen3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NBGen3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NBGen3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NBGen3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NBGen3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NBGen3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NBGen3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NBGen3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NBGen3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NBGen3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NBGen3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NBGen3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NBGen3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NBGen3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NBGen3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NBGen3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NBGen3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NBGen3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NBGen3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NBGen3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NBGen3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NBGen3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NBGen3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NBGen3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NBGen3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NBGen3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NBGen3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NBGen3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NBGen3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NBGen3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NBGen3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NBGen3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NBGen3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NBGen3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NBGen3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NBGen3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NBGen3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NBGen3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NBGen3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NBGen3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NBGen3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NBGen3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NBGen3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NBGen3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NBGen3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NBGen3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NBGen3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NBGen3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NBGen3jesPileUpPtHFdn();
    else
        return vvv.NBGen3();
};

auto NBGen4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NBGen4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NBGen4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NBGen4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NBGen4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NBGen4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NBGen4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NBGen4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NBGen4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NBGen4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NBGen4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NBGen4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NBGen4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NBGen4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NBGen4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NBGen4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NBGen4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NBGen4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NBGen4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NBGen4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NBGen4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NBGen4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NBGen4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NBGen4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NBGen4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NBGen4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NBGen4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NBGen4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NBGen4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NBGen4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NBGen4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NBGen4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NBGen4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NBGen4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NBGen4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NBGen4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NBGen4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NBGen4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NBGen4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NBGen4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NBGen4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NBGen4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NBGen4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NBGen4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NBGen4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NBGen4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NBGen4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NBGen4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NBGen4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NBGen4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NBGen4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NBGen4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NBGen4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NBGen4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NBGen4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NBGen4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NBGen4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NBGen4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NBGen4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NBGen4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NBGen4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NBGen4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NBGen4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NBGen4jesPileUpPtHFdn();
    else
        return vvv.NBGen4();
};

auto NLGen0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NLGen0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NLGen0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NLGen0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NLGen0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NLGen0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NLGen0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NLGen0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NLGen0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NLGen0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NLGen0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NLGen0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NLGen0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NLGen0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NLGen0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NLGen0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NLGen0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NLGen0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NLGen0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NLGen0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NLGen0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NLGen0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NLGen0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NLGen0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NLGen0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NLGen0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NLGen0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NLGen0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NLGen0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NLGen0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NLGen0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NLGen0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NLGen0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NLGen0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NLGen0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NLGen0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NLGen0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NLGen0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NLGen0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NLGen0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NLGen0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NLGen0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NLGen0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NLGen0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NLGen0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NLGen0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NLGen0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NLGen0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NLGen0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NLGen0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NLGen0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NLGen0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NLGen0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NLGen0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NLGen0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NLGen0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NLGen0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NLGen0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NLGen0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NLGen0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NLGen0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NLGen0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NLGen0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NLGen0jesPileUpPtHFdn();
    else
        return vvv.NLGen0();
};

auto NLGen1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NLGen1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NLGen1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NLGen1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NLGen1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NLGen1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NLGen1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NLGen1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NLGen1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NLGen1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NLGen1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NLGen1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NLGen1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NLGen1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NLGen1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NLGen1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NLGen1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NLGen1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NLGen1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NLGen1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NLGen1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NLGen1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NLGen1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NLGen1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NLGen1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NLGen1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NLGen1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NLGen1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NLGen1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NLGen1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NLGen1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NLGen1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NLGen1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NLGen1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NLGen1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NLGen1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NLGen1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NLGen1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NLGen1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NLGen1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NLGen1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NLGen1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NLGen1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NLGen1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NLGen1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NLGen1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NLGen1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NLGen1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NLGen1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NLGen1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NLGen1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NLGen1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NLGen1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NLGen1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NLGen1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NLGen1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NLGen1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NLGen1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NLGen1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NLGen1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NLGen1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NLGen1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NLGen1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NLGen1jesPileUpPtHFdn();
    else
        return vvv.NLGen1();
};

auto NLGen2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NLGen2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NLGen2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NLGen2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NLGen2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NLGen2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NLGen2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NLGen2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NLGen2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NLGen2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NLGen2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NLGen2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NLGen2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NLGen2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NLGen2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NLGen2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NLGen2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NLGen2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NLGen2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NLGen2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NLGen2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NLGen2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NLGen2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NLGen2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NLGen2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NLGen2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NLGen2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NLGen2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NLGen2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NLGen2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NLGen2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NLGen2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NLGen2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NLGen2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NLGen2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NLGen2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NLGen2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NLGen2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NLGen2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NLGen2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NLGen2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NLGen2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NLGen2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NLGen2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NLGen2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NLGen2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NLGen2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NLGen2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NLGen2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NLGen2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NLGen2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NLGen2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NLGen2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NLGen2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NLGen2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NLGen2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NLGen2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NLGen2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NLGen2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NLGen2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NLGen2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NLGen2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NLGen2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NLGen2jesPileUpPtHFdn();
    else
        return vvv.NLGen2();
};

auto NLGen3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NLGen3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NLGen3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NLGen3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NLGen3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NLGen3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NLGen3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NLGen3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NLGen3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NLGen3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NLGen3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NLGen3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NLGen3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NLGen3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NLGen3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NLGen3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NLGen3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NLGen3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NLGen3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NLGen3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NLGen3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NLGen3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NLGen3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NLGen3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NLGen3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NLGen3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NLGen3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NLGen3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NLGen3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NLGen3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NLGen3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NLGen3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NLGen3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NLGen3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NLGen3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NLGen3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NLGen3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NLGen3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NLGen3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NLGen3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NLGen3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NLGen3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NLGen3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NLGen3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NLGen3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NLGen3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NLGen3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NLGen3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NLGen3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NLGen3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NLGen3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NLGen3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NLGen3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NLGen3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NLGen3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NLGen3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NLGen3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NLGen3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NLGen3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NLGen3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NLGen3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NLGen3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NLGen3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NLGen3jesPileUpPtHFdn();
    else
        return vvv.NLGen3();
};

auto NLGen4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NLGen4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NLGen4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NLGen4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NLGen4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NLGen4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NLGen4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NLGen4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NLGen4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NLGen4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NLGen4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NLGen4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NLGen4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NLGen4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NLGen4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NLGen4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NLGen4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NLGen4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NLGen4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NLGen4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NLGen4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NLGen4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NLGen4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NLGen4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NLGen4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NLGen4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NLGen4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NLGen4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NLGen4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NLGen4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NLGen4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NLGen4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NLGen4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NLGen4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NLGen4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NLGen4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NLGen4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NLGen4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NLGen4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NLGen4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NLGen4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NLGen4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NLGen4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NLGen4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NLGen4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NLGen4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NLGen4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NLGen4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NLGen4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NLGen4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NLGen4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NLGen4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NLGen4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NLGen4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NLGen4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NLGen4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NLGen4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NLGen4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NLGen4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NLGen4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NLGen4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NLGen4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NLGen4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NLGen4jesPileUpPtHFdn();
    else
        return vvv.NLGen4();
};

auto NVQGen0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NVQGen0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NVQGen0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NVQGen0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NVQGen0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NVQGen0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NVQGen0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NVQGen0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NVQGen0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NVQGen0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NVQGen0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NVQGen0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NVQGen0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NVQGen0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NVQGen0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NVQGen0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NVQGen0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NVQGen0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NVQGen0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NVQGen0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NVQGen0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NVQGen0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NVQGen0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NVQGen0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NVQGen0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NVQGen0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NVQGen0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NVQGen0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NVQGen0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NVQGen0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NVQGen0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NVQGen0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NVQGen0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NVQGen0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NVQGen0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NVQGen0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NVQGen0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NVQGen0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NVQGen0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NVQGen0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NVQGen0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NVQGen0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NVQGen0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NVQGen0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NVQGen0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NVQGen0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NVQGen0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NVQGen0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NVQGen0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NVQGen0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NVQGen0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NVQGen0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NVQGen0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NVQGen0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NVQGen0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NVQGen0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NVQGen0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NVQGen0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NVQGen0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NVQGen0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NVQGen0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NVQGen0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NVQGen0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NVQGen0jesPileUpPtHFdn();
    else
        return vvv.NVQGen0();
};

auto NVQGen1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NVQGen1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NVQGen1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NVQGen1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NVQGen1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NVQGen1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NVQGen1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NVQGen1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NVQGen1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NVQGen1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NVQGen1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NVQGen1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NVQGen1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NVQGen1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NVQGen1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NVQGen1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NVQGen1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NVQGen1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NVQGen1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NVQGen1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NVQGen1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NVQGen1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NVQGen1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NVQGen1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NVQGen1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NVQGen1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NVQGen1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NVQGen1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NVQGen1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NVQGen1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NVQGen1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NVQGen1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NVQGen1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NVQGen1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NVQGen1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NVQGen1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NVQGen1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NVQGen1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NVQGen1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NVQGen1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NVQGen1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NVQGen1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NVQGen1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NVQGen1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NVQGen1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NVQGen1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NVQGen1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NVQGen1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NVQGen1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NVQGen1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NVQGen1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NVQGen1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NVQGen1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NVQGen1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NVQGen1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NVQGen1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NVQGen1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NVQGen1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NVQGen1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NVQGen1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NVQGen1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NVQGen1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NVQGen1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NVQGen1jesPileUpPtHFdn();
    else
        return vvv.NVQGen1();
};

auto NVQGen2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NVQGen2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NVQGen2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NVQGen2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NVQGen2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NVQGen2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NVQGen2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NVQGen2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NVQGen2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NVQGen2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NVQGen2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NVQGen2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NVQGen2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NVQGen2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NVQGen2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NVQGen2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NVQGen2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NVQGen2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NVQGen2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NVQGen2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NVQGen2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NVQGen2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NVQGen2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NVQGen2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NVQGen2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NVQGen2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NVQGen2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NVQGen2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NVQGen2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NVQGen2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NVQGen2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NVQGen2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NVQGen2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NVQGen2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NVQGen2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NVQGen2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NVQGen2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NVQGen2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NVQGen2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NVQGen2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NVQGen2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NVQGen2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NVQGen2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NVQGen2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NVQGen2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NVQGen2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NVQGen2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NVQGen2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NVQGen2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NVQGen2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NVQGen2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NVQGen2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NVQGen2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NVQGen2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NVQGen2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NVQGen2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NVQGen2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NVQGen2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NVQGen2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NVQGen2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NVQGen2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NVQGen2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NVQGen2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NVQGen2jesPileUpPtHFdn();
    else
        return vvv.NVQGen2();
};

auto NVQGen3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NVQGen3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NVQGen3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NVQGen3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NVQGen3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NVQGen3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NVQGen3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NVQGen3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NVQGen3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NVQGen3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NVQGen3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NVQGen3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NVQGen3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NVQGen3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NVQGen3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NVQGen3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NVQGen3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NVQGen3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NVQGen3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NVQGen3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NVQGen3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NVQGen3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NVQGen3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NVQGen3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NVQGen3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NVQGen3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NVQGen3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NVQGen3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NVQGen3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NVQGen3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NVQGen3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NVQGen3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NVQGen3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NVQGen3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NVQGen3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NVQGen3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NVQGen3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NVQGen3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NVQGen3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NVQGen3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NVQGen3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NVQGen3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NVQGen3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NVQGen3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NVQGen3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NVQGen3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NVQGen3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NVQGen3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NVQGen3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NVQGen3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NVQGen3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NVQGen3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NVQGen3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NVQGen3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NVQGen3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NVQGen3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NVQGen3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NVQGen3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NVQGen3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NVQGen3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NVQGen3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NVQGen3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NVQGen3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NVQGen3jesPileUpPtHFdn();
    else
        return vvv.NVQGen3();
};

auto NVQGen4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NVQGen4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NVQGen4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NVQGen4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NVQGen4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NVQGen4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NVQGen4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NVQGen4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NVQGen4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NVQGen4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NVQGen4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NVQGen4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NVQGen4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NVQGen4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NVQGen4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NVQGen4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NVQGen4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NVQGen4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NVQGen4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NVQGen4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NVQGen4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NVQGen4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NVQGen4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NVQGen4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NVQGen4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NVQGen4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NVQGen4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NVQGen4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NVQGen4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NVQGen4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NVQGen4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NVQGen4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NVQGen4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NVQGen4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NVQGen4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NVQGen4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NVQGen4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NVQGen4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NVQGen4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NVQGen4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NVQGen4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NVQGen4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NVQGen4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NVQGen4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NVQGen4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NVQGen4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NVQGen4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NVQGen4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NVQGen4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NVQGen4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NVQGen4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NVQGen4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NVQGen4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NVQGen4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NVQGen4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NVQGen4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NVQGen4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NVQGen4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NVQGen4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NVQGen4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NVQGen4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NVQGen4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NVQGen4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NVQGen4jesPileUpPtHFdn();
    else
        return vvv.NVQGen4();
};

auto NiFJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NiFJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NiFJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NiFJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NiFJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NiFJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NiFJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NiFJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NiFJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NiFJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NiFJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NiFJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NiFJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NiFJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NiFJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NiFJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NiFJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NiFJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NiFJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NiFJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NiFJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NiFJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NiFJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NiFJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NiFJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NiFJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NiFJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NiFJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NiFJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NiFJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NiFJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NiFJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NiFJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NiFJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NiFJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NiFJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NiFJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NiFJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NiFJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NiFJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NiFJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NiFJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NiFJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NiFJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NiFJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NiFJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NiFJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NiFJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NiFJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NiFJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NiFJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NiFJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NiFJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NiFJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NiFJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NiFJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NiFJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NiFJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NiFJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NiFJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NiFJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NiFJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NiFJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NiFJjesPileUpPtHFdn();
    else
        return vvv.NiFJ();
};

auto iFJ0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iFJ0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iFJ0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iFJ0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iFJ0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iFJ0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iFJ0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iFJ0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iFJ0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iFJ0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iFJ0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iFJ0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iFJ0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iFJ0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iFJ0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iFJ0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iFJ0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iFJ0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iFJ0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iFJ0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iFJ0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iFJ0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iFJ0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iFJ0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iFJ0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iFJ0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iFJ0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iFJ0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iFJ0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iFJ0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iFJ0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iFJ0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iFJ0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iFJ0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iFJ0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iFJ0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iFJ0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iFJ0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iFJ0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iFJ0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iFJ0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iFJ0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iFJ0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iFJ0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iFJ0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iFJ0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iFJ0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iFJ0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iFJ0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iFJ0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iFJ0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iFJ0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iFJ0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iFJ0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iFJ0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iFJ0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iFJ0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iFJ0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iFJ0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iFJ0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iFJ0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iFJ0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iFJ0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iFJ0jesPileUpPtHFdn();
    else
        return vvv.iFJ0();
};

auto iFJ1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iFJ1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iFJ1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iFJ1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iFJ1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iFJ1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iFJ1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iFJ1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iFJ1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iFJ1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iFJ1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iFJ1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iFJ1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iFJ1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iFJ1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iFJ1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iFJ1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iFJ1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iFJ1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iFJ1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iFJ1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iFJ1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iFJ1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iFJ1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iFJ1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iFJ1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iFJ1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iFJ1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iFJ1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iFJ1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iFJ1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iFJ1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iFJ1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iFJ1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iFJ1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iFJ1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iFJ1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iFJ1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iFJ1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iFJ1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iFJ1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iFJ1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iFJ1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iFJ1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iFJ1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iFJ1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iFJ1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iFJ1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iFJ1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iFJ1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iFJ1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iFJ1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iFJ1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iFJ1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iFJ1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iFJ1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iFJ1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iFJ1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iFJ1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iFJ1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iFJ1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iFJ1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iFJ1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iFJ1jesPileUpPtHFdn();
    else
        return vvv.iFJ1();
};

auto iFJ2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iFJ2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iFJ2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iFJ2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iFJ2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iFJ2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iFJ2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iFJ2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iFJ2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iFJ2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iFJ2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iFJ2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iFJ2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iFJ2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iFJ2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iFJ2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iFJ2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iFJ2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iFJ2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iFJ2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iFJ2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iFJ2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iFJ2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iFJ2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iFJ2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iFJ2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iFJ2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iFJ2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iFJ2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iFJ2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iFJ2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iFJ2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iFJ2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iFJ2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iFJ2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iFJ2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iFJ2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iFJ2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iFJ2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iFJ2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iFJ2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iFJ2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iFJ2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iFJ2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iFJ2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iFJ2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iFJ2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iFJ2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iFJ2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iFJ2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iFJ2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iFJ2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iFJ2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iFJ2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iFJ2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iFJ2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iFJ2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iFJ2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iFJ2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iFJ2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iFJ2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iFJ2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iFJ2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iFJ2jesPileUpPtHFdn();
    else
        return vvv.iFJ2();
};

auto iFJ3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iFJ3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iFJ3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iFJ3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iFJ3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iFJ3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iFJ3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iFJ3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iFJ3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iFJ3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iFJ3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iFJ3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iFJ3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iFJ3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iFJ3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iFJ3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iFJ3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iFJ3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iFJ3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iFJ3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iFJ3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iFJ3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iFJ3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iFJ3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iFJ3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iFJ3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iFJ3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iFJ3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iFJ3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iFJ3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iFJ3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iFJ3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iFJ3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iFJ3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iFJ3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iFJ3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iFJ3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iFJ3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iFJ3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iFJ3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iFJ3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iFJ3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iFJ3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iFJ3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iFJ3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iFJ3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iFJ3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iFJ3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iFJ3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iFJ3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iFJ3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iFJ3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iFJ3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iFJ3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iFJ3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iFJ3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iFJ3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iFJ3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iFJ3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iFJ3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iFJ3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iFJ3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iFJ3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iFJ3jesPileUpPtHFdn();
    else
        return vvv.iFJ3();
};

auto iFJ4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iFJ4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iFJ4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iFJ4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iFJ4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iFJ4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iFJ4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iFJ4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iFJ4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iFJ4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iFJ4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iFJ4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iFJ4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iFJ4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iFJ4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iFJ4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iFJ4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iFJ4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iFJ4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iFJ4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iFJ4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iFJ4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iFJ4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iFJ4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iFJ4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iFJ4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iFJ4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iFJ4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iFJ4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iFJ4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iFJ4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iFJ4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iFJ4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iFJ4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iFJ4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iFJ4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iFJ4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iFJ4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iFJ4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iFJ4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iFJ4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iFJ4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iFJ4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iFJ4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iFJ4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iFJ4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iFJ4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iFJ4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iFJ4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iFJ4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iFJ4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iFJ4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iFJ4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iFJ4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iFJ4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iFJ4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iFJ4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iFJ4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iFJ4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iFJ4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iFJ4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iFJ4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iFJ4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iFJ4jesPileUpPtHFdn();
    else
        return vvv.iFJ4();
};

auto iVMD0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iVMD0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iVMD0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iVMD0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iVMD0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iVMD0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iVMD0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iVMD0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iVMD0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iVMD0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iVMD0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iVMD0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iVMD0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iVMD0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iVMD0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iVMD0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iVMD0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iVMD0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iVMD0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iVMD0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iVMD0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iVMD0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iVMD0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iVMD0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iVMD0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iVMD0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iVMD0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iVMD0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iVMD0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iVMD0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iVMD0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iVMD0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iVMD0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iVMD0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iVMD0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iVMD0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iVMD0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iVMD0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iVMD0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iVMD0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iVMD0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iVMD0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iVMD0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iVMD0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iVMD0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iVMD0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iVMD0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iVMD0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iVMD0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iVMD0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iVMD0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iVMD0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iVMD0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iVMD0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iVMD0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iVMD0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iVMD0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iVMD0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iVMD0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iVMD0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iVMD0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iVMD0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iVMD0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iVMD0jesPileUpPtHFdn();
    else
        return vvv.iVMD0();
};

auto iVMD1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iVMD1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iVMD1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iVMD1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iVMD1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iVMD1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iVMD1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iVMD1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iVMD1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iVMD1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iVMD1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iVMD1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iVMD1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iVMD1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iVMD1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iVMD1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iVMD1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iVMD1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iVMD1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iVMD1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iVMD1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iVMD1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iVMD1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iVMD1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iVMD1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iVMD1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iVMD1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iVMD1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iVMD1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iVMD1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iVMD1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iVMD1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iVMD1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iVMD1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iVMD1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iVMD1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iVMD1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iVMD1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iVMD1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iVMD1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iVMD1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iVMD1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iVMD1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iVMD1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iVMD1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iVMD1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iVMD1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iVMD1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iVMD1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iVMD1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iVMD1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iVMD1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iVMD1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iVMD1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iVMD1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iVMD1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iVMD1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iVMD1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iVMD1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iVMD1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iVMD1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iVMD1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iVMD1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iVMD1jesPileUpPtHFdn();
    else
        return vvv.iVMD1();
};

auto iVMD2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iVMD2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iVMD2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iVMD2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iVMD2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iVMD2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iVMD2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iVMD2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iVMD2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iVMD2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iVMD2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iVMD2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iVMD2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iVMD2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iVMD2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iVMD2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iVMD2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iVMD2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iVMD2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iVMD2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iVMD2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iVMD2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iVMD2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iVMD2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iVMD2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iVMD2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iVMD2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iVMD2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iVMD2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iVMD2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iVMD2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iVMD2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iVMD2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iVMD2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iVMD2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iVMD2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iVMD2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iVMD2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iVMD2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iVMD2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iVMD2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iVMD2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iVMD2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iVMD2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iVMD2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iVMD2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iVMD2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iVMD2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iVMD2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iVMD2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iVMD2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iVMD2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iVMD2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iVMD2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iVMD2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iVMD2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iVMD2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iVMD2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iVMD2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iVMD2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iVMD2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iVMD2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iVMD2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iVMD2jesPileUpPtHFdn();
    else
        return vvv.iVMD2();
};

auto iVMD3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iVMD3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iVMD3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iVMD3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iVMD3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iVMD3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iVMD3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iVMD3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iVMD3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iVMD3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iVMD3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iVMD3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iVMD3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iVMD3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iVMD3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iVMD3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iVMD3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iVMD3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iVMD3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iVMD3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iVMD3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iVMD3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iVMD3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iVMD3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iVMD3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iVMD3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iVMD3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iVMD3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iVMD3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iVMD3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iVMD3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iVMD3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iVMD3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iVMD3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iVMD3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iVMD3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iVMD3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iVMD3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iVMD3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iVMD3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iVMD3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iVMD3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iVMD3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iVMD3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iVMD3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iVMD3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iVMD3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iVMD3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iVMD3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iVMD3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iVMD3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iVMD3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iVMD3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iVMD3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iVMD3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iVMD3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iVMD3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iVMD3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iVMD3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iVMD3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iVMD3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iVMD3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iVMD3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iVMD3jesPileUpPtHFdn();
    else
        return vvv.iVMD3();
};

auto iVMD4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iVMD4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iVMD4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iVMD4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iVMD4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iVMD4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iVMD4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iVMD4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iVMD4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iVMD4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iVMD4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iVMD4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iVMD4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iVMD4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iVMD4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iVMD4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iVMD4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iVMD4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iVMD4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iVMD4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iVMD4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iVMD4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iVMD4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iVMD4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iVMD4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iVMD4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iVMD4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iVMD4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iVMD4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iVMD4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iVMD4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iVMD4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iVMD4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iVMD4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iVMD4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iVMD4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iVMD4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iVMD4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iVMD4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iVMD4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iVMD4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iVMD4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iVMD4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iVMD4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iVMD4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iVMD4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iVMD4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iVMD4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iVMD4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iVMD4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iVMD4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iVMD4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iVMD4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iVMD4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iVMD4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iVMD4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iVMD4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iVMD4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iVMD4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iVMD4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iVMD4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iVMD4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iVMD4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iVMD4jesPileUpPtHFdn();
    else
        return vvv.iVMD4();
};

auto iWMD0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iWMD0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iWMD0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iWMD0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iWMD0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iWMD0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iWMD0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iWMD0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iWMD0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iWMD0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iWMD0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iWMD0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iWMD0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iWMD0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iWMD0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iWMD0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iWMD0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iWMD0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iWMD0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iWMD0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iWMD0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iWMD0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iWMD0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iWMD0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iWMD0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iWMD0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iWMD0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iWMD0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iWMD0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iWMD0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iWMD0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iWMD0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iWMD0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iWMD0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iWMD0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iWMD0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iWMD0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iWMD0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iWMD0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iWMD0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iWMD0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iWMD0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iWMD0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iWMD0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iWMD0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iWMD0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iWMD0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iWMD0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iWMD0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iWMD0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iWMD0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iWMD0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iWMD0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iWMD0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iWMD0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iWMD0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iWMD0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iWMD0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iWMD0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iWMD0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iWMD0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iWMD0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iWMD0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iWMD0jesPileUpPtHFdn();
    else
        return vvv.iWMD0();
};

auto iWMD1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iWMD1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iWMD1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iWMD1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iWMD1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iWMD1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iWMD1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iWMD1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iWMD1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iWMD1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iWMD1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iWMD1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iWMD1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iWMD1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iWMD1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iWMD1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iWMD1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iWMD1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iWMD1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iWMD1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iWMD1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iWMD1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iWMD1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iWMD1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iWMD1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iWMD1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iWMD1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iWMD1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iWMD1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iWMD1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iWMD1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iWMD1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iWMD1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iWMD1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iWMD1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iWMD1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iWMD1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iWMD1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iWMD1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iWMD1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iWMD1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iWMD1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iWMD1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iWMD1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iWMD1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iWMD1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iWMD1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iWMD1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iWMD1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iWMD1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iWMD1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iWMD1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iWMD1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iWMD1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iWMD1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iWMD1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iWMD1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iWMD1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iWMD1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iWMD1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iWMD1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iWMD1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iWMD1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iWMD1jesPileUpPtHFdn();
    else
        return vvv.iWMD1();
};

auto iWMD2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iWMD2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iWMD2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iWMD2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iWMD2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iWMD2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iWMD2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iWMD2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iWMD2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iWMD2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iWMD2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iWMD2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iWMD2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iWMD2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iWMD2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iWMD2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iWMD2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iWMD2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iWMD2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iWMD2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iWMD2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iWMD2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iWMD2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iWMD2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iWMD2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iWMD2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iWMD2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iWMD2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iWMD2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iWMD2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iWMD2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iWMD2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iWMD2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iWMD2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iWMD2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iWMD2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iWMD2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iWMD2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iWMD2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iWMD2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iWMD2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iWMD2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iWMD2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iWMD2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iWMD2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iWMD2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iWMD2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iWMD2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iWMD2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iWMD2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iWMD2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iWMD2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iWMD2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iWMD2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iWMD2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iWMD2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iWMD2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iWMD2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iWMD2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iWMD2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iWMD2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iWMD2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iWMD2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iWMD2jesPileUpPtHFdn();
    else
        return vvv.iWMD2();
};

auto iWMD3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iWMD3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iWMD3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iWMD3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iWMD3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iWMD3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iWMD3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iWMD3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iWMD3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iWMD3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iWMD3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iWMD3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iWMD3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iWMD3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iWMD3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iWMD3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iWMD3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iWMD3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iWMD3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iWMD3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iWMD3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iWMD3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iWMD3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iWMD3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iWMD3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iWMD3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iWMD3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iWMD3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iWMD3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iWMD3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iWMD3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iWMD3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iWMD3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iWMD3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iWMD3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iWMD3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iWMD3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iWMD3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iWMD3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iWMD3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iWMD3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iWMD3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iWMD3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iWMD3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iWMD3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iWMD3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iWMD3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iWMD3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iWMD3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iWMD3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iWMD3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iWMD3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iWMD3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iWMD3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iWMD3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iWMD3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iWMD3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iWMD3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iWMD3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iWMD3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iWMD3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iWMD3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iWMD3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iWMD3jesPileUpPtHFdn();
    else
        return vvv.iWMD3();
};

auto iWMD4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.iWMD4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.iWMD4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.iWMD4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.iWMD4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.iWMD4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.iWMD4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.iWMD4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.iWMD4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.iWMD4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.iWMD4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.iWMD4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.iWMD4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.iWMD4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.iWMD4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.iWMD4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.iWMD4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.iWMD4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.iWMD4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.iWMD4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.iWMD4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.iWMD4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.iWMD4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.iWMD4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.iWMD4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.iWMD4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.iWMD4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.iWMD4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.iWMD4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.iWMD4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.iWMD4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.iWMD4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.iWMD4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.iWMD4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.iWMD4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.iWMD4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.iWMD4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.iWMD4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.iWMD4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.iWMD4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.iWMD4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.iWMD4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.iWMD4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.iWMD4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.iWMD4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.iWMD4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.iWMD4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.iWMD4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.iWMD4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.iWMD4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.iWMD4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.iWMD4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.iWMD4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.iWMD4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.iWMD4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.iWMD4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.iWMD4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.iWMD4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.iWMD4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.iWMD4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.iWMD4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.iWMD4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.iWMD4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.iWMD4jesPileUpPtHFdn();
    else
        return vvv.iWMD4();
};

auto MET = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.MET();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.METJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.METJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.METJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.METJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.METJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.METJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.METJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.METJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.METjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.METjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.METjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.METjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.METjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.METjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.METjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.METjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.METjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.METjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.METjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.METjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.METjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.METjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.METjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.METjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.METjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.METjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.METjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.METjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.METjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.METjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.METjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.METjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.METjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.METjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.METjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.METjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.METjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.METjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.METjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.METjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.METjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.METjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.METjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.METjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.METjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.METjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.METjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.METjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.METjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.METjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.METjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.METjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.METjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.METjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.METjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.METjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.METjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.METjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.METjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.METjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.METjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.METjesPileUpPtHFdn();
    else
        return vvv.MET();
};

auto Nu = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.Nu();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NuJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NuJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NuJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NuJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NuJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NuJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NuJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NuJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NujesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NujesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NujesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NujesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NujesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NujesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NujesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NujesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NujesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NujesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NujesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NujesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NujesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NujesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NujesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NujesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NujesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NujesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NujesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NujesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NujesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NujesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NujesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NujesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NujesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NujesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NujesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NujesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NujesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NujesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NujesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NujesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NujesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NujesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NujesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NujesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NujesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NujesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NujesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NujesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NujesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NujesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NujesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NujesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NujesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NujesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NujesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NujesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NujesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NujesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NujesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NujesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NujesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NujesPileUpPtHFdn();
    else
        return vvv.Nu();
};

auto NJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NJjesPileUpPtHFdn();
    else
        return vvv.NJ();
};

auto NbLoose = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NbLoose();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NbLooseJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NbLooseJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NbLooseJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NbLooseJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NbLooseJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NbLooseJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NbLooseJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NbLooseJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NbLoosejesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NbLoosejesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NbLoosejesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NbLoosejesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NbLoosejesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NbLoosejesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NbLoosejesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NbLoosejesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NbLoosejesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NbLoosejesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NbLoosejesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NbLoosejesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NbLoosejesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NbLoosejesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NbLoosejesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NbLoosejesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NbLoosejesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NbLoosejesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NbLoosejesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NbLoosejesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NbLoosejesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NbLoosejesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NbLoosejesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NbLoosejesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NbLoosejesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NbLoosejesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NbLoosejesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NbLoosejesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NbLoosejesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NbLoosejesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NbLoosejesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NbLoosejesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NbLoosejesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NbLoosejesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NbLoosejesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NbLoosejesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NbLoosejesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NbLoosejesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NbLoosejesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NbLoosejesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NbLoosejesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NbLoosejesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NbLoosejesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NbLoosejesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NbLoosejesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NbLoosejesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NbLoosejesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NbLoosejesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NbLoosejesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NbLoosejesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NbLoosejesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NbLoosejesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NbLoosejesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NbLoosejesPileUpPtHFdn();
    else
        return vvv.NbLoose();
};

auto NbMedium = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NbMedium();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NbMediumJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NbMediumJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NbMediumJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NbMediumJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NbMediumJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NbMediumJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NbMediumJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NbMediumJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NbMediumjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NbMediumjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NbMediumjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NbMediumjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NbMediumjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NbMediumjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NbMediumjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NbMediumjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NbMediumjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NbMediumjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NbMediumjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NbMediumjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NbMediumjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NbMediumjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NbMediumjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NbMediumjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NbMediumjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NbMediumjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NbMediumjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NbMediumjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NbMediumjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NbMediumjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NbMediumjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NbMediumjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NbMediumjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NbMediumjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NbMediumjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NbMediumjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NbMediumjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NbMediumjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NbMediumjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NbMediumjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NbMediumjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NbMediumjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NbMediumjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NbMediumjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NbMediumjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NbMediumjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NbMediumjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NbMediumjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NbMediumjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NbMediumjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NbMediumjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NbMediumjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NbMediumjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NbMediumjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NbMediumjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NbMediumjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NbMediumjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NbMediumjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NbMediumjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NbMediumjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NbMediumjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NbMediumjesPileUpPtHFdn();
    else
        return vvv.NbMedium();
};

auto NbTight = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NbTight();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NbTightJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NbTightJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NbTightJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NbTightJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NbTightJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NbTightJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NbTightJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NbTightJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NbTightjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NbTightjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NbTightjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NbTightjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NbTightjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NbTightjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NbTightjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NbTightjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NbTightjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NbTightjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NbTightjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NbTightjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NbTightjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NbTightjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NbTightjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NbTightjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NbTightjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NbTightjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NbTightjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NbTightjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NbTightjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NbTightjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NbTightjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NbTightjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NbTightjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NbTightjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NbTightjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NbTightjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NbTightjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NbTightjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NbTightjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NbTightjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NbTightjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NbTightjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NbTightjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NbTightjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NbTightjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NbTightjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NbTightjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NbTightjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NbTightjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NbTightjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NbTightjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NbTightjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NbTightjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NbTightjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NbTightjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NbTightjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NbTightjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NbTightjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NbTightjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NbTightjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NbTightjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NbTightjesPileUpPtHFdn();
    else
        return vvv.NbTight();
};

auto NoORNbLoose = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NoORNbLoose();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NoORNbLooseJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NoORNbLooseJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NoORNbLooseJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NoORNbLooseJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NoORNbLooseJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NoORNbLooseJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NoORNbLooseJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NoORNbLooseJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NoORNbLoosejesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NoORNbLoosejesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NoORNbLoosejesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NoORNbLoosejesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NoORNbLoosejesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NoORNbLoosejesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NoORNbLoosejesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NoORNbLoosejesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NoORNbLoosejesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NoORNbLoosejesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NoORNbLoosejesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NoORNbLoosejesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NoORNbLoosejesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NoORNbLoosejesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NoORNbLoosejesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NoORNbLoosejesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NoORNbLoosejesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NoORNbLoosejesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NoORNbLoosejesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NoORNbLoosejesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NoORNbLoosejesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NoORNbLoosejesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NoORNbLoosejesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NoORNbLoosejesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NoORNbLoosejesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NoORNbLoosejesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NoORNbLoosejesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NoORNbLoosejesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NoORNbLoosejesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NoORNbLoosejesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NoORNbLoosejesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NoORNbLoosejesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NoORNbLoosejesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NoORNbLoosejesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NoORNbLoosejesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NoORNbLoosejesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NoORNbLoosejesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NoORNbLoosejesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NoORNbLoosejesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NoORNbLoosejesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NoORNbLoosejesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NoORNbLoosejesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NoORNbLoosejesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NoORNbLoosejesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NoORNbLoosejesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NoORNbLoosejesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NoORNbLoosejesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NoORNbLoosejesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NoORNbLoosejesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NoORNbLoosejesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NoORNbLoosejesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NoORNbLoosejesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NoORNbLoosejesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NoORNbLoosejesPileUpPtHFdn();
    else
        return vvv.NoORNbLoose();
};

auto NoORNbMedium = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NoORNbMedium();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NoORNbMediumJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NoORNbMediumJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NoORNbMediumJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NoORNbMediumJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NoORNbMediumJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NoORNbMediumJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NoORNbMediumJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NoORNbMediumJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NoORNbMediumjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NoORNbMediumjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NoORNbMediumjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NoORNbMediumjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NoORNbMediumjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NoORNbMediumjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NoORNbMediumjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NoORNbMediumjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NoORNbMediumjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NoORNbMediumjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NoORNbMediumjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NoORNbMediumjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NoORNbMediumjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NoORNbMediumjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NoORNbMediumjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NoORNbMediumjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NoORNbMediumjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NoORNbMediumjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NoORNbMediumjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NoORNbMediumjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NoORNbMediumjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NoORNbMediumjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NoORNbMediumjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NoORNbMediumjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NoORNbMediumjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NoORNbMediumjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NoORNbMediumjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NoORNbMediumjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NoORNbMediumjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NoORNbMediumjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NoORNbMediumjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NoORNbMediumjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NoORNbMediumjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NoORNbMediumjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NoORNbMediumjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NoORNbMediumjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NoORNbMediumjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NoORNbMediumjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NoORNbMediumjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NoORNbMediumjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NoORNbMediumjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NoORNbMediumjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NoORNbMediumjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NoORNbMediumjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NoORNbMediumjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NoORNbMediumjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NoORNbMediumjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NoORNbMediumjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NoORNbMediumjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NoORNbMediumjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NoORNbMediumjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NoORNbMediumjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NoORNbMediumjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NoORNbMediumjesPileUpPtHFdn();
    else
        return vvv.NoORNbMedium();
};

auto NoORNbTight = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.NoORNbTight();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.NoORNbTightJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.NoORNbTightJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.NoORNbTightJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.NoORNbTightJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.NoORNbTightJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.NoORNbTightJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.NoORNbTightJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.NoORNbTightJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.NoORNbTightjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.NoORNbTightjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.NoORNbTightjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.NoORNbTightjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.NoORNbTightjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.NoORNbTightjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.NoORNbTightjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.NoORNbTightjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.NoORNbTightjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.NoORNbTightjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.NoORNbTightjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.NoORNbTightjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.NoORNbTightjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.NoORNbTightjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.NoORNbTightjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.NoORNbTightjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.NoORNbTightjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.NoORNbTightjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.NoORNbTightjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.NoORNbTightjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.NoORNbTightjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.NoORNbTightjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.NoORNbTightjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.NoORNbTightjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.NoORNbTightjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.NoORNbTightjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.NoORNbTightjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.NoORNbTightjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.NoORNbTightjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.NoORNbTightjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.NoORNbTightjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.NoORNbTightjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.NoORNbTightjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.NoORNbTightjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.NoORNbTightjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.NoORNbTightjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.NoORNbTightjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.NoORNbTightjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.NoORNbTightjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.NoORNbTightjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.NoORNbTightjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.NoORNbTightjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.NoORNbTightjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.NoORNbTightjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.NoORNbTightjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.NoORNbTightjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.NoORNbTightjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.NoORNbTightjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.NoORNbTightjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.NoORNbTightjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.NoORNbTightjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.NoORNbTightjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.NoORNbTightjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.NoORNbTightjesPileUpPtHFdn();
    else
        return vvv.NoORNbTight();
};

auto J0 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.J0();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.J0JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.J0JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.J0JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.J0JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.J0JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.J0JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.J0JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.J0JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.J0jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.J0jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.J0jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.J0jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.J0jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.J0jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.J0jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.J0jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.J0jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.J0jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.J0jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.J0jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.J0jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.J0jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.J0jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.J0jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.J0jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.J0jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.J0jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.J0jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.J0jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.J0jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.J0jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.J0jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.J0jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.J0jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.J0jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.J0jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.J0jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.J0jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.J0jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.J0jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.J0jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.J0jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.J0jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.J0jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.J0jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.J0jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.J0jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.J0jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.J0jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.J0jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.J0jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.J0jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.J0jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.J0jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.J0jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.J0jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.J0jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.J0jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.J0jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.J0jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.J0jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.J0jesPileUpPtHFdn();
    else
        return vvv.J0();
};

auto J1 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.J1();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.J1JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.J1JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.J1JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.J1JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.J1JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.J1JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.J1JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.J1JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.J1jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.J1jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.J1jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.J1jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.J1jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.J1jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.J1jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.J1jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.J1jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.J1jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.J1jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.J1jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.J1jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.J1jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.J1jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.J1jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.J1jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.J1jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.J1jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.J1jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.J1jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.J1jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.J1jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.J1jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.J1jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.J1jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.J1jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.J1jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.J1jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.J1jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.J1jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.J1jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.J1jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.J1jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.J1jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.J1jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.J1jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.J1jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.J1jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.J1jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.J1jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.J1jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.J1jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.J1jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.J1jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.J1jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.J1jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.J1jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.J1jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.J1jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.J1jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.J1jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.J1jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.J1jesPileUpPtHFdn();
    else
        return vvv.J1();
};

auto J2 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.J2();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.J2JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.J2JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.J2JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.J2JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.J2JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.J2JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.J2JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.J2JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.J2jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.J2jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.J2jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.J2jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.J2jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.J2jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.J2jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.J2jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.J2jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.J2jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.J2jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.J2jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.J2jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.J2jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.J2jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.J2jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.J2jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.J2jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.J2jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.J2jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.J2jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.J2jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.J2jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.J2jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.J2jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.J2jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.J2jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.J2jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.J2jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.J2jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.J2jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.J2jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.J2jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.J2jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.J2jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.J2jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.J2jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.J2jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.J2jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.J2jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.J2jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.J2jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.J2jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.J2jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.J2jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.J2jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.J2jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.J2jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.J2jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.J2jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.J2jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.J2jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.J2jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.J2jesPileUpPtHFdn();
    else
        return vvv.J2();
};

auto J3 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.J3();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.J3JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.J3JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.J3JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.J3JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.J3JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.J3JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.J3JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.J3JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.J3jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.J3jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.J3jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.J3jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.J3jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.J3jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.J3jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.J3jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.J3jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.J3jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.J3jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.J3jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.J3jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.J3jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.J3jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.J3jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.J3jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.J3jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.J3jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.J3jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.J3jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.J3jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.J3jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.J3jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.J3jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.J3jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.J3jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.J3jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.J3jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.J3jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.J3jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.J3jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.J3jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.J3jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.J3jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.J3jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.J3jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.J3jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.J3jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.J3jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.J3jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.J3jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.J3jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.J3jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.J3jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.J3jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.J3jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.J3jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.J3jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.J3jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.J3jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.J3jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.J3jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.J3jesPileUpPtHFdn();
    else
        return vvv.J3();
};

auto J4 = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.J4();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.J4JESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.J4JESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.J4JERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.J4JERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.J4JMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.J4JMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.J4JMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.J4JMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.J4jesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.J4jesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.J4jesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.J4jesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.J4jesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.J4jesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.J4jesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.J4jesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.J4jesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.J4jesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.J4jesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.J4jesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.J4jesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.J4jesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.J4jesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.J4jesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.J4jesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.J4jesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.J4jesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.J4jesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.J4jesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.J4jesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.J4jesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.J4jesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.J4jesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.J4jesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.J4jesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.J4jesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.J4jesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.J4jesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.J4jesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.J4jesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.J4jesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.J4jesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.J4jesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.J4jesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.J4jesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.J4jesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.J4jesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.J4jesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.J4jesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.J4jesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.J4jesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.J4jesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.J4jesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.J4jesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.J4jesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.J4jesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.J4jesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.J4jesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.J4jesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.J4jesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.J4jesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.J4jesPileUpPtHFdn();
    else
        return vvv.J4();
};

auto MVVX = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.MVVX();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.MVVXJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.MVVXJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.MVVXJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.MVVXJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.MVVXJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.MVVXJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.MVVXJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.MVVXJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.MVVXjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.MVVXjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.MVVXjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.MVVXjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.MVVXjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.MVVXjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.MVVXjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.MVVXjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.MVVXjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.MVVXjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.MVVXjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.MVVXjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.MVVXjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.MVVXjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.MVVXjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.MVVXjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.MVVXjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.MVVXjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.MVVXjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.MVVXjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.MVVXjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.MVVXjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.MVVXjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.MVVXjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.MVVXjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.MVVXjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.MVVXjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.MVVXjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.MVVXjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.MVVXjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.MVVXjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.MVVXjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.MVVXjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.MVVXjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.MVVXjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.MVVXjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.MVVXjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.MVVXjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.MVVXjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.MVVXjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.MVVXjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.MVVXjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.MVVXjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.MVVXjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.MVVXjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.MVVXjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.MVVXjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.MVVXjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.MVVXjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.MVVXjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.MVVXjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.MVVXjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.MVVXjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.MVVXjesPileUpPtHFdn();
    else
        return vvv.MVVX();
};

auto PtVVX = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.PtVVX();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.PtVVXJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.PtVVXJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.PtVVXJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.PtVVXJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.PtVVXJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.PtVVXJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.PtVVXJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.PtVVXJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.PtVVXjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.PtVVXjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.PtVVXjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.PtVVXjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.PtVVXjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.PtVVXjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.PtVVXjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.PtVVXjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.PtVVXjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.PtVVXjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.PtVVXjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.PtVVXjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.PtVVXjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.PtVVXjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.PtVVXjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.PtVVXjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.PtVVXjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.PtVVXjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.PtVVXjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.PtVVXjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.PtVVXjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.PtVVXjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.PtVVXjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.PtVVXjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.PtVVXjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.PtVVXjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.PtVVXjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.PtVVXjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.PtVVXjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.PtVVXjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.PtVVXjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.PtVVXjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.PtVVXjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.PtVVXjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.PtVVXjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.PtVVXjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.PtVVXjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.PtVVXjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.PtVVXjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.PtVVXjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.PtVVXjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.PtVVXjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.PtVVXjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.PtVVXjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.PtVVXjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.PtVVXjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.PtVVXjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.PtVVXjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.PtVVXjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.PtVVXjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.PtVVXjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.PtVVXjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.PtVVXjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.PtVVXjesPileUpPtHFdn();
    else
        return vvv.PtVVX();
};

auto HT = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.HT();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.HTJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.HTJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.HTJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.HTJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.HTJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.HTJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.HTJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.HTJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.HTjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.HTjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.HTjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.HTjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.HTjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.HTjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.HTjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.HTjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.HTjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.HTjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.HTjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.HTjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.HTjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.HTjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.HTjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.HTjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.HTjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.HTjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.HTjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.HTjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.HTjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.HTjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.HTjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.HTjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.HTjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.HTjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.HTjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.HTjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.HTjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.HTjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.HTjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.HTjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.HTjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.HTjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.HTjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.HTjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.HTjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.HTjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.HTjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.HTjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.HTjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.HTjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.HTjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.HTjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.HTjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.HTjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.HTjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.HTjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.HTjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.HTjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.HTjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.HTjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.HTjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.HTjesPileUpPtHFdn();
    else
        return vvv.HT();
};

auto HTJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.HTJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.HTJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.HTJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.HTJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.HTJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.HTJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.HTJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.HTJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.HTJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.HTJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.HTJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.HTJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.HTJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.HTJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.HTJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.HTJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.HTJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.HTJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.HTJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.HTJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.HTJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.HTJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.HTJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.HTJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.HTJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.HTJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.HTJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.HTJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.HTJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.HTJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.HTJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.HTJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.HTJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.HTJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.HTJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.HTJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.HTJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.HTJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.HTJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.HTJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.HTJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.HTJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.HTJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.HTJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.HTJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.HTJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.HTJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.HTJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.HTJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.HTJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.HTJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.HTJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.HTJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.HTJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.HTJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.HTJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.HTJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.HTJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.HTJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.HTJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.HTJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.HTJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.HTJjesPileUpPtHFdn();
    else
        return vvv.HTJ();
};

auto HTFJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.HTFJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.HTFJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.HTFJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.HTFJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.HTFJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.HTFJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.HTFJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.HTFJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.HTFJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.HTFJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.HTFJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.HTFJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.HTFJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.HTFJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.HTFJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.HTFJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.HTFJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.HTFJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.HTFJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.HTFJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.HTFJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.HTFJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.HTFJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.HTFJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.HTFJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.HTFJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.HTFJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.HTFJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.HTFJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.HTFJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.HTFJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.HTFJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.HTFJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.HTFJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.HTFJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.HTFJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.HTFJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.HTFJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.HTFJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.HTFJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.HTFJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.HTFJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.HTFJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.HTFJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.HTFJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.HTFJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.HTFJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.HTFJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.HTFJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.HTFJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.HTFJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.HTFJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.HTFJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.HTFJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.HTFJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.HTFJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.HTFJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.HTFJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.HTFJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.HTFJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.HTFJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.HTFJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.HTFJjesPileUpPtHFdn();
    else
        return vvv.HTFJ();
};

auto SumPtFJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.SumPtFJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.SumPtFJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.SumPtFJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.SumPtFJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.SumPtFJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.SumPtFJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.SumPtFJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.SumPtFJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.SumPtFJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.SumPtFJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.SumPtFJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.SumPtFJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.SumPtFJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.SumPtFJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.SumPtFJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.SumPtFJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.SumPtFJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.SumPtFJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.SumPtFJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.SumPtFJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.SumPtFJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.SumPtFJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.SumPtFJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.SumPtFJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.SumPtFJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.SumPtFJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.SumPtFJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.SumPtFJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.SumPtFJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.SumPtFJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.SumPtFJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.SumPtFJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.SumPtFJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.SumPtFJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.SumPtFJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.SumPtFJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.SumPtFJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.SumPtFJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.SumPtFJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.SumPtFJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.SumPtFJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.SumPtFJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.SumPtFJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.SumPtFJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.SumPtFJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.SumPtFJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.SumPtFJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.SumPtFJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.SumPtFJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.SumPtFJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.SumPtFJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.SumPtFJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.SumPtFJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.SumPtFJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.SumPtFJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.SumPtFJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.SumPtFJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.SumPtFJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.SumPtFJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.SumPtFJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.SumPtFJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.SumPtFJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.SumPtFJjesPileUpPtHFdn();
    else
        return vvv.SumPtFJ();
};

auto SumPtJ = [&](TString syst_name=VARIATION)
{
    if (syst_name.EqualTo("Nominal"))
        return vvv.SumPtJ();
    else if (syst_name.EqualTo("JESUp"))
        return vvv.SumPtJJESUp();
    else if (syst_name.EqualTo("JESDn"))
        return vvv.SumPtJJESDn();
    else if (syst_name.EqualTo("JERUp"))
        return vvv.SumPtJJERUp();
    else if (syst_name.EqualTo("JERDn"))
        return vvv.SumPtJJERDn();
    else if (syst_name.EqualTo("JMSUp"))
        return vvv.SumPtJJMSUp();
    else if (syst_name.EqualTo("JMSDn"))
        return vvv.SumPtJJMSDn();
    else if (syst_name.EqualTo("JMRUp"))
        return vvv.SumPtJJMRUp();
    else if (syst_name.EqualTo("JMRDn"))
        return vvv.SumPtJJMRDn();
    else if (syst_name.EqualTo("jesAbsoluteStatup"))
        return vvv.SumPtJjesAbsoluteStatup();
    else if (syst_name.EqualTo("jesAbsoluteStatdn"))
        return vvv.SumPtJjesAbsoluteStatdn();
    else if (syst_name.EqualTo("jesAbsoluteScaleup"))
        return vvv.SumPtJjesAbsoluteScaleup();
    else if (syst_name.EqualTo("jesAbsoluteScaledn"))
        return vvv.SumPtJjesAbsoluteScaledn();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasup"))
        return vvv.SumPtJjesAbsoluteMPFBiasup();
    else if (syst_name.EqualTo("jesAbsoluteMPFBiasdn"))
        return vvv.SumPtJjesAbsoluteMPFBiasdn();
    else if (syst_name.EqualTo("jesFragmentationup"))
        return vvv.SumPtJjesFragmentationup();
    else if (syst_name.EqualTo("jesFragmentationdn"))
        return vvv.SumPtJjesFragmentationdn();
    else if (syst_name.EqualTo("jesSinglePionECALup"))
        return vvv.SumPtJjesSinglePionECALup();
    else if (syst_name.EqualTo("jesSinglePionECALdn"))
        return vvv.SumPtJjesSinglePionECALdn();
    else if (syst_name.EqualTo("jesSinglePionHCALup"))
        return vvv.SumPtJjesSinglePionHCALup();
    else if (syst_name.EqualTo("jesSinglePionHCALdn"))
        return vvv.SumPtJjesSinglePionHCALdn();
    else if (syst_name.EqualTo("jesFlavorQCDup"))
        return vvv.SumPtJjesFlavorQCDup();
    else if (syst_name.EqualTo("jesFlavorQCDdn"))
        return vvv.SumPtJjesFlavorQCDdn();
    else if (syst_name.EqualTo("jesTimePtEtaup"))
        return vvv.SumPtJjesTimePtEtaup();
    else if (syst_name.EqualTo("jesTimePtEtadn"))
        return vvv.SumPtJjesTimePtEtadn();
    else if (syst_name.EqualTo("jesRelativeJEREC1up"))
        return vvv.SumPtJjesRelativeJEREC1up();
    else if (syst_name.EqualTo("jesRelativeJEREC1dn"))
        return vvv.SumPtJjesRelativeJEREC1dn();
    else if (syst_name.EqualTo("jesRelativeJEREC2up"))
        return vvv.SumPtJjesRelativeJEREC2up();
    else if (syst_name.EqualTo("jesRelativeJEREC2dn"))
        return vvv.SumPtJjesRelativeJEREC2dn();
    else if (syst_name.EqualTo("jesRelativeJERHFup"))
        return vvv.SumPtJjesRelativeJERHFup();
    else if (syst_name.EqualTo("jesRelativeJERHFdn"))
        return vvv.SumPtJjesRelativeJERHFdn();
    else if (syst_name.EqualTo("jesRelativePtBBup"))
        return vvv.SumPtJjesRelativePtBBup();
    else if (syst_name.EqualTo("jesRelativePtBBdn"))
        return vvv.SumPtJjesRelativePtBBdn();
    else if (syst_name.EqualTo("jesRelativePtEC1up"))
        return vvv.SumPtJjesRelativePtEC1up();
    else if (syst_name.EqualTo("jesRelativePtEC1dn"))
        return vvv.SumPtJjesRelativePtEC1dn();
    else if (syst_name.EqualTo("jesRelativePtEC2up"))
        return vvv.SumPtJjesRelativePtEC2up();
    else if (syst_name.EqualTo("jesRelativePtEC2dn"))
        return vvv.SumPtJjesRelativePtEC2dn();
    else if (syst_name.EqualTo("jesRelativePtHFup"))
        return vvv.SumPtJjesRelativePtHFup();
    else if (syst_name.EqualTo("jesRelativePtHFdn"))
        return vvv.SumPtJjesRelativePtHFdn();
    else if (syst_name.EqualTo("jesRelativeBalup"))
        return vvv.SumPtJjesRelativeBalup();
    else if (syst_name.EqualTo("jesRelativeBaldn"))
        return vvv.SumPtJjesRelativeBaldn();
    else if (syst_name.EqualTo("jesRelativeSampleup"))
        return vvv.SumPtJjesRelativeSampleup();
    else if (syst_name.EqualTo("jesRelativeSampledn"))
        return vvv.SumPtJjesRelativeSampledn();
    else if (syst_name.EqualTo("jesRelativeFSRup"))
        return vvv.SumPtJjesRelativeFSRup();
    else if (syst_name.EqualTo("jesRelativeFSRdn"))
        return vvv.SumPtJjesRelativeFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatFSRup"))
        return vvv.SumPtJjesRelativeStatFSRup();
    else if (syst_name.EqualTo("jesRelativeStatFSRdn"))
        return vvv.SumPtJjesRelativeStatFSRdn();
    else if (syst_name.EqualTo("jesRelativeStatECup"))
        return vvv.SumPtJjesRelativeStatECup();
    else if (syst_name.EqualTo("jesRelativeStatECdn"))
        return vvv.SumPtJjesRelativeStatECdn();
    else if (syst_name.EqualTo("jesRelativeStatHFup"))
        return vvv.SumPtJjesRelativeStatHFup();
    else if (syst_name.EqualTo("jesRelativeStatHFdn"))
        return vvv.SumPtJjesRelativeStatHFdn();
    else if (syst_name.EqualTo("jesPileUpDataMCup"))
        return vvv.SumPtJjesPileUpDataMCup();
    else if (syst_name.EqualTo("jesPileUpDataMCdn"))
        return vvv.SumPtJjesPileUpDataMCdn();
    else if (syst_name.EqualTo("jesPileUpPtRefup"))
        return vvv.SumPtJjesPileUpPtRefup();
    else if (syst_name.EqualTo("jesPileUpPtRefdn"))
        return vvv.SumPtJjesPileUpPtRefdn();
    else if (syst_name.EqualTo("jesPileUpPtBBup"))
        return vvv.SumPtJjesPileUpPtBBup();
    else if (syst_name.EqualTo("jesPileUpPtBBdn"))
        return vvv.SumPtJjesPileUpPtBBdn();
    else if (syst_name.EqualTo("jesPileUpPtEC1up"))
        return vvv.SumPtJjesPileUpPtEC1up();
    else if (syst_name.EqualTo("jesPileUpPtEC1dn"))
        return vvv.SumPtJjesPileUpPtEC1dn();
    else if (syst_name.EqualTo("jesPileUpPtEC2up"))
        return vvv.SumPtJjesPileUpPtEC2up();
    else if (syst_name.EqualTo("jesPileUpPtEC2dn"))
        return vvv.SumPtJjesPileUpPtEC2dn();
    else if (syst_name.EqualTo("jesPileUpPtHFup"))
        return vvv.SumPtJjesPileUpPtHFup();
    else if (syst_name.EqualTo("jesPileUpPtHFdn"))
        return vvv.SumPtJjesPileUpPtHFdn();
    else
        return vvv.SumPtJ();
};

auto isData = [&]()
{
    return vvv.isData();
};

auto run = [&]()
{
    return vvv.run();
};

auto evt = [&]()
{
    return vvv.evt();
};

auto genWeight = [&]()
{
    return vvv.genWeight();
};

auto wgt = [&]()
{
    return vvv.wgt();
};

auto LHEReweightingWeight = [&]()
{
    return vvv.LHEReweightingWeight();
};

auto trigger = [&]()
{
    return vvv.trigger();
};

auto is0Lep = [&]()
{
    return vvv.is0Lep();
};

auto is1Lep = [&]()
{
    return vvv.is1Lep();
};

auto Lep = [&]()
{
    return vvv.Lep();
};

auto LepFlav = [&]()
{
    return vvv.LepFlav();
};

auto GenV0 = [&]()
{
    return vvv.GenV0();
};

auto GenV1 = [&]()
{
    return vvv.GenV1();
};

auto GenV2 = [&]()
{
    return vvv.GenV2();
};

auto isHad0 = [&]()
{
    return vvv.isHad0();
};

auto isHad1 = [&]()
{
    return vvv.isHad1();
};

auto isHad2 = [&]()
{
    return vvv.isHad2();
};

auto GenF00 = [&]()
{
    return vvv.GenF00();
};

auto GenF01 = [&]()
{
    return vvv.GenF01();
};

auto GenF10 = [&]()
{
    return vvv.GenF10();
};

auto GenF11 = [&]()
{
    return vvv.GenF11();
};

auto GenF20 = [&]()
{
    return vvv.GenF20();
};

auto GenF21 = [&]()
{
    return vvv.GenF21();
};

auto QCDScale = [&]()
{
    return vvv.QCDScale();
};

auto PDF = [&]()
{
    return vvv.PDF();
};

auto prefireWgt = [&]()
{
    if (ana.syst_name.EqualTo("prefireWgtUp"))
        return vvv.prefireWgtUp();
    else if (ana.syst_name.EqualTo("prefireWgtDn"))
        return vvv.prefireWgtDn();
    else
        return vvv.prefireWgt();
};

auto puWgt = [&]()
{
    if (ana.syst_name.EqualTo("puWgtUp"))
        return vvv.puWgtUp();
    else if (ana.syst_name.EqualTo("puWgtDn"))
        return vvv.puWgtDn();
    else
        return vvv.puWgt();
};

auto trigWgt = [&]()
{
    if (ana.syst_name.EqualTo("trigWgtUp"))
        return vvv.trigWgtUp();
    else if (ana.syst_name.EqualTo("trigWgtDn"))
        return vvv.trigWgtDn();
    else
        return vvv.trigWgt();
};

