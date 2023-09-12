#include "VVV0Tree.h"
VVV0Tree vvv;

void VVV0Tree::Init(TTree *tree) {
  Lep_branch = tree->GetBranch("Lep");
  if (Lep_branch) Lep_branch->SetAddress(&Lep_);
  FJ0_branch = tree->GetBranch("FJ0");
  if (FJ0_branch) FJ0_branch->SetAddress(&FJ0_);
  FJ1_branch = tree->GetBranch("FJ1");
  if (FJ1_branch) FJ1_branch->SetAddress(&FJ1_);
  FJ2_branch = tree->GetBranch("FJ2");
  if (FJ2_branch) FJ2_branch->SetAddress(&FJ2_);
  FJ3_branch = tree->GetBranch("FJ3");
  if (FJ3_branch) FJ3_branch->SetAddress(&FJ3_);
  FJ4_branch = tree->GetBranch("FJ4");
  if (FJ4_branch) FJ4_branch->SetAddress(&FJ4_);
  iFJ0_branch = tree->GetBranch("iFJ0");
  if (iFJ0_branch) iFJ0_branch->SetAddress(&iFJ0_);
  iFJ1_branch = tree->GetBranch("iFJ1");
  if (iFJ1_branch) iFJ1_branch->SetAddress(&iFJ1_);
  iFJ2_branch = tree->GetBranch("iFJ2");
  if (iFJ2_branch) iFJ2_branch->SetAddress(&iFJ2_);
  iFJ3_branch = tree->GetBranch("iFJ3");
  if (iFJ3_branch) iFJ3_branch->SetAddress(&iFJ3_);
  iFJ4_branch = tree->GetBranch("iFJ4");
  if (iFJ4_branch) iFJ4_branch->SetAddress(&iFJ4_);
  MET_branch = tree->GetBranch("MET");
  if (MET_branch) MET_branch->SetAddress(&MET_);
  Nu_branch = tree->GetBranch("Nu");
  if (Nu_branch) Nu_branch->SetAddress(&Nu_);
  J0_branch = tree->GetBranch("J0");
  if (J0_branch) J0_branch->SetAddress(&J0_);
  J1_branch = tree->GetBranch("J1");
  if (J1_branch) J1_branch->SetAddress(&J1_);
  J2_branch = tree->GetBranch("J2");
  if (J2_branch) J2_branch->SetAddress(&J2_);
  J3_branch = tree->GetBranch("J3");
  if (J3_branch) J3_branch->SetAddress(&J3_);
  J4_branch = tree->GetBranch("J4");
  if (J4_branch) J4_branch->SetAddress(&J4_);
  FJ0JESUp_branch = tree->GetBranch("FJ0JESUp");
  if (FJ0JESUp_branch) FJ0JESUp_branch->SetAddress(&FJ0JESUp_);
  FJ1JESUp_branch = tree->GetBranch("FJ1JESUp");
  if (FJ1JESUp_branch) FJ1JESUp_branch->SetAddress(&FJ1JESUp_);
  FJ2JESUp_branch = tree->GetBranch("FJ2JESUp");
  if (FJ2JESUp_branch) FJ2JESUp_branch->SetAddress(&FJ2JESUp_);
  FJ3JESUp_branch = tree->GetBranch("FJ3JESUp");
  if (FJ3JESUp_branch) FJ3JESUp_branch->SetAddress(&FJ3JESUp_);
  FJ4JESUp_branch = tree->GetBranch("FJ4JESUp");
  if (FJ4JESUp_branch) FJ4JESUp_branch->SetAddress(&FJ4JESUp_);
  iFJ0JESUp_branch = tree->GetBranch("iFJ0JESUp");
  if (iFJ0JESUp_branch) iFJ0JESUp_branch->SetAddress(&iFJ0JESUp_);
  iFJ1JESUp_branch = tree->GetBranch("iFJ1JESUp");
  if (iFJ1JESUp_branch) iFJ1JESUp_branch->SetAddress(&iFJ1JESUp_);
  iFJ2JESUp_branch = tree->GetBranch("iFJ2JESUp");
  if (iFJ2JESUp_branch) iFJ2JESUp_branch->SetAddress(&iFJ2JESUp_);
  iFJ3JESUp_branch = tree->GetBranch("iFJ3JESUp");
  if (iFJ3JESUp_branch) iFJ3JESUp_branch->SetAddress(&iFJ3JESUp_);
  iFJ4JESUp_branch = tree->GetBranch("iFJ4JESUp");
  if (iFJ4JESUp_branch) iFJ4JESUp_branch->SetAddress(&iFJ4JESUp_);
  METJESUp_branch = tree->GetBranch("METJESUp");
  if (METJESUp_branch) METJESUp_branch->SetAddress(&METJESUp_);
  NuJESUp_branch = tree->GetBranch("NuJESUp");
  if (NuJESUp_branch) NuJESUp_branch->SetAddress(&NuJESUp_);
  J0JESUp_branch = tree->GetBranch("J0JESUp");
  if (J0JESUp_branch) J0JESUp_branch->SetAddress(&J0JESUp_);
  J1JESUp_branch = tree->GetBranch("J1JESUp");
  if (J1JESUp_branch) J1JESUp_branch->SetAddress(&J1JESUp_);
  J2JESUp_branch = tree->GetBranch("J2JESUp");
  if (J2JESUp_branch) J2JESUp_branch->SetAddress(&J2JESUp_);
  J3JESUp_branch = tree->GetBranch("J3JESUp");
  if (J3JESUp_branch) J3JESUp_branch->SetAddress(&J3JESUp_);
  J4JESUp_branch = tree->GetBranch("J4JESUp");
  if (J4JESUp_branch) J4JESUp_branch->SetAddress(&J4JESUp_);
  FJ0JESDn_branch = tree->GetBranch("FJ0JESDn");
  if (FJ0JESDn_branch) FJ0JESDn_branch->SetAddress(&FJ0JESDn_);
  FJ1JESDn_branch = tree->GetBranch("FJ1JESDn");
  if (FJ1JESDn_branch) FJ1JESDn_branch->SetAddress(&FJ1JESDn_);
  FJ2JESDn_branch = tree->GetBranch("FJ2JESDn");
  if (FJ2JESDn_branch) FJ2JESDn_branch->SetAddress(&FJ2JESDn_);
  FJ3JESDn_branch = tree->GetBranch("FJ3JESDn");
  if (FJ3JESDn_branch) FJ3JESDn_branch->SetAddress(&FJ3JESDn_);
  FJ4JESDn_branch = tree->GetBranch("FJ4JESDn");
  if (FJ4JESDn_branch) FJ4JESDn_branch->SetAddress(&FJ4JESDn_);
  iFJ0JESDn_branch = tree->GetBranch("iFJ0JESDn");
  if (iFJ0JESDn_branch) iFJ0JESDn_branch->SetAddress(&iFJ0JESDn_);
  iFJ1JESDn_branch = tree->GetBranch("iFJ1JESDn");
  if (iFJ1JESDn_branch) iFJ1JESDn_branch->SetAddress(&iFJ1JESDn_);
  iFJ2JESDn_branch = tree->GetBranch("iFJ2JESDn");
  if (iFJ2JESDn_branch) iFJ2JESDn_branch->SetAddress(&iFJ2JESDn_);
  iFJ3JESDn_branch = tree->GetBranch("iFJ3JESDn");
  if (iFJ3JESDn_branch) iFJ3JESDn_branch->SetAddress(&iFJ3JESDn_);
  iFJ4JESDn_branch = tree->GetBranch("iFJ4JESDn");
  if (iFJ4JESDn_branch) iFJ4JESDn_branch->SetAddress(&iFJ4JESDn_);
  METJESDn_branch = tree->GetBranch("METJESDn");
  if (METJESDn_branch) METJESDn_branch->SetAddress(&METJESDn_);
  NuJESDn_branch = tree->GetBranch("NuJESDn");
  if (NuJESDn_branch) NuJESDn_branch->SetAddress(&NuJESDn_);
  J0JESDn_branch = tree->GetBranch("J0JESDn");
  if (J0JESDn_branch) J0JESDn_branch->SetAddress(&J0JESDn_);
  J1JESDn_branch = tree->GetBranch("J1JESDn");
  if (J1JESDn_branch) J1JESDn_branch->SetAddress(&J1JESDn_);
  J2JESDn_branch = tree->GetBranch("J2JESDn");
  if (J2JESDn_branch) J2JESDn_branch->SetAddress(&J2JESDn_);
  J3JESDn_branch = tree->GetBranch("J3JESDn");
  if (J3JESDn_branch) J3JESDn_branch->SetAddress(&J3JESDn_);
  J4JESDn_branch = tree->GetBranch("J4JESDn");
  if (J4JESDn_branch) J4JESDn_branch->SetAddress(&J4JESDn_);
  FJ0JERUp_branch = tree->GetBranch("FJ0JERUp");
  if (FJ0JERUp_branch) FJ0JERUp_branch->SetAddress(&FJ0JERUp_);
  FJ1JERUp_branch = tree->GetBranch("FJ1JERUp");
  if (FJ1JERUp_branch) FJ1JERUp_branch->SetAddress(&FJ1JERUp_);
  FJ2JERUp_branch = tree->GetBranch("FJ2JERUp");
  if (FJ2JERUp_branch) FJ2JERUp_branch->SetAddress(&FJ2JERUp_);
  FJ3JERUp_branch = tree->GetBranch("FJ3JERUp");
  if (FJ3JERUp_branch) FJ3JERUp_branch->SetAddress(&FJ3JERUp_);
  FJ4JERUp_branch = tree->GetBranch("FJ4JERUp");
  if (FJ4JERUp_branch) FJ4JERUp_branch->SetAddress(&FJ4JERUp_);
  iFJ0JERUp_branch = tree->GetBranch("iFJ0JERUp");
  if (iFJ0JERUp_branch) iFJ0JERUp_branch->SetAddress(&iFJ0JERUp_);
  iFJ1JERUp_branch = tree->GetBranch("iFJ1JERUp");
  if (iFJ1JERUp_branch) iFJ1JERUp_branch->SetAddress(&iFJ1JERUp_);
  iFJ2JERUp_branch = tree->GetBranch("iFJ2JERUp");
  if (iFJ2JERUp_branch) iFJ2JERUp_branch->SetAddress(&iFJ2JERUp_);
  iFJ3JERUp_branch = tree->GetBranch("iFJ3JERUp");
  if (iFJ3JERUp_branch) iFJ3JERUp_branch->SetAddress(&iFJ3JERUp_);
  iFJ4JERUp_branch = tree->GetBranch("iFJ4JERUp");
  if (iFJ4JERUp_branch) iFJ4JERUp_branch->SetAddress(&iFJ4JERUp_);
  METJERUp_branch = tree->GetBranch("METJERUp");
  if (METJERUp_branch) METJERUp_branch->SetAddress(&METJERUp_);
  NuJERUp_branch = tree->GetBranch("NuJERUp");
  if (NuJERUp_branch) NuJERUp_branch->SetAddress(&NuJERUp_);
  J0JERUp_branch = tree->GetBranch("J0JERUp");
  if (J0JERUp_branch) J0JERUp_branch->SetAddress(&J0JERUp_);
  J1JERUp_branch = tree->GetBranch("J1JERUp");
  if (J1JERUp_branch) J1JERUp_branch->SetAddress(&J1JERUp_);
  J2JERUp_branch = tree->GetBranch("J2JERUp");
  if (J2JERUp_branch) J2JERUp_branch->SetAddress(&J2JERUp_);
  J3JERUp_branch = tree->GetBranch("J3JERUp");
  if (J3JERUp_branch) J3JERUp_branch->SetAddress(&J3JERUp_);
  J4JERUp_branch = tree->GetBranch("J4JERUp");
  if (J4JERUp_branch) J4JERUp_branch->SetAddress(&J4JERUp_);
  FJ0JERDn_branch = tree->GetBranch("FJ0JERDn");
  if (FJ0JERDn_branch) FJ0JERDn_branch->SetAddress(&FJ0JERDn_);
  FJ1JERDn_branch = tree->GetBranch("FJ1JERDn");
  if (FJ1JERDn_branch) FJ1JERDn_branch->SetAddress(&FJ1JERDn_);
  FJ2JERDn_branch = tree->GetBranch("FJ2JERDn");
  if (FJ2JERDn_branch) FJ2JERDn_branch->SetAddress(&FJ2JERDn_);
  FJ3JERDn_branch = tree->GetBranch("FJ3JERDn");
  if (FJ3JERDn_branch) FJ3JERDn_branch->SetAddress(&FJ3JERDn_);
  FJ4JERDn_branch = tree->GetBranch("FJ4JERDn");
  if (FJ4JERDn_branch) FJ4JERDn_branch->SetAddress(&FJ4JERDn_);
  iFJ0JERDn_branch = tree->GetBranch("iFJ0JERDn");
  if (iFJ0JERDn_branch) iFJ0JERDn_branch->SetAddress(&iFJ0JERDn_);
  iFJ1JERDn_branch = tree->GetBranch("iFJ1JERDn");
  if (iFJ1JERDn_branch) iFJ1JERDn_branch->SetAddress(&iFJ1JERDn_);
  iFJ2JERDn_branch = tree->GetBranch("iFJ2JERDn");
  if (iFJ2JERDn_branch) iFJ2JERDn_branch->SetAddress(&iFJ2JERDn_);
  iFJ3JERDn_branch = tree->GetBranch("iFJ3JERDn");
  if (iFJ3JERDn_branch) iFJ3JERDn_branch->SetAddress(&iFJ3JERDn_);
  iFJ4JERDn_branch = tree->GetBranch("iFJ4JERDn");
  if (iFJ4JERDn_branch) iFJ4JERDn_branch->SetAddress(&iFJ4JERDn_);
  METJERDn_branch = tree->GetBranch("METJERDn");
  if (METJERDn_branch) METJERDn_branch->SetAddress(&METJERDn_);
  NuJERDn_branch = tree->GetBranch("NuJERDn");
  if (NuJERDn_branch) NuJERDn_branch->SetAddress(&NuJERDn_);
  J0JERDn_branch = tree->GetBranch("J0JERDn");
  if (J0JERDn_branch) J0JERDn_branch->SetAddress(&J0JERDn_);
  J1JERDn_branch = tree->GetBranch("J1JERDn");
  if (J1JERDn_branch) J1JERDn_branch->SetAddress(&J1JERDn_);
  J2JERDn_branch = tree->GetBranch("J2JERDn");
  if (J2JERDn_branch) J2JERDn_branch->SetAddress(&J2JERDn_);
  J3JERDn_branch = tree->GetBranch("J3JERDn");
  if (J3JERDn_branch) J3JERDn_branch->SetAddress(&J3JERDn_);
  J4JERDn_branch = tree->GetBranch("J4JERDn");
  if (J4JERDn_branch) J4JERDn_branch->SetAddress(&J4JERDn_);
  FJ0JMSUp_branch = tree->GetBranch("FJ0JMSUp");
  if (FJ0JMSUp_branch) FJ0JMSUp_branch->SetAddress(&FJ0JMSUp_);
  FJ1JMSUp_branch = tree->GetBranch("FJ1JMSUp");
  if (FJ1JMSUp_branch) FJ1JMSUp_branch->SetAddress(&FJ1JMSUp_);
  FJ2JMSUp_branch = tree->GetBranch("FJ2JMSUp");
  if (FJ2JMSUp_branch) FJ2JMSUp_branch->SetAddress(&FJ2JMSUp_);
  FJ3JMSUp_branch = tree->GetBranch("FJ3JMSUp");
  if (FJ3JMSUp_branch) FJ3JMSUp_branch->SetAddress(&FJ3JMSUp_);
  FJ4JMSUp_branch = tree->GetBranch("FJ4JMSUp");
  if (FJ4JMSUp_branch) FJ4JMSUp_branch->SetAddress(&FJ4JMSUp_);
  iFJ0JMSUp_branch = tree->GetBranch("iFJ0JMSUp");
  if (iFJ0JMSUp_branch) iFJ0JMSUp_branch->SetAddress(&iFJ0JMSUp_);
  iFJ1JMSUp_branch = tree->GetBranch("iFJ1JMSUp");
  if (iFJ1JMSUp_branch) iFJ1JMSUp_branch->SetAddress(&iFJ1JMSUp_);
  iFJ2JMSUp_branch = tree->GetBranch("iFJ2JMSUp");
  if (iFJ2JMSUp_branch) iFJ2JMSUp_branch->SetAddress(&iFJ2JMSUp_);
  iFJ3JMSUp_branch = tree->GetBranch("iFJ3JMSUp");
  if (iFJ3JMSUp_branch) iFJ3JMSUp_branch->SetAddress(&iFJ3JMSUp_);
  iFJ4JMSUp_branch = tree->GetBranch("iFJ4JMSUp");
  if (iFJ4JMSUp_branch) iFJ4JMSUp_branch->SetAddress(&iFJ4JMSUp_);
  METJMSUp_branch = tree->GetBranch("METJMSUp");
  if (METJMSUp_branch) METJMSUp_branch->SetAddress(&METJMSUp_);
  NuJMSUp_branch = tree->GetBranch("NuJMSUp");
  if (NuJMSUp_branch) NuJMSUp_branch->SetAddress(&NuJMSUp_);
  J0JMSUp_branch = tree->GetBranch("J0JMSUp");
  if (J0JMSUp_branch) J0JMSUp_branch->SetAddress(&J0JMSUp_);
  J1JMSUp_branch = tree->GetBranch("J1JMSUp");
  if (J1JMSUp_branch) J1JMSUp_branch->SetAddress(&J1JMSUp_);
  J2JMSUp_branch = tree->GetBranch("J2JMSUp");
  if (J2JMSUp_branch) J2JMSUp_branch->SetAddress(&J2JMSUp_);
  J3JMSUp_branch = tree->GetBranch("J3JMSUp");
  if (J3JMSUp_branch) J3JMSUp_branch->SetAddress(&J3JMSUp_);
  J4JMSUp_branch = tree->GetBranch("J4JMSUp");
  if (J4JMSUp_branch) J4JMSUp_branch->SetAddress(&J4JMSUp_);
  FJ0JMSDn_branch = tree->GetBranch("FJ0JMSDn");
  if (FJ0JMSDn_branch) FJ0JMSDn_branch->SetAddress(&FJ0JMSDn_);
  FJ1JMSDn_branch = tree->GetBranch("FJ1JMSDn");
  if (FJ1JMSDn_branch) FJ1JMSDn_branch->SetAddress(&FJ1JMSDn_);
  FJ2JMSDn_branch = tree->GetBranch("FJ2JMSDn");
  if (FJ2JMSDn_branch) FJ2JMSDn_branch->SetAddress(&FJ2JMSDn_);
  FJ3JMSDn_branch = tree->GetBranch("FJ3JMSDn");
  if (FJ3JMSDn_branch) FJ3JMSDn_branch->SetAddress(&FJ3JMSDn_);
  FJ4JMSDn_branch = tree->GetBranch("FJ4JMSDn");
  if (FJ4JMSDn_branch) FJ4JMSDn_branch->SetAddress(&FJ4JMSDn_);
  iFJ0JMSDn_branch = tree->GetBranch("iFJ0JMSDn");
  if (iFJ0JMSDn_branch) iFJ0JMSDn_branch->SetAddress(&iFJ0JMSDn_);
  iFJ1JMSDn_branch = tree->GetBranch("iFJ1JMSDn");
  if (iFJ1JMSDn_branch) iFJ1JMSDn_branch->SetAddress(&iFJ1JMSDn_);
  iFJ2JMSDn_branch = tree->GetBranch("iFJ2JMSDn");
  if (iFJ2JMSDn_branch) iFJ2JMSDn_branch->SetAddress(&iFJ2JMSDn_);
  iFJ3JMSDn_branch = tree->GetBranch("iFJ3JMSDn");
  if (iFJ3JMSDn_branch) iFJ3JMSDn_branch->SetAddress(&iFJ3JMSDn_);
  iFJ4JMSDn_branch = tree->GetBranch("iFJ4JMSDn");
  if (iFJ4JMSDn_branch) iFJ4JMSDn_branch->SetAddress(&iFJ4JMSDn_);
  METJMSDn_branch = tree->GetBranch("METJMSDn");
  if (METJMSDn_branch) METJMSDn_branch->SetAddress(&METJMSDn_);
  NuJMSDn_branch = tree->GetBranch("NuJMSDn");
  if (NuJMSDn_branch) NuJMSDn_branch->SetAddress(&NuJMSDn_);
  J0JMSDn_branch = tree->GetBranch("J0JMSDn");
  if (J0JMSDn_branch) J0JMSDn_branch->SetAddress(&J0JMSDn_);
  J1JMSDn_branch = tree->GetBranch("J1JMSDn");
  if (J1JMSDn_branch) J1JMSDn_branch->SetAddress(&J1JMSDn_);
  J2JMSDn_branch = tree->GetBranch("J2JMSDn");
  if (J2JMSDn_branch) J2JMSDn_branch->SetAddress(&J2JMSDn_);
  J3JMSDn_branch = tree->GetBranch("J3JMSDn");
  if (J3JMSDn_branch) J3JMSDn_branch->SetAddress(&J3JMSDn_);
  J4JMSDn_branch = tree->GetBranch("J4JMSDn");
  if (J4JMSDn_branch) J4JMSDn_branch->SetAddress(&J4JMSDn_);
  FJ0JMRUp_branch = tree->GetBranch("FJ0JMRUp");
  if (FJ0JMRUp_branch) FJ0JMRUp_branch->SetAddress(&FJ0JMRUp_);
  FJ1JMRUp_branch = tree->GetBranch("FJ1JMRUp");
  if (FJ1JMRUp_branch) FJ1JMRUp_branch->SetAddress(&FJ1JMRUp_);
  FJ2JMRUp_branch = tree->GetBranch("FJ2JMRUp");
  if (FJ2JMRUp_branch) FJ2JMRUp_branch->SetAddress(&FJ2JMRUp_);
  FJ3JMRUp_branch = tree->GetBranch("FJ3JMRUp");
  if (FJ3JMRUp_branch) FJ3JMRUp_branch->SetAddress(&FJ3JMRUp_);
  FJ4JMRUp_branch = tree->GetBranch("FJ4JMRUp");
  if (FJ4JMRUp_branch) FJ4JMRUp_branch->SetAddress(&FJ4JMRUp_);
  iFJ0JMRUp_branch = tree->GetBranch("iFJ0JMRUp");
  if (iFJ0JMRUp_branch) iFJ0JMRUp_branch->SetAddress(&iFJ0JMRUp_);
  iFJ1JMRUp_branch = tree->GetBranch("iFJ1JMRUp");
  if (iFJ1JMRUp_branch) iFJ1JMRUp_branch->SetAddress(&iFJ1JMRUp_);
  iFJ2JMRUp_branch = tree->GetBranch("iFJ2JMRUp");
  if (iFJ2JMRUp_branch) iFJ2JMRUp_branch->SetAddress(&iFJ2JMRUp_);
  iFJ3JMRUp_branch = tree->GetBranch("iFJ3JMRUp");
  if (iFJ3JMRUp_branch) iFJ3JMRUp_branch->SetAddress(&iFJ3JMRUp_);
  iFJ4JMRUp_branch = tree->GetBranch("iFJ4JMRUp");
  if (iFJ4JMRUp_branch) iFJ4JMRUp_branch->SetAddress(&iFJ4JMRUp_);
  METJMRUp_branch = tree->GetBranch("METJMRUp");
  if (METJMRUp_branch) METJMRUp_branch->SetAddress(&METJMRUp_);
  NuJMRUp_branch = tree->GetBranch("NuJMRUp");
  if (NuJMRUp_branch) NuJMRUp_branch->SetAddress(&NuJMRUp_);
  J0JMRUp_branch = tree->GetBranch("J0JMRUp");
  if (J0JMRUp_branch) J0JMRUp_branch->SetAddress(&J0JMRUp_);
  J1JMRUp_branch = tree->GetBranch("J1JMRUp");
  if (J1JMRUp_branch) J1JMRUp_branch->SetAddress(&J1JMRUp_);
  J2JMRUp_branch = tree->GetBranch("J2JMRUp");
  if (J2JMRUp_branch) J2JMRUp_branch->SetAddress(&J2JMRUp_);
  J3JMRUp_branch = tree->GetBranch("J3JMRUp");
  if (J3JMRUp_branch) J3JMRUp_branch->SetAddress(&J3JMRUp_);
  J4JMRUp_branch = tree->GetBranch("J4JMRUp");
  if (J4JMRUp_branch) J4JMRUp_branch->SetAddress(&J4JMRUp_);
  FJ0JMRDn_branch = tree->GetBranch("FJ0JMRDn");
  if (FJ0JMRDn_branch) FJ0JMRDn_branch->SetAddress(&FJ0JMRDn_);
  FJ1JMRDn_branch = tree->GetBranch("FJ1JMRDn");
  if (FJ1JMRDn_branch) FJ1JMRDn_branch->SetAddress(&FJ1JMRDn_);
  FJ2JMRDn_branch = tree->GetBranch("FJ2JMRDn");
  if (FJ2JMRDn_branch) FJ2JMRDn_branch->SetAddress(&FJ2JMRDn_);
  FJ3JMRDn_branch = tree->GetBranch("FJ3JMRDn");
  if (FJ3JMRDn_branch) FJ3JMRDn_branch->SetAddress(&FJ3JMRDn_);
  FJ4JMRDn_branch = tree->GetBranch("FJ4JMRDn");
  if (FJ4JMRDn_branch) FJ4JMRDn_branch->SetAddress(&FJ4JMRDn_);
  iFJ0JMRDn_branch = tree->GetBranch("iFJ0JMRDn");
  if (iFJ0JMRDn_branch) iFJ0JMRDn_branch->SetAddress(&iFJ0JMRDn_);
  iFJ1JMRDn_branch = tree->GetBranch("iFJ1JMRDn");
  if (iFJ1JMRDn_branch) iFJ1JMRDn_branch->SetAddress(&iFJ1JMRDn_);
  iFJ2JMRDn_branch = tree->GetBranch("iFJ2JMRDn");
  if (iFJ2JMRDn_branch) iFJ2JMRDn_branch->SetAddress(&iFJ2JMRDn_);
  iFJ3JMRDn_branch = tree->GetBranch("iFJ3JMRDn");
  if (iFJ3JMRDn_branch) iFJ3JMRDn_branch->SetAddress(&iFJ3JMRDn_);
  iFJ4JMRDn_branch = tree->GetBranch("iFJ4JMRDn");
  if (iFJ4JMRDn_branch) iFJ4JMRDn_branch->SetAddress(&iFJ4JMRDn_);
  METJMRDn_branch = tree->GetBranch("METJMRDn");
  if (METJMRDn_branch) METJMRDn_branch->SetAddress(&METJMRDn_);
  NuJMRDn_branch = tree->GetBranch("NuJMRDn");
  if (NuJMRDn_branch) NuJMRDn_branch->SetAddress(&NuJMRDn_);
  J0JMRDn_branch = tree->GetBranch("J0JMRDn");
  if (J0JMRDn_branch) J0JMRDn_branch->SetAddress(&J0JMRDn_);
  J1JMRDn_branch = tree->GetBranch("J1JMRDn");
  if (J1JMRDn_branch) J1JMRDn_branch->SetAddress(&J1JMRDn_);
  J2JMRDn_branch = tree->GetBranch("J2JMRDn");
  if (J2JMRDn_branch) J2JMRDn_branch->SetAddress(&J2JMRDn_);
  J3JMRDn_branch = tree->GetBranch("J3JMRDn");
  if (J3JMRDn_branch) J3JMRDn_branch->SetAddress(&J3JMRDn_);
  J4JMRDn_branch = tree->GetBranch("J4JMRDn");
  if (J4JMRDn_branch) J4JMRDn_branch->SetAddress(&J4JMRDn_);
  GenV0_branch = tree->GetBranch("GenV0");
  if (GenV0_branch) GenV0_branch->SetAddress(&GenV0_);
  GenV1_branch = tree->GetBranch("GenV1");
  if (GenV1_branch) GenV1_branch->SetAddress(&GenV1_);
  GenV2_branch = tree->GetBranch("GenV2");
  if (GenV2_branch) GenV2_branch->SetAddress(&GenV2_);
  GenF00_branch = tree->GetBranch("GenF00");
  if (GenF00_branch) GenF00_branch->SetAddress(&GenF00_);
  GenF01_branch = tree->GetBranch("GenF01");
  if (GenF01_branch) GenF01_branch->SetAddress(&GenF01_);
  GenF10_branch = tree->GetBranch("GenF10");
  if (GenF10_branch) GenF10_branch->SetAddress(&GenF10_);
  GenF11_branch = tree->GetBranch("GenF11");
  if (GenF11_branch) GenF11_branch->SetAddress(&GenF11_);
  GenF20_branch = tree->GetBranch("GenF20");
  if (GenF20_branch) GenF20_branch->SetAddress(&GenF20_);
  GenF21_branch = tree->GetBranch("GenF21");
  if (GenF21_branch) GenF21_branch->SetAddress(&GenF21_);

  tree->SetMakeClass(1);

  isData_branch = tree->GetBranch("isData");
  if (isData_branch) isData_branch->SetAddress(&isData_);
  run_branch = tree->GetBranch("run");
  if (run_branch) run_branch->SetAddress(&run_);
  lumi_branch = tree->GetBranch("lumi");
  if (lumi_branch) lumi_branch->SetAddress(&lumi_);
  evt_branch = tree->GetBranch("evt");
  if (evt_branch) evt_branch->SetAddress(&evt_);
  year_branch = tree->GetBranch("year");
  if (year_branch) year_branch->SetAddress(&year_);
  genWeight_branch = tree->GetBranch("genWeight");
  if (genWeight_branch) genWeight_branch->SetAddress(&genWeight_);
  wgt_branch = tree->GetBranch("wgt");
  if (wgt_branch) wgt_branch->SetAddress(&wgt_);
  LHEReweightingWeight_branch = tree->GetBranch("LHEReweightingWeight");
  if (LHEReweightingWeight_branch) LHEReweightingWeight_branch->SetAddress(&LHEReweightingWeight_);
  prefireWgt_branch = tree->GetBranch("prefireWgt");
  if (prefireWgt_branch) prefireWgt_branch->SetAddress(&prefireWgt_);
  prefireWgtUp_branch = tree->GetBranch("prefireWgtUp");
  if (prefireWgtUp_branch) prefireWgtUp_branch->SetAddress(&prefireWgtUp_);
  prefireWgtDn_branch = tree->GetBranch("prefireWgtDn");
  if (prefireWgtDn_branch) prefireWgtDn_branch->SetAddress(&prefireWgtDn_);
  puWgt_branch = tree->GetBranch("puWgt");
  if (puWgt_branch) puWgt_branch->SetAddress(&puWgt_);
  puWgtUp_branch = tree->GetBranch("puWgtUp");
  if (puWgtUp_branch) puWgtUp_branch->SetAddress(&puWgtUp_);
  puWgtDn_branch = tree->GetBranch("puWgtDn");
  if (puWgtDn_branch) puWgtDn_branch->SetAddress(&puWgtDn_);
  trigWgt_branch = tree->GetBranch("trigWgt");
  if (trigWgt_branch) trigWgt_branch->SetAddress(&trigWgt_);
  trigWgtUp_branch = tree->GetBranch("trigWgtUp");
  if (trigWgtUp_branch) trigWgtUp_branch->SetAddress(&trigWgtUp_);
  trigWgtDn_branch = tree->GetBranch("trigWgtDn");
  if (trigWgtDn_branch) trigWgtDn_branch->SetAddress(&trigWgtDn_);
  trigger_branch = tree->GetBranch("trigger");
  if (trigger_branch) trigger_branch->SetAddress(&trigger_);
  is0Lep_branch = tree->GetBranch("is0Lep");
  if (is0Lep_branch) is0Lep_branch->SetAddress(&is0Lep_);
  is1Lep_branch = tree->GetBranch("is1Lep");
  if (is1Lep_branch) is1Lep_branch->SetAddress(&is1Lep_);
  LepFlav_branch = tree->GetBranch("LepFlav");
  if (LepFlav_branch) LepFlav_branch->SetAddress(&LepFlav_);
  NFJ_branch = tree->GetBranch("NFJ");
  if (NFJ_branch) NFJ_branch->SetAddress(&NFJ_);
  VMD0_branch = tree->GetBranch("VMD0");
  if (VMD0_branch) VMD0_branch->SetAddress(&VMD0_);
  VMD1_branch = tree->GetBranch("VMD1");
  if (VMD1_branch) VMD1_branch->SetAddress(&VMD1_);
  VMD2_branch = tree->GetBranch("VMD2");
  if (VMD2_branch) VMD2_branch->SetAddress(&VMD2_);
  VMD3_branch = tree->GetBranch("VMD3");
  if (VMD3_branch) VMD3_branch->SetAddress(&VMD3_);
  VMD4_branch = tree->GetBranch("VMD4");
  if (VMD4_branch) VMD4_branch->SetAddress(&VMD4_);
  WMD0_branch = tree->GetBranch("WMD0");
  if (WMD0_branch) WMD0_branch->SetAddress(&WMD0_);
  WMD1_branch = tree->GetBranch("WMD1");
  if (WMD1_branch) WMD1_branch->SetAddress(&WMD1_);
  WMD2_branch = tree->GetBranch("WMD2");
  if (WMD2_branch) WMD2_branch->SetAddress(&WMD2_);
  WMD3_branch = tree->GetBranch("WMD3");
  if (WMD3_branch) WMD3_branch->SetAddress(&WMD3_);
  WMD4_branch = tree->GetBranch("WMD4");
  if (WMD4_branch) WMD4_branch->SetAddress(&WMD4_);
  NQGen0_branch = tree->GetBranch("NQGen0");
  if (NQGen0_branch) NQGen0_branch->SetAddress(&NQGen0_);
  NQGen1_branch = tree->GetBranch("NQGen1");
  if (NQGen1_branch) NQGen1_branch->SetAddress(&NQGen1_);
  NQGen2_branch = tree->GetBranch("NQGen2");
  if (NQGen2_branch) NQGen2_branch->SetAddress(&NQGen2_);
  NQGen3_branch = tree->GetBranch("NQGen3");
  if (NQGen3_branch) NQGen3_branch->SetAddress(&NQGen3_);
  NQGen4_branch = tree->GetBranch("NQGen4");
  if (NQGen4_branch) NQGen4_branch->SetAddress(&NQGen4_);
  NBGen0_branch = tree->GetBranch("NBGen0");
  if (NBGen0_branch) NBGen0_branch->SetAddress(&NBGen0_);
  NBGen1_branch = tree->GetBranch("NBGen1");
  if (NBGen1_branch) NBGen1_branch->SetAddress(&NBGen1_);
  NBGen2_branch = tree->GetBranch("NBGen2");
  if (NBGen2_branch) NBGen2_branch->SetAddress(&NBGen2_);
  NBGen3_branch = tree->GetBranch("NBGen3");
  if (NBGen3_branch) NBGen3_branch->SetAddress(&NBGen3_);
  NBGen4_branch = tree->GetBranch("NBGen4");
  if (NBGen4_branch) NBGen4_branch->SetAddress(&NBGen4_);
  NLGen0_branch = tree->GetBranch("NLGen0");
  if (NLGen0_branch) NLGen0_branch->SetAddress(&NLGen0_);
  NLGen1_branch = tree->GetBranch("NLGen1");
  if (NLGen1_branch) NLGen1_branch->SetAddress(&NLGen1_);
  NLGen2_branch = tree->GetBranch("NLGen2");
  if (NLGen2_branch) NLGen2_branch->SetAddress(&NLGen2_);
  NLGen3_branch = tree->GetBranch("NLGen3");
  if (NLGen3_branch) NLGen3_branch->SetAddress(&NLGen3_);
  NLGen4_branch = tree->GetBranch("NLGen4");
  if (NLGen4_branch) NLGen4_branch->SetAddress(&NLGen4_);
  NiFJ_branch = tree->GetBranch("NiFJ");
  if (NiFJ_branch) NiFJ_branch->SetAddress(&NiFJ_);
  iVMD0_branch = tree->GetBranch("iVMD0");
  if (iVMD0_branch) iVMD0_branch->SetAddress(&iVMD0_);
  iVMD1_branch = tree->GetBranch("iVMD1");
  if (iVMD1_branch) iVMD1_branch->SetAddress(&iVMD1_);
  iVMD2_branch = tree->GetBranch("iVMD2");
  if (iVMD2_branch) iVMD2_branch->SetAddress(&iVMD2_);
  iVMD3_branch = tree->GetBranch("iVMD3");
  if (iVMD3_branch) iVMD3_branch->SetAddress(&iVMD3_);
  iVMD4_branch = tree->GetBranch("iVMD4");
  if (iVMD4_branch) iVMD4_branch->SetAddress(&iVMD4_);
  iWMD0_branch = tree->GetBranch("iWMD0");
  if (iWMD0_branch) iWMD0_branch->SetAddress(&iWMD0_);
  iWMD1_branch = tree->GetBranch("iWMD1");
  if (iWMD1_branch) iWMD1_branch->SetAddress(&iWMD1_);
  iWMD2_branch = tree->GetBranch("iWMD2");
  if (iWMD2_branch) iWMD2_branch->SetAddress(&iWMD2_);
  iWMD3_branch = tree->GetBranch("iWMD3");
  if (iWMD3_branch) iWMD3_branch->SetAddress(&iWMD3_);
  iWMD4_branch = tree->GetBranch("iWMD4");
  if (iWMD4_branch) iWMD4_branch->SetAddress(&iWMD4_);
  NJ_branch = tree->GetBranch("NJ");
  if (NJ_branch) NJ_branch->SetAddress(&NJ_);
  NbLoose_branch = tree->GetBranch("NbLoose");
  if (NbLoose_branch) NbLoose_branch->SetAddress(&NbLoose_);
  NbMedium_branch = tree->GetBranch("NbMedium");
  if (NbMedium_branch) NbMedium_branch->SetAddress(&NbMedium_);
  NbTight_branch = tree->GetBranch("NbTight");
  if (NbTight_branch) NbTight_branch->SetAddress(&NbTight_);
  NoORNbLoose_branch = tree->GetBranch("NoORNbLoose");
  if (NoORNbLoose_branch) NoORNbLoose_branch->SetAddress(&NoORNbLoose_);
  NoORNbMedium_branch = tree->GetBranch("NoORNbMedium");
  if (NoORNbMedium_branch) NoORNbMedium_branch->SetAddress(&NoORNbMedium_);
  NoORNbTight_branch = tree->GetBranch("NoORNbTight");
  if (NoORNbTight_branch) NoORNbTight_branch->SetAddress(&NoORNbTight_);
  MVVX_branch = tree->GetBranch("MVVX");
  if (MVVX_branch) MVVX_branch->SetAddress(&MVVX_);
  PtVVX_branch = tree->GetBranch("PtVVX");
  if (PtVVX_branch) PtVVX_branch->SetAddress(&PtVVX_);
  HT_branch = tree->GetBranch("HT");
  if (HT_branch) HT_branch->SetAddress(&HT_);
  HTJ_branch = tree->GetBranch("HTJ");
  if (HTJ_branch) HTJ_branch->SetAddress(&HTJ_);
  HTFJ_branch = tree->GetBranch("HTFJ");
  if (HTFJ_branch) HTFJ_branch->SetAddress(&HTFJ_);
  SumPtFJ_branch = tree->GetBranch("SumPtFJ");
  if (SumPtFJ_branch) SumPtFJ_branch->SetAddress(&SumPtFJ_);
  SumPtJ_branch = tree->GetBranch("SumPtJ");
  if (SumPtJ_branch) SumPtJ_branch->SetAddress(&SumPtJ_);
  NFJJESUp_branch = tree->GetBranch("NFJJESUp");
  if (NFJJESUp_branch) NFJJESUp_branch->SetAddress(&NFJJESUp_);
  VMD0JESUp_branch = tree->GetBranch("VMD0JESUp");
  if (VMD0JESUp_branch) VMD0JESUp_branch->SetAddress(&VMD0JESUp_);
  VMD1JESUp_branch = tree->GetBranch("VMD1JESUp");
  if (VMD1JESUp_branch) VMD1JESUp_branch->SetAddress(&VMD1JESUp_);
  VMD2JESUp_branch = tree->GetBranch("VMD2JESUp");
  if (VMD2JESUp_branch) VMD2JESUp_branch->SetAddress(&VMD2JESUp_);
  VMD3JESUp_branch = tree->GetBranch("VMD3JESUp");
  if (VMD3JESUp_branch) VMD3JESUp_branch->SetAddress(&VMD3JESUp_);
  VMD4JESUp_branch = tree->GetBranch("VMD4JESUp");
  if (VMD4JESUp_branch) VMD4JESUp_branch->SetAddress(&VMD4JESUp_);
  WMD0JESUp_branch = tree->GetBranch("WMD0JESUp");
  if (WMD0JESUp_branch) WMD0JESUp_branch->SetAddress(&WMD0JESUp_);
  WMD1JESUp_branch = tree->GetBranch("WMD1JESUp");
  if (WMD1JESUp_branch) WMD1JESUp_branch->SetAddress(&WMD1JESUp_);
  WMD2JESUp_branch = tree->GetBranch("WMD2JESUp");
  if (WMD2JESUp_branch) WMD2JESUp_branch->SetAddress(&WMD2JESUp_);
  WMD3JESUp_branch = tree->GetBranch("WMD3JESUp");
  if (WMD3JESUp_branch) WMD3JESUp_branch->SetAddress(&WMD3JESUp_);
  WMD4JESUp_branch = tree->GetBranch("WMD4JESUp");
  if (WMD4JESUp_branch) WMD4JESUp_branch->SetAddress(&WMD4JESUp_);
  NQGen0JESUp_branch = tree->GetBranch("NQGen0JESUp");
  if (NQGen0JESUp_branch) NQGen0JESUp_branch->SetAddress(&NQGen0JESUp_);
  NQGen1JESUp_branch = tree->GetBranch("NQGen1JESUp");
  if (NQGen1JESUp_branch) NQGen1JESUp_branch->SetAddress(&NQGen1JESUp_);
  NQGen2JESUp_branch = tree->GetBranch("NQGen2JESUp");
  if (NQGen2JESUp_branch) NQGen2JESUp_branch->SetAddress(&NQGen2JESUp_);
  NQGen3JESUp_branch = tree->GetBranch("NQGen3JESUp");
  if (NQGen3JESUp_branch) NQGen3JESUp_branch->SetAddress(&NQGen3JESUp_);
  NQGen4JESUp_branch = tree->GetBranch("NQGen4JESUp");
  if (NQGen4JESUp_branch) NQGen4JESUp_branch->SetAddress(&NQGen4JESUp_);
  NBGen0JESUp_branch = tree->GetBranch("NBGen0JESUp");
  if (NBGen0JESUp_branch) NBGen0JESUp_branch->SetAddress(&NBGen0JESUp_);
  NBGen1JESUp_branch = tree->GetBranch("NBGen1JESUp");
  if (NBGen1JESUp_branch) NBGen1JESUp_branch->SetAddress(&NBGen1JESUp_);
  NBGen2JESUp_branch = tree->GetBranch("NBGen2JESUp");
  if (NBGen2JESUp_branch) NBGen2JESUp_branch->SetAddress(&NBGen2JESUp_);
  NBGen3JESUp_branch = tree->GetBranch("NBGen3JESUp");
  if (NBGen3JESUp_branch) NBGen3JESUp_branch->SetAddress(&NBGen3JESUp_);
  NBGen4JESUp_branch = tree->GetBranch("NBGen4JESUp");
  if (NBGen4JESUp_branch) NBGen4JESUp_branch->SetAddress(&NBGen4JESUp_);
  NLGen0JESUp_branch = tree->GetBranch("NLGen0JESUp");
  if (NLGen0JESUp_branch) NLGen0JESUp_branch->SetAddress(&NLGen0JESUp_);
  NLGen1JESUp_branch = tree->GetBranch("NLGen1JESUp");
  if (NLGen1JESUp_branch) NLGen1JESUp_branch->SetAddress(&NLGen1JESUp_);
  NLGen2JESUp_branch = tree->GetBranch("NLGen2JESUp");
  if (NLGen2JESUp_branch) NLGen2JESUp_branch->SetAddress(&NLGen2JESUp_);
  NLGen3JESUp_branch = tree->GetBranch("NLGen3JESUp");
  if (NLGen3JESUp_branch) NLGen3JESUp_branch->SetAddress(&NLGen3JESUp_);
  NLGen4JESUp_branch = tree->GetBranch("NLGen4JESUp");
  if (NLGen4JESUp_branch) NLGen4JESUp_branch->SetAddress(&NLGen4JESUp_);
  NiFJJESUp_branch = tree->GetBranch("NiFJJESUp");
  if (NiFJJESUp_branch) NiFJJESUp_branch->SetAddress(&NiFJJESUp_);
  iVMD0JESUp_branch = tree->GetBranch("iVMD0JESUp");
  if (iVMD0JESUp_branch) iVMD0JESUp_branch->SetAddress(&iVMD0JESUp_);
  iVMD1JESUp_branch = tree->GetBranch("iVMD1JESUp");
  if (iVMD1JESUp_branch) iVMD1JESUp_branch->SetAddress(&iVMD1JESUp_);
  iVMD2JESUp_branch = tree->GetBranch("iVMD2JESUp");
  if (iVMD2JESUp_branch) iVMD2JESUp_branch->SetAddress(&iVMD2JESUp_);
  iVMD3JESUp_branch = tree->GetBranch("iVMD3JESUp");
  if (iVMD3JESUp_branch) iVMD3JESUp_branch->SetAddress(&iVMD3JESUp_);
  iVMD4JESUp_branch = tree->GetBranch("iVMD4JESUp");
  if (iVMD4JESUp_branch) iVMD4JESUp_branch->SetAddress(&iVMD4JESUp_);
  iWMD0JESUp_branch = tree->GetBranch("iWMD0JESUp");
  if (iWMD0JESUp_branch) iWMD0JESUp_branch->SetAddress(&iWMD0JESUp_);
  iWMD1JESUp_branch = tree->GetBranch("iWMD1JESUp");
  if (iWMD1JESUp_branch) iWMD1JESUp_branch->SetAddress(&iWMD1JESUp_);
  iWMD2JESUp_branch = tree->GetBranch("iWMD2JESUp");
  if (iWMD2JESUp_branch) iWMD2JESUp_branch->SetAddress(&iWMD2JESUp_);
  iWMD3JESUp_branch = tree->GetBranch("iWMD3JESUp");
  if (iWMD3JESUp_branch) iWMD3JESUp_branch->SetAddress(&iWMD3JESUp_);
  iWMD4JESUp_branch = tree->GetBranch("iWMD4JESUp");
  if (iWMD4JESUp_branch) iWMD4JESUp_branch->SetAddress(&iWMD4JESUp_);
  NJJESUp_branch = tree->GetBranch("NJJESUp");
  if (NJJESUp_branch) NJJESUp_branch->SetAddress(&NJJESUp_);
  NbLooseJESUp_branch = tree->GetBranch("NbLooseJESUp");
  if (NbLooseJESUp_branch) NbLooseJESUp_branch->SetAddress(&NbLooseJESUp_);
  NbMediumJESUp_branch = tree->GetBranch("NbMediumJESUp");
  if (NbMediumJESUp_branch) NbMediumJESUp_branch->SetAddress(&NbMediumJESUp_);
  NbTightJESUp_branch = tree->GetBranch("NbTightJESUp");
  if (NbTightJESUp_branch) NbTightJESUp_branch->SetAddress(&NbTightJESUp_);
  NoORNbLooseJESUp_branch = tree->GetBranch("NoORNbLooseJESUp");
  if (NoORNbLooseJESUp_branch) NoORNbLooseJESUp_branch->SetAddress(&NoORNbLooseJESUp_);
  NoORNbMediumJESUp_branch = tree->GetBranch("NoORNbMediumJESUp");
  if (NoORNbMediumJESUp_branch) NoORNbMediumJESUp_branch->SetAddress(&NoORNbMediumJESUp_);
  NoORNbTightJESUp_branch = tree->GetBranch("NoORNbTightJESUp");
  if (NoORNbTightJESUp_branch) NoORNbTightJESUp_branch->SetAddress(&NoORNbTightJESUp_);
  MVVXJESUp_branch = tree->GetBranch("MVVXJESUp");
  if (MVVXJESUp_branch) MVVXJESUp_branch->SetAddress(&MVVXJESUp_);
  PtVVXJESUp_branch = tree->GetBranch("PtVVXJESUp");
  if (PtVVXJESUp_branch) PtVVXJESUp_branch->SetAddress(&PtVVXJESUp_);
  HTJESUp_branch = tree->GetBranch("HTJESUp");
  if (HTJESUp_branch) HTJESUp_branch->SetAddress(&HTJESUp_);
  HTJJESUp_branch = tree->GetBranch("HTJJESUp");
  if (HTJJESUp_branch) HTJJESUp_branch->SetAddress(&HTJJESUp_);
  HTFJJESUp_branch = tree->GetBranch("HTFJJESUp");
  if (HTFJJESUp_branch) HTFJJESUp_branch->SetAddress(&HTFJJESUp_);
  SumPtFJJESUp_branch = tree->GetBranch("SumPtFJJESUp");
  if (SumPtFJJESUp_branch) SumPtFJJESUp_branch->SetAddress(&SumPtFJJESUp_);
  SumPtJJESUp_branch = tree->GetBranch("SumPtJJESUp");
  if (SumPtJJESUp_branch) SumPtJJESUp_branch->SetAddress(&SumPtJJESUp_);
  NFJJESDn_branch = tree->GetBranch("NFJJESDn");
  if (NFJJESDn_branch) NFJJESDn_branch->SetAddress(&NFJJESDn_);
  VMD0JESDn_branch = tree->GetBranch("VMD0JESDn");
  if (VMD0JESDn_branch) VMD0JESDn_branch->SetAddress(&VMD0JESDn_);
  VMD1JESDn_branch = tree->GetBranch("VMD1JESDn");
  if (VMD1JESDn_branch) VMD1JESDn_branch->SetAddress(&VMD1JESDn_);
  VMD2JESDn_branch = tree->GetBranch("VMD2JESDn");
  if (VMD2JESDn_branch) VMD2JESDn_branch->SetAddress(&VMD2JESDn_);
  VMD3JESDn_branch = tree->GetBranch("VMD3JESDn");
  if (VMD3JESDn_branch) VMD3JESDn_branch->SetAddress(&VMD3JESDn_);
  VMD4JESDn_branch = tree->GetBranch("VMD4JESDn");
  if (VMD4JESDn_branch) VMD4JESDn_branch->SetAddress(&VMD4JESDn_);
  WMD0JESDn_branch = tree->GetBranch("WMD0JESDn");
  if (WMD0JESDn_branch) WMD0JESDn_branch->SetAddress(&WMD0JESDn_);
  WMD1JESDn_branch = tree->GetBranch("WMD1JESDn");
  if (WMD1JESDn_branch) WMD1JESDn_branch->SetAddress(&WMD1JESDn_);
  WMD2JESDn_branch = tree->GetBranch("WMD2JESDn");
  if (WMD2JESDn_branch) WMD2JESDn_branch->SetAddress(&WMD2JESDn_);
  WMD3JESDn_branch = tree->GetBranch("WMD3JESDn");
  if (WMD3JESDn_branch) WMD3JESDn_branch->SetAddress(&WMD3JESDn_);
  WMD4JESDn_branch = tree->GetBranch("WMD4JESDn");
  if (WMD4JESDn_branch) WMD4JESDn_branch->SetAddress(&WMD4JESDn_);
  NQGen0JESDn_branch = tree->GetBranch("NQGen0JESDn");
  if (NQGen0JESDn_branch) NQGen0JESDn_branch->SetAddress(&NQGen0JESDn_);
  NQGen1JESDn_branch = tree->GetBranch("NQGen1JESDn");
  if (NQGen1JESDn_branch) NQGen1JESDn_branch->SetAddress(&NQGen1JESDn_);
  NQGen2JESDn_branch = tree->GetBranch("NQGen2JESDn");
  if (NQGen2JESDn_branch) NQGen2JESDn_branch->SetAddress(&NQGen2JESDn_);
  NQGen3JESDn_branch = tree->GetBranch("NQGen3JESDn");
  if (NQGen3JESDn_branch) NQGen3JESDn_branch->SetAddress(&NQGen3JESDn_);
  NQGen4JESDn_branch = tree->GetBranch("NQGen4JESDn");
  if (NQGen4JESDn_branch) NQGen4JESDn_branch->SetAddress(&NQGen4JESDn_);
  NBGen0JESDn_branch = tree->GetBranch("NBGen0JESDn");
  if (NBGen0JESDn_branch) NBGen0JESDn_branch->SetAddress(&NBGen0JESDn_);
  NBGen1JESDn_branch = tree->GetBranch("NBGen1JESDn");
  if (NBGen1JESDn_branch) NBGen1JESDn_branch->SetAddress(&NBGen1JESDn_);
  NBGen2JESDn_branch = tree->GetBranch("NBGen2JESDn");
  if (NBGen2JESDn_branch) NBGen2JESDn_branch->SetAddress(&NBGen2JESDn_);
  NBGen3JESDn_branch = tree->GetBranch("NBGen3JESDn");
  if (NBGen3JESDn_branch) NBGen3JESDn_branch->SetAddress(&NBGen3JESDn_);
  NBGen4JESDn_branch = tree->GetBranch("NBGen4JESDn");
  if (NBGen4JESDn_branch) NBGen4JESDn_branch->SetAddress(&NBGen4JESDn_);
  NLGen0JESDn_branch = tree->GetBranch("NLGen0JESDn");
  if (NLGen0JESDn_branch) NLGen0JESDn_branch->SetAddress(&NLGen0JESDn_);
  NLGen1JESDn_branch = tree->GetBranch("NLGen1JESDn");
  if (NLGen1JESDn_branch) NLGen1JESDn_branch->SetAddress(&NLGen1JESDn_);
  NLGen2JESDn_branch = tree->GetBranch("NLGen2JESDn");
  if (NLGen2JESDn_branch) NLGen2JESDn_branch->SetAddress(&NLGen2JESDn_);
  NLGen3JESDn_branch = tree->GetBranch("NLGen3JESDn");
  if (NLGen3JESDn_branch) NLGen3JESDn_branch->SetAddress(&NLGen3JESDn_);
  NLGen4JESDn_branch = tree->GetBranch("NLGen4JESDn");
  if (NLGen4JESDn_branch) NLGen4JESDn_branch->SetAddress(&NLGen4JESDn_);
  NiFJJESDn_branch = tree->GetBranch("NiFJJESDn");
  if (NiFJJESDn_branch) NiFJJESDn_branch->SetAddress(&NiFJJESDn_);
  iVMD0JESDn_branch = tree->GetBranch("iVMD0JESDn");
  if (iVMD0JESDn_branch) iVMD0JESDn_branch->SetAddress(&iVMD0JESDn_);
  iVMD1JESDn_branch = tree->GetBranch("iVMD1JESDn");
  if (iVMD1JESDn_branch) iVMD1JESDn_branch->SetAddress(&iVMD1JESDn_);
  iVMD2JESDn_branch = tree->GetBranch("iVMD2JESDn");
  if (iVMD2JESDn_branch) iVMD2JESDn_branch->SetAddress(&iVMD2JESDn_);
  iVMD3JESDn_branch = tree->GetBranch("iVMD3JESDn");
  if (iVMD3JESDn_branch) iVMD3JESDn_branch->SetAddress(&iVMD3JESDn_);
  iVMD4JESDn_branch = tree->GetBranch("iVMD4JESDn");
  if (iVMD4JESDn_branch) iVMD4JESDn_branch->SetAddress(&iVMD4JESDn_);
  iWMD0JESDn_branch = tree->GetBranch("iWMD0JESDn");
  if (iWMD0JESDn_branch) iWMD0JESDn_branch->SetAddress(&iWMD0JESDn_);
  iWMD1JESDn_branch = tree->GetBranch("iWMD1JESDn");
  if (iWMD1JESDn_branch) iWMD1JESDn_branch->SetAddress(&iWMD1JESDn_);
  iWMD2JESDn_branch = tree->GetBranch("iWMD2JESDn");
  if (iWMD2JESDn_branch) iWMD2JESDn_branch->SetAddress(&iWMD2JESDn_);
  iWMD3JESDn_branch = tree->GetBranch("iWMD3JESDn");
  if (iWMD3JESDn_branch) iWMD3JESDn_branch->SetAddress(&iWMD3JESDn_);
  iWMD4JESDn_branch = tree->GetBranch("iWMD4JESDn");
  if (iWMD4JESDn_branch) iWMD4JESDn_branch->SetAddress(&iWMD4JESDn_);
  NJJESDn_branch = tree->GetBranch("NJJESDn");
  if (NJJESDn_branch) NJJESDn_branch->SetAddress(&NJJESDn_);
  NbLooseJESDn_branch = tree->GetBranch("NbLooseJESDn");
  if (NbLooseJESDn_branch) NbLooseJESDn_branch->SetAddress(&NbLooseJESDn_);
  NbMediumJESDn_branch = tree->GetBranch("NbMediumJESDn");
  if (NbMediumJESDn_branch) NbMediumJESDn_branch->SetAddress(&NbMediumJESDn_);
  NbTightJESDn_branch = tree->GetBranch("NbTightJESDn");
  if (NbTightJESDn_branch) NbTightJESDn_branch->SetAddress(&NbTightJESDn_);
  NoORNbLooseJESDn_branch = tree->GetBranch("NoORNbLooseJESDn");
  if (NoORNbLooseJESDn_branch) NoORNbLooseJESDn_branch->SetAddress(&NoORNbLooseJESDn_);
  NoORNbMediumJESDn_branch = tree->GetBranch("NoORNbMediumJESDn");
  if (NoORNbMediumJESDn_branch) NoORNbMediumJESDn_branch->SetAddress(&NoORNbMediumJESDn_);
  NoORNbTightJESDn_branch = tree->GetBranch("NoORNbTightJESDn");
  if (NoORNbTightJESDn_branch) NoORNbTightJESDn_branch->SetAddress(&NoORNbTightJESDn_);
  MVVXJESDn_branch = tree->GetBranch("MVVXJESDn");
  if (MVVXJESDn_branch) MVVXJESDn_branch->SetAddress(&MVVXJESDn_);
  PtVVXJESDn_branch = tree->GetBranch("PtVVXJESDn");
  if (PtVVXJESDn_branch) PtVVXJESDn_branch->SetAddress(&PtVVXJESDn_);
  HTJESDn_branch = tree->GetBranch("HTJESDn");
  if (HTJESDn_branch) HTJESDn_branch->SetAddress(&HTJESDn_);
  HTJJESDn_branch = tree->GetBranch("HTJJESDn");
  if (HTJJESDn_branch) HTJJESDn_branch->SetAddress(&HTJJESDn_);
  HTFJJESDn_branch = tree->GetBranch("HTFJJESDn");
  if (HTFJJESDn_branch) HTFJJESDn_branch->SetAddress(&HTFJJESDn_);
  SumPtFJJESDn_branch = tree->GetBranch("SumPtFJJESDn");
  if (SumPtFJJESDn_branch) SumPtFJJESDn_branch->SetAddress(&SumPtFJJESDn_);
  SumPtJJESDn_branch = tree->GetBranch("SumPtJJESDn");
  if (SumPtJJESDn_branch) SumPtJJESDn_branch->SetAddress(&SumPtJJESDn_);
  NFJJERUp_branch = tree->GetBranch("NFJJERUp");
  if (NFJJERUp_branch) NFJJERUp_branch->SetAddress(&NFJJERUp_);
  VMD0JERUp_branch = tree->GetBranch("VMD0JERUp");
  if (VMD0JERUp_branch) VMD0JERUp_branch->SetAddress(&VMD0JERUp_);
  VMD1JERUp_branch = tree->GetBranch("VMD1JERUp");
  if (VMD1JERUp_branch) VMD1JERUp_branch->SetAddress(&VMD1JERUp_);
  VMD2JERUp_branch = tree->GetBranch("VMD2JERUp");
  if (VMD2JERUp_branch) VMD2JERUp_branch->SetAddress(&VMD2JERUp_);
  VMD3JERUp_branch = tree->GetBranch("VMD3JERUp");
  if (VMD3JERUp_branch) VMD3JERUp_branch->SetAddress(&VMD3JERUp_);
  VMD4JERUp_branch = tree->GetBranch("VMD4JERUp");
  if (VMD4JERUp_branch) VMD4JERUp_branch->SetAddress(&VMD4JERUp_);
  WMD0JERUp_branch = tree->GetBranch("WMD0JERUp");
  if (WMD0JERUp_branch) WMD0JERUp_branch->SetAddress(&WMD0JERUp_);
  WMD1JERUp_branch = tree->GetBranch("WMD1JERUp");
  if (WMD1JERUp_branch) WMD1JERUp_branch->SetAddress(&WMD1JERUp_);
  WMD2JERUp_branch = tree->GetBranch("WMD2JERUp");
  if (WMD2JERUp_branch) WMD2JERUp_branch->SetAddress(&WMD2JERUp_);
  WMD3JERUp_branch = tree->GetBranch("WMD3JERUp");
  if (WMD3JERUp_branch) WMD3JERUp_branch->SetAddress(&WMD3JERUp_);
  WMD4JERUp_branch = tree->GetBranch("WMD4JERUp");
  if (WMD4JERUp_branch) WMD4JERUp_branch->SetAddress(&WMD4JERUp_);
  NQGen0JERUp_branch = tree->GetBranch("NQGen0JERUp");
  if (NQGen0JERUp_branch) NQGen0JERUp_branch->SetAddress(&NQGen0JERUp_);
  NQGen1JERUp_branch = tree->GetBranch("NQGen1JERUp");
  if (NQGen1JERUp_branch) NQGen1JERUp_branch->SetAddress(&NQGen1JERUp_);
  NQGen2JERUp_branch = tree->GetBranch("NQGen2JERUp");
  if (NQGen2JERUp_branch) NQGen2JERUp_branch->SetAddress(&NQGen2JERUp_);
  NQGen3JERUp_branch = tree->GetBranch("NQGen3JERUp");
  if (NQGen3JERUp_branch) NQGen3JERUp_branch->SetAddress(&NQGen3JERUp_);
  NQGen4JERUp_branch = tree->GetBranch("NQGen4JERUp");
  if (NQGen4JERUp_branch) NQGen4JERUp_branch->SetAddress(&NQGen4JERUp_);
  NBGen0JERUp_branch = tree->GetBranch("NBGen0JERUp");
  if (NBGen0JERUp_branch) NBGen0JERUp_branch->SetAddress(&NBGen0JERUp_);
  NBGen1JERUp_branch = tree->GetBranch("NBGen1JERUp");
  if (NBGen1JERUp_branch) NBGen1JERUp_branch->SetAddress(&NBGen1JERUp_);
  NBGen2JERUp_branch = tree->GetBranch("NBGen2JERUp");
  if (NBGen2JERUp_branch) NBGen2JERUp_branch->SetAddress(&NBGen2JERUp_);
  NBGen3JERUp_branch = tree->GetBranch("NBGen3JERUp");
  if (NBGen3JERUp_branch) NBGen3JERUp_branch->SetAddress(&NBGen3JERUp_);
  NBGen4JERUp_branch = tree->GetBranch("NBGen4JERUp");
  if (NBGen4JERUp_branch) NBGen4JERUp_branch->SetAddress(&NBGen4JERUp_);
  NLGen0JERUp_branch = tree->GetBranch("NLGen0JERUp");
  if (NLGen0JERUp_branch) NLGen0JERUp_branch->SetAddress(&NLGen0JERUp_);
  NLGen1JERUp_branch = tree->GetBranch("NLGen1JERUp");
  if (NLGen1JERUp_branch) NLGen1JERUp_branch->SetAddress(&NLGen1JERUp_);
  NLGen2JERUp_branch = tree->GetBranch("NLGen2JERUp");
  if (NLGen2JERUp_branch) NLGen2JERUp_branch->SetAddress(&NLGen2JERUp_);
  NLGen3JERUp_branch = tree->GetBranch("NLGen3JERUp");
  if (NLGen3JERUp_branch) NLGen3JERUp_branch->SetAddress(&NLGen3JERUp_);
  NLGen4JERUp_branch = tree->GetBranch("NLGen4JERUp");
  if (NLGen4JERUp_branch) NLGen4JERUp_branch->SetAddress(&NLGen4JERUp_);
  NiFJJERUp_branch = tree->GetBranch("NiFJJERUp");
  if (NiFJJERUp_branch) NiFJJERUp_branch->SetAddress(&NiFJJERUp_);
  iVMD0JERUp_branch = tree->GetBranch("iVMD0JERUp");
  if (iVMD0JERUp_branch) iVMD0JERUp_branch->SetAddress(&iVMD0JERUp_);
  iVMD1JERUp_branch = tree->GetBranch("iVMD1JERUp");
  if (iVMD1JERUp_branch) iVMD1JERUp_branch->SetAddress(&iVMD1JERUp_);
  iVMD2JERUp_branch = tree->GetBranch("iVMD2JERUp");
  if (iVMD2JERUp_branch) iVMD2JERUp_branch->SetAddress(&iVMD2JERUp_);
  iVMD3JERUp_branch = tree->GetBranch("iVMD3JERUp");
  if (iVMD3JERUp_branch) iVMD3JERUp_branch->SetAddress(&iVMD3JERUp_);
  iVMD4JERUp_branch = tree->GetBranch("iVMD4JERUp");
  if (iVMD4JERUp_branch) iVMD4JERUp_branch->SetAddress(&iVMD4JERUp_);
  iWMD0JERUp_branch = tree->GetBranch("iWMD0JERUp");
  if (iWMD0JERUp_branch) iWMD0JERUp_branch->SetAddress(&iWMD0JERUp_);
  iWMD1JERUp_branch = tree->GetBranch("iWMD1JERUp");
  if (iWMD1JERUp_branch) iWMD1JERUp_branch->SetAddress(&iWMD1JERUp_);
  iWMD2JERUp_branch = tree->GetBranch("iWMD2JERUp");
  if (iWMD2JERUp_branch) iWMD2JERUp_branch->SetAddress(&iWMD2JERUp_);
  iWMD3JERUp_branch = tree->GetBranch("iWMD3JERUp");
  if (iWMD3JERUp_branch) iWMD3JERUp_branch->SetAddress(&iWMD3JERUp_);
  iWMD4JERUp_branch = tree->GetBranch("iWMD4JERUp");
  if (iWMD4JERUp_branch) iWMD4JERUp_branch->SetAddress(&iWMD4JERUp_);
  NJJERUp_branch = tree->GetBranch("NJJERUp");
  if (NJJERUp_branch) NJJERUp_branch->SetAddress(&NJJERUp_);
  NbLooseJERUp_branch = tree->GetBranch("NbLooseJERUp");
  if (NbLooseJERUp_branch) NbLooseJERUp_branch->SetAddress(&NbLooseJERUp_);
  NbMediumJERUp_branch = tree->GetBranch("NbMediumJERUp");
  if (NbMediumJERUp_branch) NbMediumJERUp_branch->SetAddress(&NbMediumJERUp_);
  NbTightJERUp_branch = tree->GetBranch("NbTightJERUp");
  if (NbTightJERUp_branch) NbTightJERUp_branch->SetAddress(&NbTightJERUp_);
  NoORNbLooseJERUp_branch = tree->GetBranch("NoORNbLooseJERUp");
  if (NoORNbLooseJERUp_branch) NoORNbLooseJERUp_branch->SetAddress(&NoORNbLooseJERUp_);
  NoORNbMediumJERUp_branch = tree->GetBranch("NoORNbMediumJERUp");
  if (NoORNbMediumJERUp_branch) NoORNbMediumJERUp_branch->SetAddress(&NoORNbMediumJERUp_);
  NoORNbTightJERUp_branch = tree->GetBranch("NoORNbTightJERUp");
  if (NoORNbTightJERUp_branch) NoORNbTightJERUp_branch->SetAddress(&NoORNbTightJERUp_);
  MVVXJERUp_branch = tree->GetBranch("MVVXJERUp");
  if (MVVXJERUp_branch) MVVXJERUp_branch->SetAddress(&MVVXJERUp_);
  PtVVXJERUp_branch = tree->GetBranch("PtVVXJERUp");
  if (PtVVXJERUp_branch) PtVVXJERUp_branch->SetAddress(&PtVVXJERUp_);
  HTJERUp_branch = tree->GetBranch("HTJERUp");
  if (HTJERUp_branch) HTJERUp_branch->SetAddress(&HTJERUp_);
  HTJJERUp_branch = tree->GetBranch("HTJJERUp");
  if (HTJJERUp_branch) HTJJERUp_branch->SetAddress(&HTJJERUp_);
  HTFJJERUp_branch = tree->GetBranch("HTFJJERUp");
  if (HTFJJERUp_branch) HTFJJERUp_branch->SetAddress(&HTFJJERUp_);
  SumPtFJJERUp_branch = tree->GetBranch("SumPtFJJERUp");
  if (SumPtFJJERUp_branch) SumPtFJJERUp_branch->SetAddress(&SumPtFJJERUp_);
  SumPtJJERUp_branch = tree->GetBranch("SumPtJJERUp");
  if (SumPtJJERUp_branch) SumPtJJERUp_branch->SetAddress(&SumPtJJERUp_);
  NFJJERDn_branch = tree->GetBranch("NFJJERDn");
  if (NFJJERDn_branch) NFJJERDn_branch->SetAddress(&NFJJERDn_);
  VMD0JERDn_branch = tree->GetBranch("VMD0JERDn");
  if (VMD0JERDn_branch) VMD0JERDn_branch->SetAddress(&VMD0JERDn_);
  VMD1JERDn_branch = tree->GetBranch("VMD1JERDn");
  if (VMD1JERDn_branch) VMD1JERDn_branch->SetAddress(&VMD1JERDn_);
  VMD2JERDn_branch = tree->GetBranch("VMD2JERDn");
  if (VMD2JERDn_branch) VMD2JERDn_branch->SetAddress(&VMD2JERDn_);
  VMD3JERDn_branch = tree->GetBranch("VMD3JERDn");
  if (VMD3JERDn_branch) VMD3JERDn_branch->SetAddress(&VMD3JERDn_);
  VMD4JERDn_branch = tree->GetBranch("VMD4JERDn");
  if (VMD4JERDn_branch) VMD4JERDn_branch->SetAddress(&VMD4JERDn_);
  WMD0JERDn_branch = tree->GetBranch("WMD0JERDn");
  if (WMD0JERDn_branch) WMD0JERDn_branch->SetAddress(&WMD0JERDn_);
  WMD1JERDn_branch = tree->GetBranch("WMD1JERDn");
  if (WMD1JERDn_branch) WMD1JERDn_branch->SetAddress(&WMD1JERDn_);
  WMD2JERDn_branch = tree->GetBranch("WMD2JERDn");
  if (WMD2JERDn_branch) WMD2JERDn_branch->SetAddress(&WMD2JERDn_);
  WMD3JERDn_branch = tree->GetBranch("WMD3JERDn");
  if (WMD3JERDn_branch) WMD3JERDn_branch->SetAddress(&WMD3JERDn_);
  WMD4JERDn_branch = tree->GetBranch("WMD4JERDn");
  if (WMD4JERDn_branch) WMD4JERDn_branch->SetAddress(&WMD4JERDn_);
  NQGen0JERDn_branch = tree->GetBranch("NQGen0JERDn");
  if (NQGen0JERDn_branch) NQGen0JERDn_branch->SetAddress(&NQGen0JERDn_);
  NQGen1JERDn_branch = tree->GetBranch("NQGen1JERDn");
  if (NQGen1JERDn_branch) NQGen1JERDn_branch->SetAddress(&NQGen1JERDn_);
  NQGen2JERDn_branch = tree->GetBranch("NQGen2JERDn");
  if (NQGen2JERDn_branch) NQGen2JERDn_branch->SetAddress(&NQGen2JERDn_);
  NQGen3JERDn_branch = tree->GetBranch("NQGen3JERDn");
  if (NQGen3JERDn_branch) NQGen3JERDn_branch->SetAddress(&NQGen3JERDn_);
  NQGen4JERDn_branch = tree->GetBranch("NQGen4JERDn");
  if (NQGen4JERDn_branch) NQGen4JERDn_branch->SetAddress(&NQGen4JERDn_);
  NBGen0JERDn_branch = tree->GetBranch("NBGen0JERDn");
  if (NBGen0JERDn_branch) NBGen0JERDn_branch->SetAddress(&NBGen0JERDn_);
  NBGen1JERDn_branch = tree->GetBranch("NBGen1JERDn");
  if (NBGen1JERDn_branch) NBGen1JERDn_branch->SetAddress(&NBGen1JERDn_);
  NBGen2JERDn_branch = tree->GetBranch("NBGen2JERDn");
  if (NBGen2JERDn_branch) NBGen2JERDn_branch->SetAddress(&NBGen2JERDn_);
  NBGen3JERDn_branch = tree->GetBranch("NBGen3JERDn");
  if (NBGen3JERDn_branch) NBGen3JERDn_branch->SetAddress(&NBGen3JERDn_);
  NBGen4JERDn_branch = tree->GetBranch("NBGen4JERDn");
  if (NBGen4JERDn_branch) NBGen4JERDn_branch->SetAddress(&NBGen4JERDn_);
  NLGen0JERDn_branch = tree->GetBranch("NLGen0JERDn");
  if (NLGen0JERDn_branch) NLGen0JERDn_branch->SetAddress(&NLGen0JERDn_);
  NLGen1JERDn_branch = tree->GetBranch("NLGen1JERDn");
  if (NLGen1JERDn_branch) NLGen1JERDn_branch->SetAddress(&NLGen1JERDn_);
  NLGen2JERDn_branch = tree->GetBranch("NLGen2JERDn");
  if (NLGen2JERDn_branch) NLGen2JERDn_branch->SetAddress(&NLGen2JERDn_);
  NLGen3JERDn_branch = tree->GetBranch("NLGen3JERDn");
  if (NLGen3JERDn_branch) NLGen3JERDn_branch->SetAddress(&NLGen3JERDn_);
  NLGen4JERDn_branch = tree->GetBranch("NLGen4JERDn");
  if (NLGen4JERDn_branch) NLGen4JERDn_branch->SetAddress(&NLGen4JERDn_);
  NiFJJERDn_branch = tree->GetBranch("NiFJJERDn");
  if (NiFJJERDn_branch) NiFJJERDn_branch->SetAddress(&NiFJJERDn_);
  iVMD0JERDn_branch = tree->GetBranch("iVMD0JERDn");
  if (iVMD0JERDn_branch) iVMD0JERDn_branch->SetAddress(&iVMD0JERDn_);
  iVMD1JERDn_branch = tree->GetBranch("iVMD1JERDn");
  if (iVMD1JERDn_branch) iVMD1JERDn_branch->SetAddress(&iVMD1JERDn_);
  iVMD2JERDn_branch = tree->GetBranch("iVMD2JERDn");
  if (iVMD2JERDn_branch) iVMD2JERDn_branch->SetAddress(&iVMD2JERDn_);
  iVMD3JERDn_branch = tree->GetBranch("iVMD3JERDn");
  if (iVMD3JERDn_branch) iVMD3JERDn_branch->SetAddress(&iVMD3JERDn_);
  iVMD4JERDn_branch = tree->GetBranch("iVMD4JERDn");
  if (iVMD4JERDn_branch) iVMD4JERDn_branch->SetAddress(&iVMD4JERDn_);
  iWMD0JERDn_branch = tree->GetBranch("iWMD0JERDn");
  if (iWMD0JERDn_branch) iWMD0JERDn_branch->SetAddress(&iWMD0JERDn_);
  iWMD1JERDn_branch = tree->GetBranch("iWMD1JERDn");
  if (iWMD1JERDn_branch) iWMD1JERDn_branch->SetAddress(&iWMD1JERDn_);
  iWMD2JERDn_branch = tree->GetBranch("iWMD2JERDn");
  if (iWMD2JERDn_branch) iWMD2JERDn_branch->SetAddress(&iWMD2JERDn_);
  iWMD3JERDn_branch = tree->GetBranch("iWMD3JERDn");
  if (iWMD3JERDn_branch) iWMD3JERDn_branch->SetAddress(&iWMD3JERDn_);
  iWMD4JERDn_branch = tree->GetBranch("iWMD4JERDn");
  if (iWMD4JERDn_branch) iWMD4JERDn_branch->SetAddress(&iWMD4JERDn_);
  NJJERDn_branch = tree->GetBranch("NJJERDn");
  if (NJJERDn_branch) NJJERDn_branch->SetAddress(&NJJERDn_);
  NbLooseJERDn_branch = tree->GetBranch("NbLooseJERDn");
  if (NbLooseJERDn_branch) NbLooseJERDn_branch->SetAddress(&NbLooseJERDn_);
  NbMediumJERDn_branch = tree->GetBranch("NbMediumJERDn");
  if (NbMediumJERDn_branch) NbMediumJERDn_branch->SetAddress(&NbMediumJERDn_);
  NbTightJERDn_branch = tree->GetBranch("NbTightJERDn");
  if (NbTightJERDn_branch) NbTightJERDn_branch->SetAddress(&NbTightJERDn_);
  NoORNbLooseJERDn_branch = tree->GetBranch("NoORNbLooseJERDn");
  if (NoORNbLooseJERDn_branch) NoORNbLooseJERDn_branch->SetAddress(&NoORNbLooseJERDn_);
  NoORNbMediumJERDn_branch = tree->GetBranch("NoORNbMediumJERDn");
  if (NoORNbMediumJERDn_branch) NoORNbMediumJERDn_branch->SetAddress(&NoORNbMediumJERDn_);
  NoORNbTightJERDn_branch = tree->GetBranch("NoORNbTightJERDn");
  if (NoORNbTightJERDn_branch) NoORNbTightJERDn_branch->SetAddress(&NoORNbTightJERDn_);
  MVVXJERDn_branch = tree->GetBranch("MVVXJERDn");
  if (MVVXJERDn_branch) MVVXJERDn_branch->SetAddress(&MVVXJERDn_);
  PtVVXJERDn_branch = tree->GetBranch("PtVVXJERDn");
  if (PtVVXJERDn_branch) PtVVXJERDn_branch->SetAddress(&PtVVXJERDn_);
  HTJERDn_branch = tree->GetBranch("HTJERDn");
  if (HTJERDn_branch) HTJERDn_branch->SetAddress(&HTJERDn_);
  HTJJERDn_branch = tree->GetBranch("HTJJERDn");
  if (HTJJERDn_branch) HTJJERDn_branch->SetAddress(&HTJJERDn_);
  HTFJJERDn_branch = tree->GetBranch("HTFJJERDn");
  if (HTFJJERDn_branch) HTFJJERDn_branch->SetAddress(&HTFJJERDn_);
  SumPtFJJERDn_branch = tree->GetBranch("SumPtFJJERDn");
  if (SumPtFJJERDn_branch) SumPtFJJERDn_branch->SetAddress(&SumPtFJJERDn_);
  SumPtJJERDn_branch = tree->GetBranch("SumPtJJERDn");
  if (SumPtJJERDn_branch) SumPtJJERDn_branch->SetAddress(&SumPtJJERDn_);
  NFJJMSUp_branch = tree->GetBranch("NFJJMSUp");
  if (NFJJMSUp_branch) NFJJMSUp_branch->SetAddress(&NFJJMSUp_);
  VMD0JMSUp_branch = tree->GetBranch("VMD0JMSUp");
  if (VMD0JMSUp_branch) VMD0JMSUp_branch->SetAddress(&VMD0JMSUp_);
  VMD1JMSUp_branch = tree->GetBranch("VMD1JMSUp");
  if (VMD1JMSUp_branch) VMD1JMSUp_branch->SetAddress(&VMD1JMSUp_);
  VMD2JMSUp_branch = tree->GetBranch("VMD2JMSUp");
  if (VMD2JMSUp_branch) VMD2JMSUp_branch->SetAddress(&VMD2JMSUp_);
  VMD3JMSUp_branch = tree->GetBranch("VMD3JMSUp");
  if (VMD3JMSUp_branch) VMD3JMSUp_branch->SetAddress(&VMD3JMSUp_);
  VMD4JMSUp_branch = tree->GetBranch("VMD4JMSUp");
  if (VMD4JMSUp_branch) VMD4JMSUp_branch->SetAddress(&VMD4JMSUp_);
  WMD0JMSUp_branch = tree->GetBranch("WMD0JMSUp");
  if (WMD0JMSUp_branch) WMD0JMSUp_branch->SetAddress(&WMD0JMSUp_);
  WMD1JMSUp_branch = tree->GetBranch("WMD1JMSUp");
  if (WMD1JMSUp_branch) WMD1JMSUp_branch->SetAddress(&WMD1JMSUp_);
  WMD2JMSUp_branch = tree->GetBranch("WMD2JMSUp");
  if (WMD2JMSUp_branch) WMD2JMSUp_branch->SetAddress(&WMD2JMSUp_);
  WMD3JMSUp_branch = tree->GetBranch("WMD3JMSUp");
  if (WMD3JMSUp_branch) WMD3JMSUp_branch->SetAddress(&WMD3JMSUp_);
  WMD4JMSUp_branch = tree->GetBranch("WMD4JMSUp");
  if (WMD4JMSUp_branch) WMD4JMSUp_branch->SetAddress(&WMD4JMSUp_);
  NQGen0JMSUp_branch = tree->GetBranch("NQGen0JMSUp");
  if (NQGen0JMSUp_branch) NQGen0JMSUp_branch->SetAddress(&NQGen0JMSUp_);
  NQGen1JMSUp_branch = tree->GetBranch("NQGen1JMSUp");
  if (NQGen1JMSUp_branch) NQGen1JMSUp_branch->SetAddress(&NQGen1JMSUp_);
  NQGen2JMSUp_branch = tree->GetBranch("NQGen2JMSUp");
  if (NQGen2JMSUp_branch) NQGen2JMSUp_branch->SetAddress(&NQGen2JMSUp_);
  NQGen3JMSUp_branch = tree->GetBranch("NQGen3JMSUp");
  if (NQGen3JMSUp_branch) NQGen3JMSUp_branch->SetAddress(&NQGen3JMSUp_);
  NQGen4JMSUp_branch = tree->GetBranch("NQGen4JMSUp");
  if (NQGen4JMSUp_branch) NQGen4JMSUp_branch->SetAddress(&NQGen4JMSUp_);
  NBGen0JMSUp_branch = tree->GetBranch("NBGen0JMSUp");
  if (NBGen0JMSUp_branch) NBGen0JMSUp_branch->SetAddress(&NBGen0JMSUp_);
  NBGen1JMSUp_branch = tree->GetBranch("NBGen1JMSUp");
  if (NBGen1JMSUp_branch) NBGen1JMSUp_branch->SetAddress(&NBGen1JMSUp_);
  NBGen2JMSUp_branch = tree->GetBranch("NBGen2JMSUp");
  if (NBGen2JMSUp_branch) NBGen2JMSUp_branch->SetAddress(&NBGen2JMSUp_);
  NBGen3JMSUp_branch = tree->GetBranch("NBGen3JMSUp");
  if (NBGen3JMSUp_branch) NBGen3JMSUp_branch->SetAddress(&NBGen3JMSUp_);
  NBGen4JMSUp_branch = tree->GetBranch("NBGen4JMSUp");
  if (NBGen4JMSUp_branch) NBGen4JMSUp_branch->SetAddress(&NBGen4JMSUp_);
  NLGen0JMSUp_branch = tree->GetBranch("NLGen0JMSUp");
  if (NLGen0JMSUp_branch) NLGen0JMSUp_branch->SetAddress(&NLGen0JMSUp_);
  NLGen1JMSUp_branch = tree->GetBranch("NLGen1JMSUp");
  if (NLGen1JMSUp_branch) NLGen1JMSUp_branch->SetAddress(&NLGen1JMSUp_);
  NLGen2JMSUp_branch = tree->GetBranch("NLGen2JMSUp");
  if (NLGen2JMSUp_branch) NLGen2JMSUp_branch->SetAddress(&NLGen2JMSUp_);
  NLGen3JMSUp_branch = tree->GetBranch("NLGen3JMSUp");
  if (NLGen3JMSUp_branch) NLGen3JMSUp_branch->SetAddress(&NLGen3JMSUp_);
  NLGen4JMSUp_branch = tree->GetBranch("NLGen4JMSUp");
  if (NLGen4JMSUp_branch) NLGen4JMSUp_branch->SetAddress(&NLGen4JMSUp_);
  NiFJJMSUp_branch = tree->GetBranch("NiFJJMSUp");
  if (NiFJJMSUp_branch) NiFJJMSUp_branch->SetAddress(&NiFJJMSUp_);
  iVMD0JMSUp_branch = tree->GetBranch("iVMD0JMSUp");
  if (iVMD0JMSUp_branch) iVMD0JMSUp_branch->SetAddress(&iVMD0JMSUp_);
  iVMD1JMSUp_branch = tree->GetBranch("iVMD1JMSUp");
  if (iVMD1JMSUp_branch) iVMD1JMSUp_branch->SetAddress(&iVMD1JMSUp_);
  iVMD2JMSUp_branch = tree->GetBranch("iVMD2JMSUp");
  if (iVMD2JMSUp_branch) iVMD2JMSUp_branch->SetAddress(&iVMD2JMSUp_);
  iVMD3JMSUp_branch = tree->GetBranch("iVMD3JMSUp");
  if (iVMD3JMSUp_branch) iVMD3JMSUp_branch->SetAddress(&iVMD3JMSUp_);
  iVMD4JMSUp_branch = tree->GetBranch("iVMD4JMSUp");
  if (iVMD4JMSUp_branch) iVMD4JMSUp_branch->SetAddress(&iVMD4JMSUp_);
  iWMD0JMSUp_branch = tree->GetBranch("iWMD0JMSUp");
  if (iWMD0JMSUp_branch) iWMD0JMSUp_branch->SetAddress(&iWMD0JMSUp_);
  iWMD1JMSUp_branch = tree->GetBranch("iWMD1JMSUp");
  if (iWMD1JMSUp_branch) iWMD1JMSUp_branch->SetAddress(&iWMD1JMSUp_);
  iWMD2JMSUp_branch = tree->GetBranch("iWMD2JMSUp");
  if (iWMD2JMSUp_branch) iWMD2JMSUp_branch->SetAddress(&iWMD2JMSUp_);
  iWMD3JMSUp_branch = tree->GetBranch("iWMD3JMSUp");
  if (iWMD3JMSUp_branch) iWMD3JMSUp_branch->SetAddress(&iWMD3JMSUp_);
  iWMD4JMSUp_branch = tree->GetBranch("iWMD4JMSUp");
  if (iWMD4JMSUp_branch) iWMD4JMSUp_branch->SetAddress(&iWMD4JMSUp_);
  NJJMSUp_branch = tree->GetBranch("NJJMSUp");
  if (NJJMSUp_branch) NJJMSUp_branch->SetAddress(&NJJMSUp_);
  NbLooseJMSUp_branch = tree->GetBranch("NbLooseJMSUp");
  if (NbLooseJMSUp_branch) NbLooseJMSUp_branch->SetAddress(&NbLooseJMSUp_);
  NbMediumJMSUp_branch = tree->GetBranch("NbMediumJMSUp");
  if (NbMediumJMSUp_branch) NbMediumJMSUp_branch->SetAddress(&NbMediumJMSUp_);
  NbTightJMSUp_branch = tree->GetBranch("NbTightJMSUp");
  if (NbTightJMSUp_branch) NbTightJMSUp_branch->SetAddress(&NbTightJMSUp_);
  NoORNbLooseJMSUp_branch = tree->GetBranch("NoORNbLooseJMSUp");
  if (NoORNbLooseJMSUp_branch) NoORNbLooseJMSUp_branch->SetAddress(&NoORNbLooseJMSUp_);
  NoORNbMediumJMSUp_branch = tree->GetBranch("NoORNbMediumJMSUp");
  if (NoORNbMediumJMSUp_branch) NoORNbMediumJMSUp_branch->SetAddress(&NoORNbMediumJMSUp_);
  NoORNbTightJMSUp_branch = tree->GetBranch("NoORNbTightJMSUp");
  if (NoORNbTightJMSUp_branch) NoORNbTightJMSUp_branch->SetAddress(&NoORNbTightJMSUp_);
  MVVXJMSUp_branch = tree->GetBranch("MVVXJMSUp");
  if (MVVXJMSUp_branch) MVVXJMSUp_branch->SetAddress(&MVVXJMSUp_);
  PtVVXJMSUp_branch = tree->GetBranch("PtVVXJMSUp");
  if (PtVVXJMSUp_branch) PtVVXJMSUp_branch->SetAddress(&PtVVXJMSUp_);
  HTJMSUp_branch = tree->GetBranch("HTJMSUp");
  if (HTJMSUp_branch) HTJMSUp_branch->SetAddress(&HTJMSUp_);
  HTJJMSUp_branch = tree->GetBranch("HTJJMSUp");
  if (HTJJMSUp_branch) HTJJMSUp_branch->SetAddress(&HTJJMSUp_);
  HTFJJMSUp_branch = tree->GetBranch("HTFJJMSUp");
  if (HTFJJMSUp_branch) HTFJJMSUp_branch->SetAddress(&HTFJJMSUp_);
  SumPtFJJMSUp_branch = tree->GetBranch("SumPtFJJMSUp");
  if (SumPtFJJMSUp_branch) SumPtFJJMSUp_branch->SetAddress(&SumPtFJJMSUp_);
  SumPtJJMSUp_branch = tree->GetBranch("SumPtJJMSUp");
  if (SumPtJJMSUp_branch) SumPtJJMSUp_branch->SetAddress(&SumPtJJMSUp_);
  NFJJMSDn_branch = tree->GetBranch("NFJJMSDn");
  if (NFJJMSDn_branch) NFJJMSDn_branch->SetAddress(&NFJJMSDn_);
  VMD0JMSDn_branch = tree->GetBranch("VMD0JMSDn");
  if (VMD0JMSDn_branch) VMD0JMSDn_branch->SetAddress(&VMD0JMSDn_);
  VMD1JMSDn_branch = tree->GetBranch("VMD1JMSDn");
  if (VMD1JMSDn_branch) VMD1JMSDn_branch->SetAddress(&VMD1JMSDn_);
  VMD2JMSDn_branch = tree->GetBranch("VMD2JMSDn");
  if (VMD2JMSDn_branch) VMD2JMSDn_branch->SetAddress(&VMD2JMSDn_);
  VMD3JMSDn_branch = tree->GetBranch("VMD3JMSDn");
  if (VMD3JMSDn_branch) VMD3JMSDn_branch->SetAddress(&VMD3JMSDn_);
  VMD4JMSDn_branch = tree->GetBranch("VMD4JMSDn");
  if (VMD4JMSDn_branch) VMD4JMSDn_branch->SetAddress(&VMD4JMSDn_);
  WMD0JMSDn_branch = tree->GetBranch("WMD0JMSDn");
  if (WMD0JMSDn_branch) WMD0JMSDn_branch->SetAddress(&WMD0JMSDn_);
  WMD1JMSDn_branch = tree->GetBranch("WMD1JMSDn");
  if (WMD1JMSDn_branch) WMD1JMSDn_branch->SetAddress(&WMD1JMSDn_);
  WMD2JMSDn_branch = tree->GetBranch("WMD2JMSDn");
  if (WMD2JMSDn_branch) WMD2JMSDn_branch->SetAddress(&WMD2JMSDn_);
  WMD3JMSDn_branch = tree->GetBranch("WMD3JMSDn");
  if (WMD3JMSDn_branch) WMD3JMSDn_branch->SetAddress(&WMD3JMSDn_);
  WMD4JMSDn_branch = tree->GetBranch("WMD4JMSDn");
  if (WMD4JMSDn_branch) WMD4JMSDn_branch->SetAddress(&WMD4JMSDn_);
  NQGen0JMSDn_branch = tree->GetBranch("NQGen0JMSDn");
  if (NQGen0JMSDn_branch) NQGen0JMSDn_branch->SetAddress(&NQGen0JMSDn_);
  NQGen1JMSDn_branch = tree->GetBranch("NQGen1JMSDn");
  if (NQGen1JMSDn_branch) NQGen1JMSDn_branch->SetAddress(&NQGen1JMSDn_);
  NQGen2JMSDn_branch = tree->GetBranch("NQGen2JMSDn");
  if (NQGen2JMSDn_branch) NQGen2JMSDn_branch->SetAddress(&NQGen2JMSDn_);
  NQGen3JMSDn_branch = tree->GetBranch("NQGen3JMSDn");
  if (NQGen3JMSDn_branch) NQGen3JMSDn_branch->SetAddress(&NQGen3JMSDn_);
  NQGen4JMSDn_branch = tree->GetBranch("NQGen4JMSDn");
  if (NQGen4JMSDn_branch) NQGen4JMSDn_branch->SetAddress(&NQGen4JMSDn_);
  NBGen0JMSDn_branch = tree->GetBranch("NBGen0JMSDn");
  if (NBGen0JMSDn_branch) NBGen0JMSDn_branch->SetAddress(&NBGen0JMSDn_);
  NBGen1JMSDn_branch = tree->GetBranch("NBGen1JMSDn");
  if (NBGen1JMSDn_branch) NBGen1JMSDn_branch->SetAddress(&NBGen1JMSDn_);
  NBGen2JMSDn_branch = tree->GetBranch("NBGen2JMSDn");
  if (NBGen2JMSDn_branch) NBGen2JMSDn_branch->SetAddress(&NBGen2JMSDn_);
  NBGen3JMSDn_branch = tree->GetBranch("NBGen3JMSDn");
  if (NBGen3JMSDn_branch) NBGen3JMSDn_branch->SetAddress(&NBGen3JMSDn_);
  NBGen4JMSDn_branch = tree->GetBranch("NBGen4JMSDn");
  if (NBGen4JMSDn_branch) NBGen4JMSDn_branch->SetAddress(&NBGen4JMSDn_);
  NLGen0JMSDn_branch = tree->GetBranch("NLGen0JMSDn");
  if (NLGen0JMSDn_branch) NLGen0JMSDn_branch->SetAddress(&NLGen0JMSDn_);
  NLGen1JMSDn_branch = tree->GetBranch("NLGen1JMSDn");
  if (NLGen1JMSDn_branch) NLGen1JMSDn_branch->SetAddress(&NLGen1JMSDn_);
  NLGen2JMSDn_branch = tree->GetBranch("NLGen2JMSDn");
  if (NLGen2JMSDn_branch) NLGen2JMSDn_branch->SetAddress(&NLGen2JMSDn_);
  NLGen3JMSDn_branch = tree->GetBranch("NLGen3JMSDn");
  if (NLGen3JMSDn_branch) NLGen3JMSDn_branch->SetAddress(&NLGen3JMSDn_);
  NLGen4JMSDn_branch = tree->GetBranch("NLGen4JMSDn");
  if (NLGen4JMSDn_branch) NLGen4JMSDn_branch->SetAddress(&NLGen4JMSDn_);
  NiFJJMSDn_branch = tree->GetBranch("NiFJJMSDn");
  if (NiFJJMSDn_branch) NiFJJMSDn_branch->SetAddress(&NiFJJMSDn_);
  iVMD0JMSDn_branch = tree->GetBranch("iVMD0JMSDn");
  if (iVMD0JMSDn_branch) iVMD0JMSDn_branch->SetAddress(&iVMD0JMSDn_);
  iVMD1JMSDn_branch = tree->GetBranch("iVMD1JMSDn");
  if (iVMD1JMSDn_branch) iVMD1JMSDn_branch->SetAddress(&iVMD1JMSDn_);
  iVMD2JMSDn_branch = tree->GetBranch("iVMD2JMSDn");
  if (iVMD2JMSDn_branch) iVMD2JMSDn_branch->SetAddress(&iVMD2JMSDn_);
  iVMD3JMSDn_branch = tree->GetBranch("iVMD3JMSDn");
  if (iVMD3JMSDn_branch) iVMD3JMSDn_branch->SetAddress(&iVMD3JMSDn_);
  iVMD4JMSDn_branch = tree->GetBranch("iVMD4JMSDn");
  if (iVMD4JMSDn_branch) iVMD4JMSDn_branch->SetAddress(&iVMD4JMSDn_);
  iWMD0JMSDn_branch = tree->GetBranch("iWMD0JMSDn");
  if (iWMD0JMSDn_branch) iWMD0JMSDn_branch->SetAddress(&iWMD0JMSDn_);
  iWMD1JMSDn_branch = tree->GetBranch("iWMD1JMSDn");
  if (iWMD1JMSDn_branch) iWMD1JMSDn_branch->SetAddress(&iWMD1JMSDn_);
  iWMD2JMSDn_branch = tree->GetBranch("iWMD2JMSDn");
  if (iWMD2JMSDn_branch) iWMD2JMSDn_branch->SetAddress(&iWMD2JMSDn_);
  iWMD3JMSDn_branch = tree->GetBranch("iWMD3JMSDn");
  if (iWMD3JMSDn_branch) iWMD3JMSDn_branch->SetAddress(&iWMD3JMSDn_);
  iWMD4JMSDn_branch = tree->GetBranch("iWMD4JMSDn");
  if (iWMD4JMSDn_branch) iWMD4JMSDn_branch->SetAddress(&iWMD4JMSDn_);
  NJJMSDn_branch = tree->GetBranch("NJJMSDn");
  if (NJJMSDn_branch) NJJMSDn_branch->SetAddress(&NJJMSDn_);
  NbLooseJMSDn_branch = tree->GetBranch("NbLooseJMSDn");
  if (NbLooseJMSDn_branch) NbLooseJMSDn_branch->SetAddress(&NbLooseJMSDn_);
  NbMediumJMSDn_branch = tree->GetBranch("NbMediumJMSDn");
  if (NbMediumJMSDn_branch) NbMediumJMSDn_branch->SetAddress(&NbMediumJMSDn_);
  NbTightJMSDn_branch = tree->GetBranch("NbTightJMSDn");
  if (NbTightJMSDn_branch) NbTightJMSDn_branch->SetAddress(&NbTightJMSDn_);
  NoORNbLooseJMSDn_branch = tree->GetBranch("NoORNbLooseJMSDn");
  if (NoORNbLooseJMSDn_branch) NoORNbLooseJMSDn_branch->SetAddress(&NoORNbLooseJMSDn_);
  NoORNbMediumJMSDn_branch = tree->GetBranch("NoORNbMediumJMSDn");
  if (NoORNbMediumJMSDn_branch) NoORNbMediumJMSDn_branch->SetAddress(&NoORNbMediumJMSDn_);
  NoORNbTightJMSDn_branch = tree->GetBranch("NoORNbTightJMSDn");
  if (NoORNbTightJMSDn_branch) NoORNbTightJMSDn_branch->SetAddress(&NoORNbTightJMSDn_);
  MVVXJMSDn_branch = tree->GetBranch("MVVXJMSDn");
  if (MVVXJMSDn_branch) MVVXJMSDn_branch->SetAddress(&MVVXJMSDn_);
  PtVVXJMSDn_branch = tree->GetBranch("PtVVXJMSDn");
  if (PtVVXJMSDn_branch) PtVVXJMSDn_branch->SetAddress(&PtVVXJMSDn_);
  HTJMSDn_branch = tree->GetBranch("HTJMSDn");
  if (HTJMSDn_branch) HTJMSDn_branch->SetAddress(&HTJMSDn_);
  HTJJMSDn_branch = tree->GetBranch("HTJJMSDn");
  if (HTJJMSDn_branch) HTJJMSDn_branch->SetAddress(&HTJJMSDn_);
  HTFJJMSDn_branch = tree->GetBranch("HTFJJMSDn");
  if (HTFJJMSDn_branch) HTFJJMSDn_branch->SetAddress(&HTFJJMSDn_);
  SumPtFJJMSDn_branch = tree->GetBranch("SumPtFJJMSDn");
  if (SumPtFJJMSDn_branch) SumPtFJJMSDn_branch->SetAddress(&SumPtFJJMSDn_);
  SumPtJJMSDn_branch = tree->GetBranch("SumPtJJMSDn");
  if (SumPtJJMSDn_branch) SumPtJJMSDn_branch->SetAddress(&SumPtJJMSDn_);
  NFJJMRUp_branch = tree->GetBranch("NFJJMRUp");
  if (NFJJMRUp_branch) NFJJMRUp_branch->SetAddress(&NFJJMRUp_);
  VMD0JMRUp_branch = tree->GetBranch("VMD0JMRUp");
  if (VMD0JMRUp_branch) VMD0JMRUp_branch->SetAddress(&VMD0JMRUp_);
  VMD1JMRUp_branch = tree->GetBranch("VMD1JMRUp");
  if (VMD1JMRUp_branch) VMD1JMRUp_branch->SetAddress(&VMD1JMRUp_);
  VMD2JMRUp_branch = tree->GetBranch("VMD2JMRUp");
  if (VMD2JMRUp_branch) VMD2JMRUp_branch->SetAddress(&VMD2JMRUp_);
  VMD3JMRUp_branch = tree->GetBranch("VMD3JMRUp");
  if (VMD3JMRUp_branch) VMD3JMRUp_branch->SetAddress(&VMD3JMRUp_);
  VMD4JMRUp_branch = tree->GetBranch("VMD4JMRUp");
  if (VMD4JMRUp_branch) VMD4JMRUp_branch->SetAddress(&VMD4JMRUp_);
  WMD0JMRUp_branch = tree->GetBranch("WMD0JMRUp");
  if (WMD0JMRUp_branch) WMD0JMRUp_branch->SetAddress(&WMD0JMRUp_);
  WMD1JMRUp_branch = tree->GetBranch("WMD1JMRUp");
  if (WMD1JMRUp_branch) WMD1JMRUp_branch->SetAddress(&WMD1JMRUp_);
  WMD2JMRUp_branch = tree->GetBranch("WMD2JMRUp");
  if (WMD2JMRUp_branch) WMD2JMRUp_branch->SetAddress(&WMD2JMRUp_);
  WMD3JMRUp_branch = tree->GetBranch("WMD3JMRUp");
  if (WMD3JMRUp_branch) WMD3JMRUp_branch->SetAddress(&WMD3JMRUp_);
  WMD4JMRUp_branch = tree->GetBranch("WMD4JMRUp");
  if (WMD4JMRUp_branch) WMD4JMRUp_branch->SetAddress(&WMD4JMRUp_);
  NQGen0JMRUp_branch = tree->GetBranch("NQGen0JMRUp");
  if (NQGen0JMRUp_branch) NQGen0JMRUp_branch->SetAddress(&NQGen0JMRUp_);
  NQGen1JMRUp_branch = tree->GetBranch("NQGen1JMRUp");
  if (NQGen1JMRUp_branch) NQGen1JMRUp_branch->SetAddress(&NQGen1JMRUp_);
  NQGen2JMRUp_branch = tree->GetBranch("NQGen2JMRUp");
  if (NQGen2JMRUp_branch) NQGen2JMRUp_branch->SetAddress(&NQGen2JMRUp_);
  NQGen3JMRUp_branch = tree->GetBranch("NQGen3JMRUp");
  if (NQGen3JMRUp_branch) NQGen3JMRUp_branch->SetAddress(&NQGen3JMRUp_);
  NQGen4JMRUp_branch = tree->GetBranch("NQGen4JMRUp");
  if (NQGen4JMRUp_branch) NQGen4JMRUp_branch->SetAddress(&NQGen4JMRUp_);
  NBGen0JMRUp_branch = tree->GetBranch("NBGen0JMRUp");
  if (NBGen0JMRUp_branch) NBGen0JMRUp_branch->SetAddress(&NBGen0JMRUp_);
  NBGen1JMRUp_branch = tree->GetBranch("NBGen1JMRUp");
  if (NBGen1JMRUp_branch) NBGen1JMRUp_branch->SetAddress(&NBGen1JMRUp_);
  NBGen2JMRUp_branch = tree->GetBranch("NBGen2JMRUp");
  if (NBGen2JMRUp_branch) NBGen2JMRUp_branch->SetAddress(&NBGen2JMRUp_);
  NBGen3JMRUp_branch = tree->GetBranch("NBGen3JMRUp");
  if (NBGen3JMRUp_branch) NBGen3JMRUp_branch->SetAddress(&NBGen3JMRUp_);
  NBGen4JMRUp_branch = tree->GetBranch("NBGen4JMRUp");
  if (NBGen4JMRUp_branch) NBGen4JMRUp_branch->SetAddress(&NBGen4JMRUp_);
  NLGen0JMRUp_branch = tree->GetBranch("NLGen0JMRUp");
  if (NLGen0JMRUp_branch) NLGen0JMRUp_branch->SetAddress(&NLGen0JMRUp_);
  NLGen1JMRUp_branch = tree->GetBranch("NLGen1JMRUp");
  if (NLGen1JMRUp_branch) NLGen1JMRUp_branch->SetAddress(&NLGen1JMRUp_);
  NLGen2JMRUp_branch = tree->GetBranch("NLGen2JMRUp");
  if (NLGen2JMRUp_branch) NLGen2JMRUp_branch->SetAddress(&NLGen2JMRUp_);
  NLGen3JMRUp_branch = tree->GetBranch("NLGen3JMRUp");
  if (NLGen3JMRUp_branch) NLGen3JMRUp_branch->SetAddress(&NLGen3JMRUp_);
  NLGen4JMRUp_branch = tree->GetBranch("NLGen4JMRUp");
  if (NLGen4JMRUp_branch) NLGen4JMRUp_branch->SetAddress(&NLGen4JMRUp_);
  NiFJJMRUp_branch = tree->GetBranch("NiFJJMRUp");
  if (NiFJJMRUp_branch) NiFJJMRUp_branch->SetAddress(&NiFJJMRUp_);
  iVMD0JMRUp_branch = tree->GetBranch("iVMD0JMRUp");
  if (iVMD0JMRUp_branch) iVMD0JMRUp_branch->SetAddress(&iVMD0JMRUp_);
  iVMD1JMRUp_branch = tree->GetBranch("iVMD1JMRUp");
  if (iVMD1JMRUp_branch) iVMD1JMRUp_branch->SetAddress(&iVMD1JMRUp_);
  iVMD2JMRUp_branch = tree->GetBranch("iVMD2JMRUp");
  if (iVMD2JMRUp_branch) iVMD2JMRUp_branch->SetAddress(&iVMD2JMRUp_);
  iVMD3JMRUp_branch = tree->GetBranch("iVMD3JMRUp");
  if (iVMD3JMRUp_branch) iVMD3JMRUp_branch->SetAddress(&iVMD3JMRUp_);
  iVMD4JMRUp_branch = tree->GetBranch("iVMD4JMRUp");
  if (iVMD4JMRUp_branch) iVMD4JMRUp_branch->SetAddress(&iVMD4JMRUp_);
  iWMD0JMRUp_branch = tree->GetBranch("iWMD0JMRUp");
  if (iWMD0JMRUp_branch) iWMD0JMRUp_branch->SetAddress(&iWMD0JMRUp_);
  iWMD1JMRUp_branch = tree->GetBranch("iWMD1JMRUp");
  if (iWMD1JMRUp_branch) iWMD1JMRUp_branch->SetAddress(&iWMD1JMRUp_);
  iWMD2JMRUp_branch = tree->GetBranch("iWMD2JMRUp");
  if (iWMD2JMRUp_branch) iWMD2JMRUp_branch->SetAddress(&iWMD2JMRUp_);
  iWMD3JMRUp_branch = tree->GetBranch("iWMD3JMRUp");
  if (iWMD3JMRUp_branch) iWMD3JMRUp_branch->SetAddress(&iWMD3JMRUp_);
  iWMD4JMRUp_branch = tree->GetBranch("iWMD4JMRUp");
  if (iWMD4JMRUp_branch) iWMD4JMRUp_branch->SetAddress(&iWMD4JMRUp_);
  NJJMRUp_branch = tree->GetBranch("NJJMRUp");
  if (NJJMRUp_branch) NJJMRUp_branch->SetAddress(&NJJMRUp_);
  NbLooseJMRUp_branch = tree->GetBranch("NbLooseJMRUp");
  if (NbLooseJMRUp_branch) NbLooseJMRUp_branch->SetAddress(&NbLooseJMRUp_);
  NbMediumJMRUp_branch = tree->GetBranch("NbMediumJMRUp");
  if (NbMediumJMRUp_branch) NbMediumJMRUp_branch->SetAddress(&NbMediumJMRUp_);
  NbTightJMRUp_branch = tree->GetBranch("NbTightJMRUp");
  if (NbTightJMRUp_branch) NbTightJMRUp_branch->SetAddress(&NbTightJMRUp_);
  NoORNbLooseJMRUp_branch = tree->GetBranch("NoORNbLooseJMRUp");
  if (NoORNbLooseJMRUp_branch) NoORNbLooseJMRUp_branch->SetAddress(&NoORNbLooseJMRUp_);
  NoORNbMediumJMRUp_branch = tree->GetBranch("NoORNbMediumJMRUp");
  if (NoORNbMediumJMRUp_branch) NoORNbMediumJMRUp_branch->SetAddress(&NoORNbMediumJMRUp_);
  NoORNbTightJMRUp_branch = tree->GetBranch("NoORNbTightJMRUp");
  if (NoORNbTightJMRUp_branch) NoORNbTightJMRUp_branch->SetAddress(&NoORNbTightJMRUp_);
  MVVXJMRUp_branch = tree->GetBranch("MVVXJMRUp");
  if (MVVXJMRUp_branch) MVVXJMRUp_branch->SetAddress(&MVVXJMRUp_);
  PtVVXJMRUp_branch = tree->GetBranch("PtVVXJMRUp");
  if (PtVVXJMRUp_branch) PtVVXJMRUp_branch->SetAddress(&PtVVXJMRUp_);
  HTJMRUp_branch = tree->GetBranch("HTJMRUp");
  if (HTJMRUp_branch) HTJMRUp_branch->SetAddress(&HTJMRUp_);
  HTJJMRUp_branch = tree->GetBranch("HTJJMRUp");
  if (HTJJMRUp_branch) HTJJMRUp_branch->SetAddress(&HTJJMRUp_);
  HTFJJMRUp_branch = tree->GetBranch("HTFJJMRUp");
  if (HTFJJMRUp_branch) HTFJJMRUp_branch->SetAddress(&HTFJJMRUp_);
  SumPtFJJMRUp_branch = tree->GetBranch("SumPtFJJMRUp");
  if (SumPtFJJMRUp_branch) SumPtFJJMRUp_branch->SetAddress(&SumPtFJJMRUp_);
  SumPtJJMRUp_branch = tree->GetBranch("SumPtJJMRUp");
  if (SumPtJJMRUp_branch) SumPtJJMRUp_branch->SetAddress(&SumPtJJMRUp_);
  NFJJMRDn_branch = tree->GetBranch("NFJJMRDn");
  if (NFJJMRDn_branch) NFJJMRDn_branch->SetAddress(&NFJJMRDn_);
  VMD0JMRDn_branch = tree->GetBranch("VMD0JMRDn");
  if (VMD0JMRDn_branch) VMD0JMRDn_branch->SetAddress(&VMD0JMRDn_);
  VMD1JMRDn_branch = tree->GetBranch("VMD1JMRDn");
  if (VMD1JMRDn_branch) VMD1JMRDn_branch->SetAddress(&VMD1JMRDn_);
  VMD2JMRDn_branch = tree->GetBranch("VMD2JMRDn");
  if (VMD2JMRDn_branch) VMD2JMRDn_branch->SetAddress(&VMD2JMRDn_);
  VMD3JMRDn_branch = tree->GetBranch("VMD3JMRDn");
  if (VMD3JMRDn_branch) VMD3JMRDn_branch->SetAddress(&VMD3JMRDn_);
  VMD4JMRDn_branch = tree->GetBranch("VMD4JMRDn");
  if (VMD4JMRDn_branch) VMD4JMRDn_branch->SetAddress(&VMD4JMRDn_);
  WMD0JMRDn_branch = tree->GetBranch("WMD0JMRDn");
  if (WMD0JMRDn_branch) WMD0JMRDn_branch->SetAddress(&WMD0JMRDn_);
  WMD1JMRDn_branch = tree->GetBranch("WMD1JMRDn");
  if (WMD1JMRDn_branch) WMD1JMRDn_branch->SetAddress(&WMD1JMRDn_);
  WMD2JMRDn_branch = tree->GetBranch("WMD2JMRDn");
  if (WMD2JMRDn_branch) WMD2JMRDn_branch->SetAddress(&WMD2JMRDn_);
  WMD3JMRDn_branch = tree->GetBranch("WMD3JMRDn");
  if (WMD3JMRDn_branch) WMD3JMRDn_branch->SetAddress(&WMD3JMRDn_);
  WMD4JMRDn_branch = tree->GetBranch("WMD4JMRDn");
  if (WMD4JMRDn_branch) WMD4JMRDn_branch->SetAddress(&WMD4JMRDn_);
  NQGen0JMRDn_branch = tree->GetBranch("NQGen0JMRDn");
  if (NQGen0JMRDn_branch) NQGen0JMRDn_branch->SetAddress(&NQGen0JMRDn_);
  NQGen1JMRDn_branch = tree->GetBranch("NQGen1JMRDn");
  if (NQGen1JMRDn_branch) NQGen1JMRDn_branch->SetAddress(&NQGen1JMRDn_);
  NQGen2JMRDn_branch = tree->GetBranch("NQGen2JMRDn");
  if (NQGen2JMRDn_branch) NQGen2JMRDn_branch->SetAddress(&NQGen2JMRDn_);
  NQGen3JMRDn_branch = tree->GetBranch("NQGen3JMRDn");
  if (NQGen3JMRDn_branch) NQGen3JMRDn_branch->SetAddress(&NQGen3JMRDn_);
  NQGen4JMRDn_branch = tree->GetBranch("NQGen4JMRDn");
  if (NQGen4JMRDn_branch) NQGen4JMRDn_branch->SetAddress(&NQGen4JMRDn_);
  NBGen0JMRDn_branch = tree->GetBranch("NBGen0JMRDn");
  if (NBGen0JMRDn_branch) NBGen0JMRDn_branch->SetAddress(&NBGen0JMRDn_);
  NBGen1JMRDn_branch = tree->GetBranch("NBGen1JMRDn");
  if (NBGen1JMRDn_branch) NBGen1JMRDn_branch->SetAddress(&NBGen1JMRDn_);
  NBGen2JMRDn_branch = tree->GetBranch("NBGen2JMRDn");
  if (NBGen2JMRDn_branch) NBGen2JMRDn_branch->SetAddress(&NBGen2JMRDn_);
  NBGen3JMRDn_branch = tree->GetBranch("NBGen3JMRDn");
  if (NBGen3JMRDn_branch) NBGen3JMRDn_branch->SetAddress(&NBGen3JMRDn_);
  NBGen4JMRDn_branch = tree->GetBranch("NBGen4JMRDn");
  if (NBGen4JMRDn_branch) NBGen4JMRDn_branch->SetAddress(&NBGen4JMRDn_);
  NLGen0JMRDn_branch = tree->GetBranch("NLGen0JMRDn");
  if (NLGen0JMRDn_branch) NLGen0JMRDn_branch->SetAddress(&NLGen0JMRDn_);
  NLGen1JMRDn_branch = tree->GetBranch("NLGen1JMRDn");
  if (NLGen1JMRDn_branch) NLGen1JMRDn_branch->SetAddress(&NLGen1JMRDn_);
  NLGen2JMRDn_branch = tree->GetBranch("NLGen2JMRDn");
  if (NLGen2JMRDn_branch) NLGen2JMRDn_branch->SetAddress(&NLGen2JMRDn_);
  NLGen3JMRDn_branch = tree->GetBranch("NLGen3JMRDn");
  if (NLGen3JMRDn_branch) NLGen3JMRDn_branch->SetAddress(&NLGen3JMRDn_);
  NLGen4JMRDn_branch = tree->GetBranch("NLGen4JMRDn");
  if (NLGen4JMRDn_branch) NLGen4JMRDn_branch->SetAddress(&NLGen4JMRDn_);
  NiFJJMRDn_branch = tree->GetBranch("NiFJJMRDn");
  if (NiFJJMRDn_branch) NiFJJMRDn_branch->SetAddress(&NiFJJMRDn_);
  iVMD0JMRDn_branch = tree->GetBranch("iVMD0JMRDn");
  if (iVMD0JMRDn_branch) iVMD0JMRDn_branch->SetAddress(&iVMD0JMRDn_);
  iVMD1JMRDn_branch = tree->GetBranch("iVMD1JMRDn");
  if (iVMD1JMRDn_branch) iVMD1JMRDn_branch->SetAddress(&iVMD1JMRDn_);
  iVMD2JMRDn_branch = tree->GetBranch("iVMD2JMRDn");
  if (iVMD2JMRDn_branch) iVMD2JMRDn_branch->SetAddress(&iVMD2JMRDn_);
  iVMD3JMRDn_branch = tree->GetBranch("iVMD3JMRDn");
  if (iVMD3JMRDn_branch) iVMD3JMRDn_branch->SetAddress(&iVMD3JMRDn_);
  iVMD4JMRDn_branch = tree->GetBranch("iVMD4JMRDn");
  if (iVMD4JMRDn_branch) iVMD4JMRDn_branch->SetAddress(&iVMD4JMRDn_);
  iWMD0JMRDn_branch = tree->GetBranch("iWMD0JMRDn");
  if (iWMD0JMRDn_branch) iWMD0JMRDn_branch->SetAddress(&iWMD0JMRDn_);
  iWMD1JMRDn_branch = tree->GetBranch("iWMD1JMRDn");
  if (iWMD1JMRDn_branch) iWMD1JMRDn_branch->SetAddress(&iWMD1JMRDn_);
  iWMD2JMRDn_branch = tree->GetBranch("iWMD2JMRDn");
  if (iWMD2JMRDn_branch) iWMD2JMRDn_branch->SetAddress(&iWMD2JMRDn_);
  iWMD3JMRDn_branch = tree->GetBranch("iWMD3JMRDn");
  if (iWMD3JMRDn_branch) iWMD3JMRDn_branch->SetAddress(&iWMD3JMRDn_);
  iWMD4JMRDn_branch = tree->GetBranch("iWMD4JMRDn");
  if (iWMD4JMRDn_branch) iWMD4JMRDn_branch->SetAddress(&iWMD4JMRDn_);
  NJJMRDn_branch = tree->GetBranch("NJJMRDn");
  if (NJJMRDn_branch) NJJMRDn_branch->SetAddress(&NJJMRDn_);
  NbLooseJMRDn_branch = tree->GetBranch("NbLooseJMRDn");
  if (NbLooseJMRDn_branch) NbLooseJMRDn_branch->SetAddress(&NbLooseJMRDn_);
  NbMediumJMRDn_branch = tree->GetBranch("NbMediumJMRDn");
  if (NbMediumJMRDn_branch) NbMediumJMRDn_branch->SetAddress(&NbMediumJMRDn_);
  NbTightJMRDn_branch = tree->GetBranch("NbTightJMRDn");
  if (NbTightJMRDn_branch) NbTightJMRDn_branch->SetAddress(&NbTightJMRDn_);
  NoORNbLooseJMRDn_branch = tree->GetBranch("NoORNbLooseJMRDn");
  if (NoORNbLooseJMRDn_branch) NoORNbLooseJMRDn_branch->SetAddress(&NoORNbLooseJMRDn_);
  NoORNbMediumJMRDn_branch = tree->GetBranch("NoORNbMediumJMRDn");
  if (NoORNbMediumJMRDn_branch) NoORNbMediumJMRDn_branch->SetAddress(&NoORNbMediumJMRDn_);
  NoORNbTightJMRDn_branch = tree->GetBranch("NoORNbTightJMRDn");
  if (NoORNbTightJMRDn_branch) NoORNbTightJMRDn_branch->SetAddress(&NoORNbTightJMRDn_);
  MVVXJMRDn_branch = tree->GetBranch("MVVXJMRDn");
  if (MVVXJMRDn_branch) MVVXJMRDn_branch->SetAddress(&MVVXJMRDn_);
  PtVVXJMRDn_branch = tree->GetBranch("PtVVXJMRDn");
  if (PtVVXJMRDn_branch) PtVVXJMRDn_branch->SetAddress(&PtVVXJMRDn_);
  HTJMRDn_branch = tree->GetBranch("HTJMRDn");
  if (HTJMRDn_branch) HTJMRDn_branch->SetAddress(&HTJMRDn_);
  HTJJMRDn_branch = tree->GetBranch("HTJJMRDn");
  if (HTJJMRDn_branch) HTJJMRDn_branch->SetAddress(&HTJJMRDn_);
  HTFJJMRDn_branch = tree->GetBranch("HTFJJMRDn");
  if (HTFJJMRDn_branch) HTFJJMRDn_branch->SetAddress(&HTFJJMRDn_);
  SumPtFJJMRDn_branch = tree->GetBranch("SumPtFJJMRDn");
  if (SumPtFJJMRDn_branch) SumPtFJJMRDn_branch->SetAddress(&SumPtFJJMRDn_);
  SumPtJJMRDn_branch = tree->GetBranch("SumPtJJMRDn");
  if (SumPtJJMRDn_branch) SumPtJJMRDn_branch->SetAddress(&SumPtJJMRDn_);
  isHad0_branch = tree->GetBranch("isHad0");
  if (isHad0_branch) isHad0_branch->SetAddress(&isHad0_);
  isHad1_branch = tree->GetBranch("isHad1");
  if (isHad1_branch) isHad1_branch->SetAddress(&isHad1_);
  isHad2_branch = tree->GetBranch("isHad2");
  if (isHad2_branch) isHad2_branch->SetAddress(&isHad2_);

  tree->SetMakeClass(0);
}

void VVV0Tree::GetEntry(unsigned int idx) {
  // this only marks branches as not loaded, saving a lot of time
  index = idx;
  isData_isLoaded = false;
  run_isLoaded = false;
  lumi_isLoaded = false;
  evt_isLoaded = false;
  year_isLoaded = false;
  genWeight_isLoaded = false;
  wgt_isLoaded = false;
  LHEReweightingWeight_isLoaded = false;
  prefireWgt_isLoaded = false;
  prefireWgtUp_isLoaded = false;
  prefireWgtDn_isLoaded = false;
  puWgt_isLoaded = false;
  puWgtUp_isLoaded = false;
  puWgtDn_isLoaded = false;
  trigWgt_isLoaded = false;
  trigWgtUp_isLoaded = false;
  trigWgtDn_isLoaded = false;
  trigger_isLoaded = false;
  is0Lep_isLoaded = false;
  is1Lep_isLoaded = false;
  Lep_isLoaded = false;
  LepFlav_isLoaded = false;
  NFJ_isLoaded = false;
  FJ0_isLoaded = false;
  FJ1_isLoaded = false;
  FJ2_isLoaded = false;
  FJ3_isLoaded = false;
  FJ4_isLoaded = false;
  VMD0_isLoaded = false;
  VMD1_isLoaded = false;
  VMD2_isLoaded = false;
  VMD3_isLoaded = false;
  VMD4_isLoaded = false;
  WMD0_isLoaded = false;
  WMD1_isLoaded = false;
  WMD2_isLoaded = false;
  WMD3_isLoaded = false;
  WMD4_isLoaded = false;
  NQGen0_isLoaded = false;
  NQGen1_isLoaded = false;
  NQGen2_isLoaded = false;
  NQGen3_isLoaded = false;
  NQGen4_isLoaded = false;
  NBGen0_isLoaded = false;
  NBGen1_isLoaded = false;
  NBGen2_isLoaded = false;
  NBGen3_isLoaded = false;
  NBGen4_isLoaded = false;
  NLGen0_isLoaded = false;
  NLGen1_isLoaded = false;
  NLGen2_isLoaded = false;
  NLGen3_isLoaded = false;
  NLGen4_isLoaded = false;
  NiFJ_isLoaded = false;
  iFJ0_isLoaded = false;
  iFJ1_isLoaded = false;
  iFJ2_isLoaded = false;
  iFJ3_isLoaded = false;
  iFJ4_isLoaded = false;
  iVMD0_isLoaded = false;
  iVMD1_isLoaded = false;
  iVMD2_isLoaded = false;
  iVMD3_isLoaded = false;
  iVMD4_isLoaded = false;
  iWMD0_isLoaded = false;
  iWMD1_isLoaded = false;
  iWMD2_isLoaded = false;
  iWMD3_isLoaded = false;
  iWMD4_isLoaded = false;
  MET_isLoaded = false;
  Nu_isLoaded = false;
  NJ_isLoaded = false;
  NbLoose_isLoaded = false;
  NbMedium_isLoaded = false;
  NbTight_isLoaded = false;
  NoORNbLoose_isLoaded = false;
  NoORNbMedium_isLoaded = false;
  NoORNbTight_isLoaded = false;
  J0_isLoaded = false;
  J1_isLoaded = false;
  J2_isLoaded = false;
  J3_isLoaded = false;
  J4_isLoaded = false;
  MVVX_isLoaded = false;
  PtVVX_isLoaded = false;
  HT_isLoaded = false;
  HTJ_isLoaded = false;
  HTFJ_isLoaded = false;
  SumPtFJ_isLoaded = false;
  SumPtJ_isLoaded = false;
  NFJJESUp_isLoaded = false;
  FJ0JESUp_isLoaded = false;
  FJ1JESUp_isLoaded = false;
  FJ2JESUp_isLoaded = false;
  FJ3JESUp_isLoaded = false;
  FJ4JESUp_isLoaded = false;
  VMD0JESUp_isLoaded = false;
  VMD1JESUp_isLoaded = false;
  VMD2JESUp_isLoaded = false;
  VMD3JESUp_isLoaded = false;
  VMD4JESUp_isLoaded = false;
  WMD0JESUp_isLoaded = false;
  WMD1JESUp_isLoaded = false;
  WMD2JESUp_isLoaded = false;
  WMD3JESUp_isLoaded = false;
  WMD4JESUp_isLoaded = false;
  NQGen0JESUp_isLoaded = false;
  NQGen1JESUp_isLoaded = false;
  NQGen2JESUp_isLoaded = false;
  NQGen3JESUp_isLoaded = false;
  NQGen4JESUp_isLoaded = false;
  NBGen0JESUp_isLoaded = false;
  NBGen1JESUp_isLoaded = false;
  NBGen2JESUp_isLoaded = false;
  NBGen3JESUp_isLoaded = false;
  NBGen4JESUp_isLoaded = false;
  NLGen0JESUp_isLoaded = false;
  NLGen1JESUp_isLoaded = false;
  NLGen2JESUp_isLoaded = false;
  NLGen3JESUp_isLoaded = false;
  NLGen4JESUp_isLoaded = false;
  NiFJJESUp_isLoaded = false;
  iFJ0JESUp_isLoaded = false;
  iFJ1JESUp_isLoaded = false;
  iFJ2JESUp_isLoaded = false;
  iFJ3JESUp_isLoaded = false;
  iFJ4JESUp_isLoaded = false;
  iVMD0JESUp_isLoaded = false;
  iVMD1JESUp_isLoaded = false;
  iVMD2JESUp_isLoaded = false;
  iVMD3JESUp_isLoaded = false;
  iVMD4JESUp_isLoaded = false;
  iWMD0JESUp_isLoaded = false;
  iWMD1JESUp_isLoaded = false;
  iWMD2JESUp_isLoaded = false;
  iWMD3JESUp_isLoaded = false;
  iWMD4JESUp_isLoaded = false;
  METJESUp_isLoaded = false;
  NuJESUp_isLoaded = false;
  NJJESUp_isLoaded = false;
  NbLooseJESUp_isLoaded = false;
  NbMediumJESUp_isLoaded = false;
  NbTightJESUp_isLoaded = false;
  NoORNbLooseJESUp_isLoaded = false;
  NoORNbMediumJESUp_isLoaded = false;
  NoORNbTightJESUp_isLoaded = false;
  J0JESUp_isLoaded = false;
  J1JESUp_isLoaded = false;
  J2JESUp_isLoaded = false;
  J3JESUp_isLoaded = false;
  J4JESUp_isLoaded = false;
  MVVXJESUp_isLoaded = false;
  PtVVXJESUp_isLoaded = false;
  HTJESUp_isLoaded = false;
  HTJJESUp_isLoaded = false;
  HTFJJESUp_isLoaded = false;
  SumPtFJJESUp_isLoaded = false;
  SumPtJJESUp_isLoaded = false;
  NFJJESDn_isLoaded = false;
  FJ0JESDn_isLoaded = false;
  FJ1JESDn_isLoaded = false;
  FJ2JESDn_isLoaded = false;
  FJ3JESDn_isLoaded = false;
  FJ4JESDn_isLoaded = false;
  VMD0JESDn_isLoaded = false;
  VMD1JESDn_isLoaded = false;
  VMD2JESDn_isLoaded = false;
  VMD3JESDn_isLoaded = false;
  VMD4JESDn_isLoaded = false;
  WMD0JESDn_isLoaded = false;
  WMD1JESDn_isLoaded = false;
  WMD2JESDn_isLoaded = false;
  WMD3JESDn_isLoaded = false;
  WMD4JESDn_isLoaded = false;
  NQGen0JESDn_isLoaded = false;
  NQGen1JESDn_isLoaded = false;
  NQGen2JESDn_isLoaded = false;
  NQGen3JESDn_isLoaded = false;
  NQGen4JESDn_isLoaded = false;
  NBGen0JESDn_isLoaded = false;
  NBGen1JESDn_isLoaded = false;
  NBGen2JESDn_isLoaded = false;
  NBGen3JESDn_isLoaded = false;
  NBGen4JESDn_isLoaded = false;
  NLGen0JESDn_isLoaded = false;
  NLGen1JESDn_isLoaded = false;
  NLGen2JESDn_isLoaded = false;
  NLGen3JESDn_isLoaded = false;
  NLGen4JESDn_isLoaded = false;
  NiFJJESDn_isLoaded = false;
  iFJ0JESDn_isLoaded = false;
  iFJ1JESDn_isLoaded = false;
  iFJ2JESDn_isLoaded = false;
  iFJ3JESDn_isLoaded = false;
  iFJ4JESDn_isLoaded = false;
  iVMD0JESDn_isLoaded = false;
  iVMD1JESDn_isLoaded = false;
  iVMD2JESDn_isLoaded = false;
  iVMD3JESDn_isLoaded = false;
  iVMD4JESDn_isLoaded = false;
  iWMD0JESDn_isLoaded = false;
  iWMD1JESDn_isLoaded = false;
  iWMD2JESDn_isLoaded = false;
  iWMD3JESDn_isLoaded = false;
  iWMD4JESDn_isLoaded = false;
  METJESDn_isLoaded = false;
  NuJESDn_isLoaded = false;
  NJJESDn_isLoaded = false;
  NbLooseJESDn_isLoaded = false;
  NbMediumJESDn_isLoaded = false;
  NbTightJESDn_isLoaded = false;
  NoORNbLooseJESDn_isLoaded = false;
  NoORNbMediumJESDn_isLoaded = false;
  NoORNbTightJESDn_isLoaded = false;
  J0JESDn_isLoaded = false;
  J1JESDn_isLoaded = false;
  J2JESDn_isLoaded = false;
  J3JESDn_isLoaded = false;
  J4JESDn_isLoaded = false;
  MVVXJESDn_isLoaded = false;
  PtVVXJESDn_isLoaded = false;
  HTJESDn_isLoaded = false;
  HTJJESDn_isLoaded = false;
  HTFJJESDn_isLoaded = false;
  SumPtFJJESDn_isLoaded = false;
  SumPtJJESDn_isLoaded = false;
  NFJJERUp_isLoaded = false;
  FJ0JERUp_isLoaded = false;
  FJ1JERUp_isLoaded = false;
  FJ2JERUp_isLoaded = false;
  FJ3JERUp_isLoaded = false;
  FJ4JERUp_isLoaded = false;
  VMD0JERUp_isLoaded = false;
  VMD1JERUp_isLoaded = false;
  VMD2JERUp_isLoaded = false;
  VMD3JERUp_isLoaded = false;
  VMD4JERUp_isLoaded = false;
  WMD0JERUp_isLoaded = false;
  WMD1JERUp_isLoaded = false;
  WMD2JERUp_isLoaded = false;
  WMD3JERUp_isLoaded = false;
  WMD4JERUp_isLoaded = false;
  NQGen0JERUp_isLoaded = false;
  NQGen1JERUp_isLoaded = false;
  NQGen2JERUp_isLoaded = false;
  NQGen3JERUp_isLoaded = false;
  NQGen4JERUp_isLoaded = false;
  NBGen0JERUp_isLoaded = false;
  NBGen1JERUp_isLoaded = false;
  NBGen2JERUp_isLoaded = false;
  NBGen3JERUp_isLoaded = false;
  NBGen4JERUp_isLoaded = false;
  NLGen0JERUp_isLoaded = false;
  NLGen1JERUp_isLoaded = false;
  NLGen2JERUp_isLoaded = false;
  NLGen3JERUp_isLoaded = false;
  NLGen4JERUp_isLoaded = false;
  NiFJJERUp_isLoaded = false;
  iFJ0JERUp_isLoaded = false;
  iFJ1JERUp_isLoaded = false;
  iFJ2JERUp_isLoaded = false;
  iFJ3JERUp_isLoaded = false;
  iFJ4JERUp_isLoaded = false;
  iVMD0JERUp_isLoaded = false;
  iVMD1JERUp_isLoaded = false;
  iVMD2JERUp_isLoaded = false;
  iVMD3JERUp_isLoaded = false;
  iVMD4JERUp_isLoaded = false;
  iWMD0JERUp_isLoaded = false;
  iWMD1JERUp_isLoaded = false;
  iWMD2JERUp_isLoaded = false;
  iWMD3JERUp_isLoaded = false;
  iWMD4JERUp_isLoaded = false;
  METJERUp_isLoaded = false;
  NuJERUp_isLoaded = false;
  NJJERUp_isLoaded = false;
  NbLooseJERUp_isLoaded = false;
  NbMediumJERUp_isLoaded = false;
  NbTightJERUp_isLoaded = false;
  NoORNbLooseJERUp_isLoaded = false;
  NoORNbMediumJERUp_isLoaded = false;
  NoORNbTightJERUp_isLoaded = false;
  J0JERUp_isLoaded = false;
  J1JERUp_isLoaded = false;
  J2JERUp_isLoaded = false;
  J3JERUp_isLoaded = false;
  J4JERUp_isLoaded = false;
  MVVXJERUp_isLoaded = false;
  PtVVXJERUp_isLoaded = false;
  HTJERUp_isLoaded = false;
  HTJJERUp_isLoaded = false;
  HTFJJERUp_isLoaded = false;
  SumPtFJJERUp_isLoaded = false;
  SumPtJJERUp_isLoaded = false;
  NFJJERDn_isLoaded = false;
  FJ0JERDn_isLoaded = false;
  FJ1JERDn_isLoaded = false;
  FJ2JERDn_isLoaded = false;
  FJ3JERDn_isLoaded = false;
  FJ4JERDn_isLoaded = false;
  VMD0JERDn_isLoaded = false;
  VMD1JERDn_isLoaded = false;
  VMD2JERDn_isLoaded = false;
  VMD3JERDn_isLoaded = false;
  VMD4JERDn_isLoaded = false;
  WMD0JERDn_isLoaded = false;
  WMD1JERDn_isLoaded = false;
  WMD2JERDn_isLoaded = false;
  WMD3JERDn_isLoaded = false;
  WMD4JERDn_isLoaded = false;
  NQGen0JERDn_isLoaded = false;
  NQGen1JERDn_isLoaded = false;
  NQGen2JERDn_isLoaded = false;
  NQGen3JERDn_isLoaded = false;
  NQGen4JERDn_isLoaded = false;
  NBGen0JERDn_isLoaded = false;
  NBGen1JERDn_isLoaded = false;
  NBGen2JERDn_isLoaded = false;
  NBGen3JERDn_isLoaded = false;
  NBGen4JERDn_isLoaded = false;
  NLGen0JERDn_isLoaded = false;
  NLGen1JERDn_isLoaded = false;
  NLGen2JERDn_isLoaded = false;
  NLGen3JERDn_isLoaded = false;
  NLGen4JERDn_isLoaded = false;
  NiFJJERDn_isLoaded = false;
  iFJ0JERDn_isLoaded = false;
  iFJ1JERDn_isLoaded = false;
  iFJ2JERDn_isLoaded = false;
  iFJ3JERDn_isLoaded = false;
  iFJ4JERDn_isLoaded = false;
  iVMD0JERDn_isLoaded = false;
  iVMD1JERDn_isLoaded = false;
  iVMD2JERDn_isLoaded = false;
  iVMD3JERDn_isLoaded = false;
  iVMD4JERDn_isLoaded = false;
  iWMD0JERDn_isLoaded = false;
  iWMD1JERDn_isLoaded = false;
  iWMD2JERDn_isLoaded = false;
  iWMD3JERDn_isLoaded = false;
  iWMD4JERDn_isLoaded = false;
  METJERDn_isLoaded = false;
  NuJERDn_isLoaded = false;
  NJJERDn_isLoaded = false;
  NbLooseJERDn_isLoaded = false;
  NbMediumJERDn_isLoaded = false;
  NbTightJERDn_isLoaded = false;
  NoORNbLooseJERDn_isLoaded = false;
  NoORNbMediumJERDn_isLoaded = false;
  NoORNbTightJERDn_isLoaded = false;
  J0JERDn_isLoaded = false;
  J1JERDn_isLoaded = false;
  J2JERDn_isLoaded = false;
  J3JERDn_isLoaded = false;
  J4JERDn_isLoaded = false;
  MVVXJERDn_isLoaded = false;
  PtVVXJERDn_isLoaded = false;
  HTJERDn_isLoaded = false;
  HTJJERDn_isLoaded = false;
  HTFJJERDn_isLoaded = false;
  SumPtFJJERDn_isLoaded = false;
  SumPtJJERDn_isLoaded = false;
  NFJJMSUp_isLoaded = false;
  FJ0JMSUp_isLoaded = false;
  FJ1JMSUp_isLoaded = false;
  FJ2JMSUp_isLoaded = false;
  FJ3JMSUp_isLoaded = false;
  FJ4JMSUp_isLoaded = false;
  VMD0JMSUp_isLoaded = false;
  VMD1JMSUp_isLoaded = false;
  VMD2JMSUp_isLoaded = false;
  VMD3JMSUp_isLoaded = false;
  VMD4JMSUp_isLoaded = false;
  WMD0JMSUp_isLoaded = false;
  WMD1JMSUp_isLoaded = false;
  WMD2JMSUp_isLoaded = false;
  WMD3JMSUp_isLoaded = false;
  WMD4JMSUp_isLoaded = false;
  NQGen0JMSUp_isLoaded = false;
  NQGen1JMSUp_isLoaded = false;
  NQGen2JMSUp_isLoaded = false;
  NQGen3JMSUp_isLoaded = false;
  NQGen4JMSUp_isLoaded = false;
  NBGen0JMSUp_isLoaded = false;
  NBGen1JMSUp_isLoaded = false;
  NBGen2JMSUp_isLoaded = false;
  NBGen3JMSUp_isLoaded = false;
  NBGen4JMSUp_isLoaded = false;
  NLGen0JMSUp_isLoaded = false;
  NLGen1JMSUp_isLoaded = false;
  NLGen2JMSUp_isLoaded = false;
  NLGen3JMSUp_isLoaded = false;
  NLGen4JMSUp_isLoaded = false;
  NiFJJMSUp_isLoaded = false;
  iFJ0JMSUp_isLoaded = false;
  iFJ1JMSUp_isLoaded = false;
  iFJ2JMSUp_isLoaded = false;
  iFJ3JMSUp_isLoaded = false;
  iFJ4JMSUp_isLoaded = false;
  iVMD0JMSUp_isLoaded = false;
  iVMD1JMSUp_isLoaded = false;
  iVMD2JMSUp_isLoaded = false;
  iVMD3JMSUp_isLoaded = false;
  iVMD4JMSUp_isLoaded = false;
  iWMD0JMSUp_isLoaded = false;
  iWMD1JMSUp_isLoaded = false;
  iWMD2JMSUp_isLoaded = false;
  iWMD3JMSUp_isLoaded = false;
  iWMD4JMSUp_isLoaded = false;
  METJMSUp_isLoaded = false;
  NuJMSUp_isLoaded = false;
  NJJMSUp_isLoaded = false;
  NbLooseJMSUp_isLoaded = false;
  NbMediumJMSUp_isLoaded = false;
  NbTightJMSUp_isLoaded = false;
  NoORNbLooseJMSUp_isLoaded = false;
  NoORNbMediumJMSUp_isLoaded = false;
  NoORNbTightJMSUp_isLoaded = false;
  J0JMSUp_isLoaded = false;
  J1JMSUp_isLoaded = false;
  J2JMSUp_isLoaded = false;
  J3JMSUp_isLoaded = false;
  J4JMSUp_isLoaded = false;
  MVVXJMSUp_isLoaded = false;
  PtVVXJMSUp_isLoaded = false;
  HTJMSUp_isLoaded = false;
  HTJJMSUp_isLoaded = false;
  HTFJJMSUp_isLoaded = false;
  SumPtFJJMSUp_isLoaded = false;
  SumPtJJMSUp_isLoaded = false;
  NFJJMSDn_isLoaded = false;
  FJ0JMSDn_isLoaded = false;
  FJ1JMSDn_isLoaded = false;
  FJ2JMSDn_isLoaded = false;
  FJ3JMSDn_isLoaded = false;
  FJ4JMSDn_isLoaded = false;
  VMD0JMSDn_isLoaded = false;
  VMD1JMSDn_isLoaded = false;
  VMD2JMSDn_isLoaded = false;
  VMD3JMSDn_isLoaded = false;
  VMD4JMSDn_isLoaded = false;
  WMD0JMSDn_isLoaded = false;
  WMD1JMSDn_isLoaded = false;
  WMD2JMSDn_isLoaded = false;
  WMD3JMSDn_isLoaded = false;
  WMD4JMSDn_isLoaded = false;
  NQGen0JMSDn_isLoaded = false;
  NQGen1JMSDn_isLoaded = false;
  NQGen2JMSDn_isLoaded = false;
  NQGen3JMSDn_isLoaded = false;
  NQGen4JMSDn_isLoaded = false;
  NBGen0JMSDn_isLoaded = false;
  NBGen1JMSDn_isLoaded = false;
  NBGen2JMSDn_isLoaded = false;
  NBGen3JMSDn_isLoaded = false;
  NBGen4JMSDn_isLoaded = false;
  NLGen0JMSDn_isLoaded = false;
  NLGen1JMSDn_isLoaded = false;
  NLGen2JMSDn_isLoaded = false;
  NLGen3JMSDn_isLoaded = false;
  NLGen4JMSDn_isLoaded = false;
  NiFJJMSDn_isLoaded = false;
  iFJ0JMSDn_isLoaded = false;
  iFJ1JMSDn_isLoaded = false;
  iFJ2JMSDn_isLoaded = false;
  iFJ3JMSDn_isLoaded = false;
  iFJ4JMSDn_isLoaded = false;
  iVMD0JMSDn_isLoaded = false;
  iVMD1JMSDn_isLoaded = false;
  iVMD2JMSDn_isLoaded = false;
  iVMD3JMSDn_isLoaded = false;
  iVMD4JMSDn_isLoaded = false;
  iWMD0JMSDn_isLoaded = false;
  iWMD1JMSDn_isLoaded = false;
  iWMD2JMSDn_isLoaded = false;
  iWMD3JMSDn_isLoaded = false;
  iWMD4JMSDn_isLoaded = false;
  METJMSDn_isLoaded = false;
  NuJMSDn_isLoaded = false;
  NJJMSDn_isLoaded = false;
  NbLooseJMSDn_isLoaded = false;
  NbMediumJMSDn_isLoaded = false;
  NbTightJMSDn_isLoaded = false;
  NoORNbLooseJMSDn_isLoaded = false;
  NoORNbMediumJMSDn_isLoaded = false;
  NoORNbTightJMSDn_isLoaded = false;
  J0JMSDn_isLoaded = false;
  J1JMSDn_isLoaded = false;
  J2JMSDn_isLoaded = false;
  J3JMSDn_isLoaded = false;
  J4JMSDn_isLoaded = false;
  MVVXJMSDn_isLoaded = false;
  PtVVXJMSDn_isLoaded = false;
  HTJMSDn_isLoaded = false;
  HTJJMSDn_isLoaded = false;
  HTFJJMSDn_isLoaded = false;
  SumPtFJJMSDn_isLoaded = false;
  SumPtJJMSDn_isLoaded = false;
  NFJJMRUp_isLoaded = false;
  FJ0JMRUp_isLoaded = false;
  FJ1JMRUp_isLoaded = false;
  FJ2JMRUp_isLoaded = false;
  FJ3JMRUp_isLoaded = false;
  FJ4JMRUp_isLoaded = false;
  VMD0JMRUp_isLoaded = false;
  VMD1JMRUp_isLoaded = false;
  VMD2JMRUp_isLoaded = false;
  VMD3JMRUp_isLoaded = false;
  VMD4JMRUp_isLoaded = false;
  WMD0JMRUp_isLoaded = false;
  WMD1JMRUp_isLoaded = false;
  WMD2JMRUp_isLoaded = false;
  WMD3JMRUp_isLoaded = false;
  WMD4JMRUp_isLoaded = false;
  NQGen0JMRUp_isLoaded = false;
  NQGen1JMRUp_isLoaded = false;
  NQGen2JMRUp_isLoaded = false;
  NQGen3JMRUp_isLoaded = false;
  NQGen4JMRUp_isLoaded = false;
  NBGen0JMRUp_isLoaded = false;
  NBGen1JMRUp_isLoaded = false;
  NBGen2JMRUp_isLoaded = false;
  NBGen3JMRUp_isLoaded = false;
  NBGen4JMRUp_isLoaded = false;
  NLGen0JMRUp_isLoaded = false;
  NLGen1JMRUp_isLoaded = false;
  NLGen2JMRUp_isLoaded = false;
  NLGen3JMRUp_isLoaded = false;
  NLGen4JMRUp_isLoaded = false;
  NiFJJMRUp_isLoaded = false;
  iFJ0JMRUp_isLoaded = false;
  iFJ1JMRUp_isLoaded = false;
  iFJ2JMRUp_isLoaded = false;
  iFJ3JMRUp_isLoaded = false;
  iFJ4JMRUp_isLoaded = false;
  iVMD0JMRUp_isLoaded = false;
  iVMD1JMRUp_isLoaded = false;
  iVMD2JMRUp_isLoaded = false;
  iVMD3JMRUp_isLoaded = false;
  iVMD4JMRUp_isLoaded = false;
  iWMD0JMRUp_isLoaded = false;
  iWMD1JMRUp_isLoaded = false;
  iWMD2JMRUp_isLoaded = false;
  iWMD3JMRUp_isLoaded = false;
  iWMD4JMRUp_isLoaded = false;
  METJMRUp_isLoaded = false;
  NuJMRUp_isLoaded = false;
  NJJMRUp_isLoaded = false;
  NbLooseJMRUp_isLoaded = false;
  NbMediumJMRUp_isLoaded = false;
  NbTightJMRUp_isLoaded = false;
  NoORNbLooseJMRUp_isLoaded = false;
  NoORNbMediumJMRUp_isLoaded = false;
  NoORNbTightJMRUp_isLoaded = false;
  J0JMRUp_isLoaded = false;
  J1JMRUp_isLoaded = false;
  J2JMRUp_isLoaded = false;
  J3JMRUp_isLoaded = false;
  J4JMRUp_isLoaded = false;
  MVVXJMRUp_isLoaded = false;
  PtVVXJMRUp_isLoaded = false;
  HTJMRUp_isLoaded = false;
  HTJJMRUp_isLoaded = false;
  HTFJJMRUp_isLoaded = false;
  SumPtFJJMRUp_isLoaded = false;
  SumPtJJMRUp_isLoaded = false;
  NFJJMRDn_isLoaded = false;
  FJ0JMRDn_isLoaded = false;
  FJ1JMRDn_isLoaded = false;
  FJ2JMRDn_isLoaded = false;
  FJ3JMRDn_isLoaded = false;
  FJ4JMRDn_isLoaded = false;
  VMD0JMRDn_isLoaded = false;
  VMD1JMRDn_isLoaded = false;
  VMD2JMRDn_isLoaded = false;
  VMD3JMRDn_isLoaded = false;
  VMD4JMRDn_isLoaded = false;
  WMD0JMRDn_isLoaded = false;
  WMD1JMRDn_isLoaded = false;
  WMD2JMRDn_isLoaded = false;
  WMD3JMRDn_isLoaded = false;
  WMD4JMRDn_isLoaded = false;
  NQGen0JMRDn_isLoaded = false;
  NQGen1JMRDn_isLoaded = false;
  NQGen2JMRDn_isLoaded = false;
  NQGen3JMRDn_isLoaded = false;
  NQGen4JMRDn_isLoaded = false;
  NBGen0JMRDn_isLoaded = false;
  NBGen1JMRDn_isLoaded = false;
  NBGen2JMRDn_isLoaded = false;
  NBGen3JMRDn_isLoaded = false;
  NBGen4JMRDn_isLoaded = false;
  NLGen0JMRDn_isLoaded = false;
  NLGen1JMRDn_isLoaded = false;
  NLGen2JMRDn_isLoaded = false;
  NLGen3JMRDn_isLoaded = false;
  NLGen4JMRDn_isLoaded = false;
  NiFJJMRDn_isLoaded = false;
  iFJ0JMRDn_isLoaded = false;
  iFJ1JMRDn_isLoaded = false;
  iFJ2JMRDn_isLoaded = false;
  iFJ3JMRDn_isLoaded = false;
  iFJ4JMRDn_isLoaded = false;
  iVMD0JMRDn_isLoaded = false;
  iVMD1JMRDn_isLoaded = false;
  iVMD2JMRDn_isLoaded = false;
  iVMD3JMRDn_isLoaded = false;
  iVMD4JMRDn_isLoaded = false;
  iWMD0JMRDn_isLoaded = false;
  iWMD1JMRDn_isLoaded = false;
  iWMD2JMRDn_isLoaded = false;
  iWMD3JMRDn_isLoaded = false;
  iWMD4JMRDn_isLoaded = false;
  METJMRDn_isLoaded = false;
  NuJMRDn_isLoaded = false;
  NJJMRDn_isLoaded = false;
  NbLooseJMRDn_isLoaded = false;
  NbMediumJMRDn_isLoaded = false;
  NbTightJMRDn_isLoaded = false;
  NoORNbLooseJMRDn_isLoaded = false;
  NoORNbMediumJMRDn_isLoaded = false;
  NoORNbTightJMRDn_isLoaded = false;
  J0JMRDn_isLoaded = false;
  J1JMRDn_isLoaded = false;
  J2JMRDn_isLoaded = false;
  J3JMRDn_isLoaded = false;
  J4JMRDn_isLoaded = false;
  MVVXJMRDn_isLoaded = false;
  PtVVXJMRDn_isLoaded = false;
  HTJMRDn_isLoaded = false;
  HTJJMRDn_isLoaded = false;
  HTFJJMRDn_isLoaded = false;
  SumPtFJJMRDn_isLoaded = false;
  SumPtJJMRDn_isLoaded = false;
  GenV0_isLoaded = false;
  GenV1_isLoaded = false;
  GenV2_isLoaded = false;
  isHad0_isLoaded = false;
  isHad1_isLoaded = false;
  isHad2_isLoaded = false;
  GenF00_isLoaded = false;
  GenF01_isLoaded = false;
  GenF10_isLoaded = false;
  GenF11_isLoaded = false;
  GenF20_isLoaded = false;
  GenF21_isLoaded = false;
}

void VVV0Tree::LoadAllBranches() {
  // load all branches
  if (isData_branch != 0) isData();
  if (run_branch != 0) run();
  if (lumi_branch != 0) lumi();
  if (evt_branch != 0) evt();
  if (year_branch != 0) year();
  if (genWeight_branch != 0) genWeight();
  if (wgt_branch != 0) wgt();
  if (LHEReweightingWeight_branch != 0) LHEReweightingWeight();
  if (prefireWgt_branch != 0) prefireWgt();
  if (prefireWgtUp_branch != 0) prefireWgtUp();
  if (prefireWgtDn_branch != 0) prefireWgtDn();
  if (puWgt_branch != 0) puWgt();
  if (puWgtUp_branch != 0) puWgtUp();
  if (puWgtDn_branch != 0) puWgtDn();
  if (trigWgt_branch != 0) trigWgt();
  if (trigWgtUp_branch != 0) trigWgtUp();
  if (trigWgtDn_branch != 0) trigWgtDn();
  if (trigger_branch != 0) trigger();
  if (is0Lep_branch != 0) is0Lep();
  if (is1Lep_branch != 0) is1Lep();
  if (Lep_branch != 0) Lep();
  if (LepFlav_branch != 0) LepFlav();
  if (NFJ_branch != 0) NFJ();
  if (FJ0_branch != 0) FJ0();
  if (FJ1_branch != 0) FJ1();
  if (FJ2_branch != 0) FJ2();
  if (FJ3_branch != 0) FJ3();
  if (FJ4_branch != 0) FJ4();
  if (VMD0_branch != 0) VMD0();
  if (VMD1_branch != 0) VMD1();
  if (VMD2_branch != 0) VMD2();
  if (VMD3_branch != 0) VMD3();
  if (VMD4_branch != 0) VMD4();
  if (WMD0_branch != 0) WMD0();
  if (WMD1_branch != 0) WMD1();
  if (WMD2_branch != 0) WMD2();
  if (WMD3_branch != 0) WMD3();
  if (WMD4_branch != 0) WMD4();
  if (NQGen0_branch != 0) NQGen0();
  if (NQGen1_branch != 0) NQGen1();
  if (NQGen2_branch != 0) NQGen2();
  if (NQGen3_branch != 0) NQGen3();
  if (NQGen4_branch != 0) NQGen4();
  if (NBGen0_branch != 0) NBGen0();
  if (NBGen1_branch != 0) NBGen1();
  if (NBGen2_branch != 0) NBGen2();
  if (NBGen3_branch != 0) NBGen3();
  if (NBGen4_branch != 0) NBGen4();
  if (NLGen0_branch != 0) NLGen0();
  if (NLGen1_branch != 0) NLGen1();
  if (NLGen2_branch != 0) NLGen2();
  if (NLGen3_branch != 0) NLGen3();
  if (NLGen4_branch != 0) NLGen4();
  if (NiFJ_branch != 0) NiFJ();
  if (iFJ0_branch != 0) iFJ0();
  if (iFJ1_branch != 0) iFJ1();
  if (iFJ2_branch != 0) iFJ2();
  if (iFJ3_branch != 0) iFJ3();
  if (iFJ4_branch != 0) iFJ4();
  if (iVMD0_branch != 0) iVMD0();
  if (iVMD1_branch != 0) iVMD1();
  if (iVMD2_branch != 0) iVMD2();
  if (iVMD3_branch != 0) iVMD3();
  if (iVMD4_branch != 0) iVMD4();
  if (iWMD0_branch != 0) iWMD0();
  if (iWMD1_branch != 0) iWMD1();
  if (iWMD2_branch != 0) iWMD2();
  if (iWMD3_branch != 0) iWMD3();
  if (iWMD4_branch != 0) iWMD4();
  if (MET_branch != 0) MET();
  if (Nu_branch != 0) Nu();
  if (NJ_branch != 0) NJ();
  if (NbLoose_branch != 0) NbLoose();
  if (NbMedium_branch != 0) NbMedium();
  if (NbTight_branch != 0) NbTight();
  if (NoORNbLoose_branch != 0) NoORNbLoose();
  if (NoORNbMedium_branch != 0) NoORNbMedium();
  if (NoORNbTight_branch != 0) NoORNbTight();
  if (J0_branch != 0) J0();
  if (J1_branch != 0) J1();
  if (J2_branch != 0) J2();
  if (J3_branch != 0) J3();
  if (J4_branch != 0) J4();
  if (MVVX_branch != 0) MVVX();
  if (PtVVX_branch != 0) PtVVX();
  if (HT_branch != 0) HT();
  if (HTJ_branch != 0) HTJ();
  if (HTFJ_branch != 0) HTFJ();
  if (SumPtFJ_branch != 0) SumPtFJ();
  if (SumPtJ_branch != 0) SumPtJ();
  if (NFJJESUp_branch != 0) NFJJESUp();
  if (FJ0JESUp_branch != 0) FJ0JESUp();
  if (FJ1JESUp_branch != 0) FJ1JESUp();
  if (FJ2JESUp_branch != 0) FJ2JESUp();
  if (FJ3JESUp_branch != 0) FJ3JESUp();
  if (FJ4JESUp_branch != 0) FJ4JESUp();
  if (VMD0JESUp_branch != 0) VMD0JESUp();
  if (VMD1JESUp_branch != 0) VMD1JESUp();
  if (VMD2JESUp_branch != 0) VMD2JESUp();
  if (VMD3JESUp_branch != 0) VMD3JESUp();
  if (VMD4JESUp_branch != 0) VMD4JESUp();
  if (WMD0JESUp_branch != 0) WMD0JESUp();
  if (WMD1JESUp_branch != 0) WMD1JESUp();
  if (WMD2JESUp_branch != 0) WMD2JESUp();
  if (WMD3JESUp_branch != 0) WMD3JESUp();
  if (WMD4JESUp_branch != 0) WMD4JESUp();
  if (NQGen0JESUp_branch != 0) NQGen0JESUp();
  if (NQGen1JESUp_branch != 0) NQGen1JESUp();
  if (NQGen2JESUp_branch != 0) NQGen2JESUp();
  if (NQGen3JESUp_branch != 0) NQGen3JESUp();
  if (NQGen4JESUp_branch != 0) NQGen4JESUp();
  if (NBGen0JESUp_branch != 0) NBGen0JESUp();
  if (NBGen1JESUp_branch != 0) NBGen1JESUp();
  if (NBGen2JESUp_branch != 0) NBGen2JESUp();
  if (NBGen3JESUp_branch != 0) NBGen3JESUp();
  if (NBGen4JESUp_branch != 0) NBGen4JESUp();
  if (NLGen0JESUp_branch != 0) NLGen0JESUp();
  if (NLGen1JESUp_branch != 0) NLGen1JESUp();
  if (NLGen2JESUp_branch != 0) NLGen2JESUp();
  if (NLGen3JESUp_branch != 0) NLGen3JESUp();
  if (NLGen4JESUp_branch != 0) NLGen4JESUp();
  if (NiFJJESUp_branch != 0) NiFJJESUp();
  if (iFJ0JESUp_branch != 0) iFJ0JESUp();
  if (iFJ1JESUp_branch != 0) iFJ1JESUp();
  if (iFJ2JESUp_branch != 0) iFJ2JESUp();
  if (iFJ3JESUp_branch != 0) iFJ3JESUp();
  if (iFJ4JESUp_branch != 0) iFJ4JESUp();
  if (iVMD0JESUp_branch != 0) iVMD0JESUp();
  if (iVMD1JESUp_branch != 0) iVMD1JESUp();
  if (iVMD2JESUp_branch != 0) iVMD2JESUp();
  if (iVMD3JESUp_branch != 0) iVMD3JESUp();
  if (iVMD4JESUp_branch != 0) iVMD4JESUp();
  if (iWMD0JESUp_branch != 0) iWMD0JESUp();
  if (iWMD1JESUp_branch != 0) iWMD1JESUp();
  if (iWMD2JESUp_branch != 0) iWMD2JESUp();
  if (iWMD3JESUp_branch != 0) iWMD3JESUp();
  if (iWMD4JESUp_branch != 0) iWMD4JESUp();
  if (METJESUp_branch != 0) METJESUp();
  if (NuJESUp_branch != 0) NuJESUp();
  if (NJJESUp_branch != 0) NJJESUp();
  if (NbLooseJESUp_branch != 0) NbLooseJESUp();
  if (NbMediumJESUp_branch != 0) NbMediumJESUp();
  if (NbTightJESUp_branch != 0) NbTightJESUp();
  if (NoORNbLooseJESUp_branch != 0) NoORNbLooseJESUp();
  if (NoORNbMediumJESUp_branch != 0) NoORNbMediumJESUp();
  if (NoORNbTightJESUp_branch != 0) NoORNbTightJESUp();
  if (J0JESUp_branch != 0) J0JESUp();
  if (J1JESUp_branch != 0) J1JESUp();
  if (J2JESUp_branch != 0) J2JESUp();
  if (J3JESUp_branch != 0) J3JESUp();
  if (J4JESUp_branch != 0) J4JESUp();
  if (MVVXJESUp_branch != 0) MVVXJESUp();
  if (PtVVXJESUp_branch != 0) PtVVXJESUp();
  if (HTJESUp_branch != 0) HTJESUp();
  if (HTJJESUp_branch != 0) HTJJESUp();
  if (HTFJJESUp_branch != 0) HTFJJESUp();
  if (SumPtFJJESUp_branch != 0) SumPtFJJESUp();
  if (SumPtJJESUp_branch != 0) SumPtJJESUp();
  if (NFJJESDn_branch != 0) NFJJESDn();
  if (FJ0JESDn_branch != 0) FJ0JESDn();
  if (FJ1JESDn_branch != 0) FJ1JESDn();
  if (FJ2JESDn_branch != 0) FJ2JESDn();
  if (FJ3JESDn_branch != 0) FJ3JESDn();
  if (FJ4JESDn_branch != 0) FJ4JESDn();
  if (VMD0JESDn_branch != 0) VMD0JESDn();
  if (VMD1JESDn_branch != 0) VMD1JESDn();
  if (VMD2JESDn_branch != 0) VMD2JESDn();
  if (VMD3JESDn_branch != 0) VMD3JESDn();
  if (VMD4JESDn_branch != 0) VMD4JESDn();
  if (WMD0JESDn_branch != 0) WMD0JESDn();
  if (WMD1JESDn_branch != 0) WMD1JESDn();
  if (WMD2JESDn_branch != 0) WMD2JESDn();
  if (WMD3JESDn_branch != 0) WMD3JESDn();
  if (WMD4JESDn_branch != 0) WMD4JESDn();
  if (NQGen0JESDn_branch != 0) NQGen0JESDn();
  if (NQGen1JESDn_branch != 0) NQGen1JESDn();
  if (NQGen2JESDn_branch != 0) NQGen2JESDn();
  if (NQGen3JESDn_branch != 0) NQGen3JESDn();
  if (NQGen4JESDn_branch != 0) NQGen4JESDn();
  if (NBGen0JESDn_branch != 0) NBGen0JESDn();
  if (NBGen1JESDn_branch != 0) NBGen1JESDn();
  if (NBGen2JESDn_branch != 0) NBGen2JESDn();
  if (NBGen3JESDn_branch != 0) NBGen3JESDn();
  if (NBGen4JESDn_branch != 0) NBGen4JESDn();
  if (NLGen0JESDn_branch != 0) NLGen0JESDn();
  if (NLGen1JESDn_branch != 0) NLGen1JESDn();
  if (NLGen2JESDn_branch != 0) NLGen2JESDn();
  if (NLGen3JESDn_branch != 0) NLGen3JESDn();
  if (NLGen4JESDn_branch != 0) NLGen4JESDn();
  if (NiFJJESDn_branch != 0) NiFJJESDn();
  if (iFJ0JESDn_branch != 0) iFJ0JESDn();
  if (iFJ1JESDn_branch != 0) iFJ1JESDn();
  if (iFJ2JESDn_branch != 0) iFJ2JESDn();
  if (iFJ3JESDn_branch != 0) iFJ3JESDn();
  if (iFJ4JESDn_branch != 0) iFJ4JESDn();
  if (iVMD0JESDn_branch != 0) iVMD0JESDn();
  if (iVMD1JESDn_branch != 0) iVMD1JESDn();
  if (iVMD2JESDn_branch != 0) iVMD2JESDn();
  if (iVMD3JESDn_branch != 0) iVMD3JESDn();
  if (iVMD4JESDn_branch != 0) iVMD4JESDn();
  if (iWMD0JESDn_branch != 0) iWMD0JESDn();
  if (iWMD1JESDn_branch != 0) iWMD1JESDn();
  if (iWMD2JESDn_branch != 0) iWMD2JESDn();
  if (iWMD3JESDn_branch != 0) iWMD3JESDn();
  if (iWMD4JESDn_branch != 0) iWMD4JESDn();
  if (METJESDn_branch != 0) METJESDn();
  if (NuJESDn_branch != 0) NuJESDn();
  if (NJJESDn_branch != 0) NJJESDn();
  if (NbLooseJESDn_branch != 0) NbLooseJESDn();
  if (NbMediumJESDn_branch != 0) NbMediumJESDn();
  if (NbTightJESDn_branch != 0) NbTightJESDn();
  if (NoORNbLooseJESDn_branch != 0) NoORNbLooseJESDn();
  if (NoORNbMediumJESDn_branch != 0) NoORNbMediumJESDn();
  if (NoORNbTightJESDn_branch != 0) NoORNbTightJESDn();
  if (J0JESDn_branch != 0) J0JESDn();
  if (J1JESDn_branch != 0) J1JESDn();
  if (J2JESDn_branch != 0) J2JESDn();
  if (J3JESDn_branch != 0) J3JESDn();
  if (J4JESDn_branch != 0) J4JESDn();
  if (MVVXJESDn_branch != 0) MVVXJESDn();
  if (PtVVXJESDn_branch != 0) PtVVXJESDn();
  if (HTJESDn_branch != 0) HTJESDn();
  if (HTJJESDn_branch != 0) HTJJESDn();
  if (HTFJJESDn_branch != 0) HTFJJESDn();
  if (SumPtFJJESDn_branch != 0) SumPtFJJESDn();
  if (SumPtJJESDn_branch != 0) SumPtJJESDn();
  if (NFJJERUp_branch != 0) NFJJERUp();
  if (FJ0JERUp_branch != 0) FJ0JERUp();
  if (FJ1JERUp_branch != 0) FJ1JERUp();
  if (FJ2JERUp_branch != 0) FJ2JERUp();
  if (FJ3JERUp_branch != 0) FJ3JERUp();
  if (FJ4JERUp_branch != 0) FJ4JERUp();
  if (VMD0JERUp_branch != 0) VMD0JERUp();
  if (VMD1JERUp_branch != 0) VMD1JERUp();
  if (VMD2JERUp_branch != 0) VMD2JERUp();
  if (VMD3JERUp_branch != 0) VMD3JERUp();
  if (VMD4JERUp_branch != 0) VMD4JERUp();
  if (WMD0JERUp_branch != 0) WMD0JERUp();
  if (WMD1JERUp_branch != 0) WMD1JERUp();
  if (WMD2JERUp_branch != 0) WMD2JERUp();
  if (WMD3JERUp_branch != 0) WMD3JERUp();
  if (WMD4JERUp_branch != 0) WMD4JERUp();
  if (NQGen0JERUp_branch != 0) NQGen0JERUp();
  if (NQGen1JERUp_branch != 0) NQGen1JERUp();
  if (NQGen2JERUp_branch != 0) NQGen2JERUp();
  if (NQGen3JERUp_branch != 0) NQGen3JERUp();
  if (NQGen4JERUp_branch != 0) NQGen4JERUp();
  if (NBGen0JERUp_branch != 0) NBGen0JERUp();
  if (NBGen1JERUp_branch != 0) NBGen1JERUp();
  if (NBGen2JERUp_branch != 0) NBGen2JERUp();
  if (NBGen3JERUp_branch != 0) NBGen3JERUp();
  if (NBGen4JERUp_branch != 0) NBGen4JERUp();
  if (NLGen0JERUp_branch != 0) NLGen0JERUp();
  if (NLGen1JERUp_branch != 0) NLGen1JERUp();
  if (NLGen2JERUp_branch != 0) NLGen2JERUp();
  if (NLGen3JERUp_branch != 0) NLGen3JERUp();
  if (NLGen4JERUp_branch != 0) NLGen4JERUp();
  if (NiFJJERUp_branch != 0) NiFJJERUp();
  if (iFJ0JERUp_branch != 0) iFJ0JERUp();
  if (iFJ1JERUp_branch != 0) iFJ1JERUp();
  if (iFJ2JERUp_branch != 0) iFJ2JERUp();
  if (iFJ3JERUp_branch != 0) iFJ3JERUp();
  if (iFJ4JERUp_branch != 0) iFJ4JERUp();
  if (iVMD0JERUp_branch != 0) iVMD0JERUp();
  if (iVMD1JERUp_branch != 0) iVMD1JERUp();
  if (iVMD2JERUp_branch != 0) iVMD2JERUp();
  if (iVMD3JERUp_branch != 0) iVMD3JERUp();
  if (iVMD4JERUp_branch != 0) iVMD4JERUp();
  if (iWMD0JERUp_branch != 0) iWMD0JERUp();
  if (iWMD1JERUp_branch != 0) iWMD1JERUp();
  if (iWMD2JERUp_branch != 0) iWMD2JERUp();
  if (iWMD3JERUp_branch != 0) iWMD3JERUp();
  if (iWMD4JERUp_branch != 0) iWMD4JERUp();
  if (METJERUp_branch != 0) METJERUp();
  if (NuJERUp_branch != 0) NuJERUp();
  if (NJJERUp_branch != 0) NJJERUp();
  if (NbLooseJERUp_branch != 0) NbLooseJERUp();
  if (NbMediumJERUp_branch != 0) NbMediumJERUp();
  if (NbTightJERUp_branch != 0) NbTightJERUp();
  if (NoORNbLooseJERUp_branch != 0) NoORNbLooseJERUp();
  if (NoORNbMediumJERUp_branch != 0) NoORNbMediumJERUp();
  if (NoORNbTightJERUp_branch != 0) NoORNbTightJERUp();
  if (J0JERUp_branch != 0) J0JERUp();
  if (J1JERUp_branch != 0) J1JERUp();
  if (J2JERUp_branch != 0) J2JERUp();
  if (J3JERUp_branch != 0) J3JERUp();
  if (J4JERUp_branch != 0) J4JERUp();
  if (MVVXJERUp_branch != 0) MVVXJERUp();
  if (PtVVXJERUp_branch != 0) PtVVXJERUp();
  if (HTJERUp_branch != 0) HTJERUp();
  if (HTJJERUp_branch != 0) HTJJERUp();
  if (HTFJJERUp_branch != 0) HTFJJERUp();
  if (SumPtFJJERUp_branch != 0) SumPtFJJERUp();
  if (SumPtJJERUp_branch != 0) SumPtJJERUp();
  if (NFJJERDn_branch != 0) NFJJERDn();
  if (FJ0JERDn_branch != 0) FJ0JERDn();
  if (FJ1JERDn_branch != 0) FJ1JERDn();
  if (FJ2JERDn_branch != 0) FJ2JERDn();
  if (FJ3JERDn_branch != 0) FJ3JERDn();
  if (FJ4JERDn_branch != 0) FJ4JERDn();
  if (VMD0JERDn_branch != 0) VMD0JERDn();
  if (VMD1JERDn_branch != 0) VMD1JERDn();
  if (VMD2JERDn_branch != 0) VMD2JERDn();
  if (VMD3JERDn_branch != 0) VMD3JERDn();
  if (VMD4JERDn_branch != 0) VMD4JERDn();
  if (WMD0JERDn_branch != 0) WMD0JERDn();
  if (WMD1JERDn_branch != 0) WMD1JERDn();
  if (WMD2JERDn_branch != 0) WMD2JERDn();
  if (WMD3JERDn_branch != 0) WMD3JERDn();
  if (WMD4JERDn_branch != 0) WMD4JERDn();
  if (NQGen0JERDn_branch != 0) NQGen0JERDn();
  if (NQGen1JERDn_branch != 0) NQGen1JERDn();
  if (NQGen2JERDn_branch != 0) NQGen2JERDn();
  if (NQGen3JERDn_branch != 0) NQGen3JERDn();
  if (NQGen4JERDn_branch != 0) NQGen4JERDn();
  if (NBGen0JERDn_branch != 0) NBGen0JERDn();
  if (NBGen1JERDn_branch != 0) NBGen1JERDn();
  if (NBGen2JERDn_branch != 0) NBGen2JERDn();
  if (NBGen3JERDn_branch != 0) NBGen3JERDn();
  if (NBGen4JERDn_branch != 0) NBGen4JERDn();
  if (NLGen0JERDn_branch != 0) NLGen0JERDn();
  if (NLGen1JERDn_branch != 0) NLGen1JERDn();
  if (NLGen2JERDn_branch != 0) NLGen2JERDn();
  if (NLGen3JERDn_branch != 0) NLGen3JERDn();
  if (NLGen4JERDn_branch != 0) NLGen4JERDn();
  if (NiFJJERDn_branch != 0) NiFJJERDn();
  if (iFJ0JERDn_branch != 0) iFJ0JERDn();
  if (iFJ1JERDn_branch != 0) iFJ1JERDn();
  if (iFJ2JERDn_branch != 0) iFJ2JERDn();
  if (iFJ3JERDn_branch != 0) iFJ3JERDn();
  if (iFJ4JERDn_branch != 0) iFJ4JERDn();
  if (iVMD0JERDn_branch != 0) iVMD0JERDn();
  if (iVMD1JERDn_branch != 0) iVMD1JERDn();
  if (iVMD2JERDn_branch != 0) iVMD2JERDn();
  if (iVMD3JERDn_branch != 0) iVMD3JERDn();
  if (iVMD4JERDn_branch != 0) iVMD4JERDn();
  if (iWMD0JERDn_branch != 0) iWMD0JERDn();
  if (iWMD1JERDn_branch != 0) iWMD1JERDn();
  if (iWMD2JERDn_branch != 0) iWMD2JERDn();
  if (iWMD3JERDn_branch != 0) iWMD3JERDn();
  if (iWMD4JERDn_branch != 0) iWMD4JERDn();
  if (METJERDn_branch != 0) METJERDn();
  if (NuJERDn_branch != 0) NuJERDn();
  if (NJJERDn_branch != 0) NJJERDn();
  if (NbLooseJERDn_branch != 0) NbLooseJERDn();
  if (NbMediumJERDn_branch != 0) NbMediumJERDn();
  if (NbTightJERDn_branch != 0) NbTightJERDn();
  if (NoORNbLooseJERDn_branch != 0) NoORNbLooseJERDn();
  if (NoORNbMediumJERDn_branch != 0) NoORNbMediumJERDn();
  if (NoORNbTightJERDn_branch != 0) NoORNbTightJERDn();
  if (J0JERDn_branch != 0) J0JERDn();
  if (J1JERDn_branch != 0) J1JERDn();
  if (J2JERDn_branch != 0) J2JERDn();
  if (J3JERDn_branch != 0) J3JERDn();
  if (J4JERDn_branch != 0) J4JERDn();
  if (MVVXJERDn_branch != 0) MVVXJERDn();
  if (PtVVXJERDn_branch != 0) PtVVXJERDn();
  if (HTJERDn_branch != 0) HTJERDn();
  if (HTJJERDn_branch != 0) HTJJERDn();
  if (HTFJJERDn_branch != 0) HTFJJERDn();
  if (SumPtFJJERDn_branch != 0) SumPtFJJERDn();
  if (SumPtJJERDn_branch != 0) SumPtJJERDn();
  if (NFJJMSUp_branch != 0) NFJJMSUp();
  if (FJ0JMSUp_branch != 0) FJ0JMSUp();
  if (FJ1JMSUp_branch != 0) FJ1JMSUp();
  if (FJ2JMSUp_branch != 0) FJ2JMSUp();
  if (FJ3JMSUp_branch != 0) FJ3JMSUp();
  if (FJ4JMSUp_branch != 0) FJ4JMSUp();
  if (VMD0JMSUp_branch != 0) VMD0JMSUp();
  if (VMD1JMSUp_branch != 0) VMD1JMSUp();
  if (VMD2JMSUp_branch != 0) VMD2JMSUp();
  if (VMD3JMSUp_branch != 0) VMD3JMSUp();
  if (VMD4JMSUp_branch != 0) VMD4JMSUp();
  if (WMD0JMSUp_branch != 0) WMD0JMSUp();
  if (WMD1JMSUp_branch != 0) WMD1JMSUp();
  if (WMD2JMSUp_branch != 0) WMD2JMSUp();
  if (WMD3JMSUp_branch != 0) WMD3JMSUp();
  if (WMD4JMSUp_branch != 0) WMD4JMSUp();
  if (NQGen0JMSUp_branch != 0) NQGen0JMSUp();
  if (NQGen1JMSUp_branch != 0) NQGen1JMSUp();
  if (NQGen2JMSUp_branch != 0) NQGen2JMSUp();
  if (NQGen3JMSUp_branch != 0) NQGen3JMSUp();
  if (NQGen4JMSUp_branch != 0) NQGen4JMSUp();
  if (NBGen0JMSUp_branch != 0) NBGen0JMSUp();
  if (NBGen1JMSUp_branch != 0) NBGen1JMSUp();
  if (NBGen2JMSUp_branch != 0) NBGen2JMSUp();
  if (NBGen3JMSUp_branch != 0) NBGen3JMSUp();
  if (NBGen4JMSUp_branch != 0) NBGen4JMSUp();
  if (NLGen0JMSUp_branch != 0) NLGen0JMSUp();
  if (NLGen1JMSUp_branch != 0) NLGen1JMSUp();
  if (NLGen2JMSUp_branch != 0) NLGen2JMSUp();
  if (NLGen3JMSUp_branch != 0) NLGen3JMSUp();
  if (NLGen4JMSUp_branch != 0) NLGen4JMSUp();
  if (NiFJJMSUp_branch != 0) NiFJJMSUp();
  if (iFJ0JMSUp_branch != 0) iFJ0JMSUp();
  if (iFJ1JMSUp_branch != 0) iFJ1JMSUp();
  if (iFJ2JMSUp_branch != 0) iFJ2JMSUp();
  if (iFJ3JMSUp_branch != 0) iFJ3JMSUp();
  if (iFJ4JMSUp_branch != 0) iFJ4JMSUp();
  if (iVMD0JMSUp_branch != 0) iVMD0JMSUp();
  if (iVMD1JMSUp_branch != 0) iVMD1JMSUp();
  if (iVMD2JMSUp_branch != 0) iVMD2JMSUp();
  if (iVMD3JMSUp_branch != 0) iVMD3JMSUp();
  if (iVMD4JMSUp_branch != 0) iVMD4JMSUp();
  if (iWMD0JMSUp_branch != 0) iWMD0JMSUp();
  if (iWMD1JMSUp_branch != 0) iWMD1JMSUp();
  if (iWMD2JMSUp_branch != 0) iWMD2JMSUp();
  if (iWMD3JMSUp_branch != 0) iWMD3JMSUp();
  if (iWMD4JMSUp_branch != 0) iWMD4JMSUp();
  if (METJMSUp_branch != 0) METJMSUp();
  if (NuJMSUp_branch != 0) NuJMSUp();
  if (NJJMSUp_branch != 0) NJJMSUp();
  if (NbLooseJMSUp_branch != 0) NbLooseJMSUp();
  if (NbMediumJMSUp_branch != 0) NbMediumJMSUp();
  if (NbTightJMSUp_branch != 0) NbTightJMSUp();
  if (NoORNbLooseJMSUp_branch != 0) NoORNbLooseJMSUp();
  if (NoORNbMediumJMSUp_branch != 0) NoORNbMediumJMSUp();
  if (NoORNbTightJMSUp_branch != 0) NoORNbTightJMSUp();
  if (J0JMSUp_branch != 0) J0JMSUp();
  if (J1JMSUp_branch != 0) J1JMSUp();
  if (J2JMSUp_branch != 0) J2JMSUp();
  if (J3JMSUp_branch != 0) J3JMSUp();
  if (J4JMSUp_branch != 0) J4JMSUp();
  if (MVVXJMSUp_branch != 0) MVVXJMSUp();
  if (PtVVXJMSUp_branch != 0) PtVVXJMSUp();
  if (HTJMSUp_branch != 0) HTJMSUp();
  if (HTJJMSUp_branch != 0) HTJJMSUp();
  if (HTFJJMSUp_branch != 0) HTFJJMSUp();
  if (SumPtFJJMSUp_branch != 0) SumPtFJJMSUp();
  if (SumPtJJMSUp_branch != 0) SumPtJJMSUp();
  if (NFJJMSDn_branch != 0) NFJJMSDn();
  if (FJ0JMSDn_branch != 0) FJ0JMSDn();
  if (FJ1JMSDn_branch != 0) FJ1JMSDn();
  if (FJ2JMSDn_branch != 0) FJ2JMSDn();
  if (FJ3JMSDn_branch != 0) FJ3JMSDn();
  if (FJ4JMSDn_branch != 0) FJ4JMSDn();
  if (VMD0JMSDn_branch != 0) VMD0JMSDn();
  if (VMD1JMSDn_branch != 0) VMD1JMSDn();
  if (VMD2JMSDn_branch != 0) VMD2JMSDn();
  if (VMD3JMSDn_branch != 0) VMD3JMSDn();
  if (VMD4JMSDn_branch != 0) VMD4JMSDn();
  if (WMD0JMSDn_branch != 0) WMD0JMSDn();
  if (WMD1JMSDn_branch != 0) WMD1JMSDn();
  if (WMD2JMSDn_branch != 0) WMD2JMSDn();
  if (WMD3JMSDn_branch != 0) WMD3JMSDn();
  if (WMD4JMSDn_branch != 0) WMD4JMSDn();
  if (NQGen0JMSDn_branch != 0) NQGen0JMSDn();
  if (NQGen1JMSDn_branch != 0) NQGen1JMSDn();
  if (NQGen2JMSDn_branch != 0) NQGen2JMSDn();
  if (NQGen3JMSDn_branch != 0) NQGen3JMSDn();
  if (NQGen4JMSDn_branch != 0) NQGen4JMSDn();
  if (NBGen0JMSDn_branch != 0) NBGen0JMSDn();
  if (NBGen1JMSDn_branch != 0) NBGen1JMSDn();
  if (NBGen2JMSDn_branch != 0) NBGen2JMSDn();
  if (NBGen3JMSDn_branch != 0) NBGen3JMSDn();
  if (NBGen4JMSDn_branch != 0) NBGen4JMSDn();
  if (NLGen0JMSDn_branch != 0) NLGen0JMSDn();
  if (NLGen1JMSDn_branch != 0) NLGen1JMSDn();
  if (NLGen2JMSDn_branch != 0) NLGen2JMSDn();
  if (NLGen3JMSDn_branch != 0) NLGen3JMSDn();
  if (NLGen4JMSDn_branch != 0) NLGen4JMSDn();
  if (NiFJJMSDn_branch != 0) NiFJJMSDn();
  if (iFJ0JMSDn_branch != 0) iFJ0JMSDn();
  if (iFJ1JMSDn_branch != 0) iFJ1JMSDn();
  if (iFJ2JMSDn_branch != 0) iFJ2JMSDn();
  if (iFJ3JMSDn_branch != 0) iFJ3JMSDn();
  if (iFJ4JMSDn_branch != 0) iFJ4JMSDn();
  if (iVMD0JMSDn_branch != 0) iVMD0JMSDn();
  if (iVMD1JMSDn_branch != 0) iVMD1JMSDn();
  if (iVMD2JMSDn_branch != 0) iVMD2JMSDn();
  if (iVMD3JMSDn_branch != 0) iVMD3JMSDn();
  if (iVMD4JMSDn_branch != 0) iVMD4JMSDn();
  if (iWMD0JMSDn_branch != 0) iWMD0JMSDn();
  if (iWMD1JMSDn_branch != 0) iWMD1JMSDn();
  if (iWMD2JMSDn_branch != 0) iWMD2JMSDn();
  if (iWMD3JMSDn_branch != 0) iWMD3JMSDn();
  if (iWMD4JMSDn_branch != 0) iWMD4JMSDn();
  if (METJMSDn_branch != 0) METJMSDn();
  if (NuJMSDn_branch != 0) NuJMSDn();
  if (NJJMSDn_branch != 0) NJJMSDn();
  if (NbLooseJMSDn_branch != 0) NbLooseJMSDn();
  if (NbMediumJMSDn_branch != 0) NbMediumJMSDn();
  if (NbTightJMSDn_branch != 0) NbTightJMSDn();
  if (NoORNbLooseJMSDn_branch != 0) NoORNbLooseJMSDn();
  if (NoORNbMediumJMSDn_branch != 0) NoORNbMediumJMSDn();
  if (NoORNbTightJMSDn_branch != 0) NoORNbTightJMSDn();
  if (J0JMSDn_branch != 0) J0JMSDn();
  if (J1JMSDn_branch != 0) J1JMSDn();
  if (J2JMSDn_branch != 0) J2JMSDn();
  if (J3JMSDn_branch != 0) J3JMSDn();
  if (J4JMSDn_branch != 0) J4JMSDn();
  if (MVVXJMSDn_branch != 0) MVVXJMSDn();
  if (PtVVXJMSDn_branch != 0) PtVVXJMSDn();
  if (HTJMSDn_branch != 0) HTJMSDn();
  if (HTJJMSDn_branch != 0) HTJJMSDn();
  if (HTFJJMSDn_branch != 0) HTFJJMSDn();
  if (SumPtFJJMSDn_branch != 0) SumPtFJJMSDn();
  if (SumPtJJMSDn_branch != 0) SumPtJJMSDn();
  if (NFJJMRUp_branch != 0) NFJJMRUp();
  if (FJ0JMRUp_branch != 0) FJ0JMRUp();
  if (FJ1JMRUp_branch != 0) FJ1JMRUp();
  if (FJ2JMRUp_branch != 0) FJ2JMRUp();
  if (FJ3JMRUp_branch != 0) FJ3JMRUp();
  if (FJ4JMRUp_branch != 0) FJ4JMRUp();
  if (VMD0JMRUp_branch != 0) VMD0JMRUp();
  if (VMD1JMRUp_branch != 0) VMD1JMRUp();
  if (VMD2JMRUp_branch != 0) VMD2JMRUp();
  if (VMD3JMRUp_branch != 0) VMD3JMRUp();
  if (VMD4JMRUp_branch != 0) VMD4JMRUp();
  if (WMD0JMRUp_branch != 0) WMD0JMRUp();
  if (WMD1JMRUp_branch != 0) WMD1JMRUp();
  if (WMD2JMRUp_branch != 0) WMD2JMRUp();
  if (WMD3JMRUp_branch != 0) WMD3JMRUp();
  if (WMD4JMRUp_branch != 0) WMD4JMRUp();
  if (NQGen0JMRUp_branch != 0) NQGen0JMRUp();
  if (NQGen1JMRUp_branch != 0) NQGen1JMRUp();
  if (NQGen2JMRUp_branch != 0) NQGen2JMRUp();
  if (NQGen3JMRUp_branch != 0) NQGen3JMRUp();
  if (NQGen4JMRUp_branch != 0) NQGen4JMRUp();
  if (NBGen0JMRUp_branch != 0) NBGen0JMRUp();
  if (NBGen1JMRUp_branch != 0) NBGen1JMRUp();
  if (NBGen2JMRUp_branch != 0) NBGen2JMRUp();
  if (NBGen3JMRUp_branch != 0) NBGen3JMRUp();
  if (NBGen4JMRUp_branch != 0) NBGen4JMRUp();
  if (NLGen0JMRUp_branch != 0) NLGen0JMRUp();
  if (NLGen1JMRUp_branch != 0) NLGen1JMRUp();
  if (NLGen2JMRUp_branch != 0) NLGen2JMRUp();
  if (NLGen3JMRUp_branch != 0) NLGen3JMRUp();
  if (NLGen4JMRUp_branch != 0) NLGen4JMRUp();
  if (NiFJJMRUp_branch != 0) NiFJJMRUp();
  if (iFJ0JMRUp_branch != 0) iFJ0JMRUp();
  if (iFJ1JMRUp_branch != 0) iFJ1JMRUp();
  if (iFJ2JMRUp_branch != 0) iFJ2JMRUp();
  if (iFJ3JMRUp_branch != 0) iFJ3JMRUp();
  if (iFJ4JMRUp_branch != 0) iFJ4JMRUp();
  if (iVMD0JMRUp_branch != 0) iVMD0JMRUp();
  if (iVMD1JMRUp_branch != 0) iVMD1JMRUp();
  if (iVMD2JMRUp_branch != 0) iVMD2JMRUp();
  if (iVMD3JMRUp_branch != 0) iVMD3JMRUp();
  if (iVMD4JMRUp_branch != 0) iVMD4JMRUp();
  if (iWMD0JMRUp_branch != 0) iWMD0JMRUp();
  if (iWMD1JMRUp_branch != 0) iWMD1JMRUp();
  if (iWMD2JMRUp_branch != 0) iWMD2JMRUp();
  if (iWMD3JMRUp_branch != 0) iWMD3JMRUp();
  if (iWMD4JMRUp_branch != 0) iWMD4JMRUp();
  if (METJMRUp_branch != 0) METJMRUp();
  if (NuJMRUp_branch != 0) NuJMRUp();
  if (NJJMRUp_branch != 0) NJJMRUp();
  if (NbLooseJMRUp_branch != 0) NbLooseJMRUp();
  if (NbMediumJMRUp_branch != 0) NbMediumJMRUp();
  if (NbTightJMRUp_branch != 0) NbTightJMRUp();
  if (NoORNbLooseJMRUp_branch != 0) NoORNbLooseJMRUp();
  if (NoORNbMediumJMRUp_branch != 0) NoORNbMediumJMRUp();
  if (NoORNbTightJMRUp_branch != 0) NoORNbTightJMRUp();
  if (J0JMRUp_branch != 0) J0JMRUp();
  if (J1JMRUp_branch != 0) J1JMRUp();
  if (J2JMRUp_branch != 0) J2JMRUp();
  if (J3JMRUp_branch != 0) J3JMRUp();
  if (J4JMRUp_branch != 0) J4JMRUp();
  if (MVVXJMRUp_branch != 0) MVVXJMRUp();
  if (PtVVXJMRUp_branch != 0) PtVVXJMRUp();
  if (HTJMRUp_branch != 0) HTJMRUp();
  if (HTJJMRUp_branch != 0) HTJJMRUp();
  if (HTFJJMRUp_branch != 0) HTFJJMRUp();
  if (SumPtFJJMRUp_branch != 0) SumPtFJJMRUp();
  if (SumPtJJMRUp_branch != 0) SumPtJJMRUp();
  if (NFJJMRDn_branch != 0) NFJJMRDn();
  if (FJ0JMRDn_branch != 0) FJ0JMRDn();
  if (FJ1JMRDn_branch != 0) FJ1JMRDn();
  if (FJ2JMRDn_branch != 0) FJ2JMRDn();
  if (FJ3JMRDn_branch != 0) FJ3JMRDn();
  if (FJ4JMRDn_branch != 0) FJ4JMRDn();
  if (VMD0JMRDn_branch != 0) VMD0JMRDn();
  if (VMD1JMRDn_branch != 0) VMD1JMRDn();
  if (VMD2JMRDn_branch != 0) VMD2JMRDn();
  if (VMD3JMRDn_branch != 0) VMD3JMRDn();
  if (VMD4JMRDn_branch != 0) VMD4JMRDn();
  if (WMD0JMRDn_branch != 0) WMD0JMRDn();
  if (WMD1JMRDn_branch != 0) WMD1JMRDn();
  if (WMD2JMRDn_branch != 0) WMD2JMRDn();
  if (WMD3JMRDn_branch != 0) WMD3JMRDn();
  if (WMD4JMRDn_branch != 0) WMD4JMRDn();
  if (NQGen0JMRDn_branch != 0) NQGen0JMRDn();
  if (NQGen1JMRDn_branch != 0) NQGen1JMRDn();
  if (NQGen2JMRDn_branch != 0) NQGen2JMRDn();
  if (NQGen3JMRDn_branch != 0) NQGen3JMRDn();
  if (NQGen4JMRDn_branch != 0) NQGen4JMRDn();
  if (NBGen0JMRDn_branch != 0) NBGen0JMRDn();
  if (NBGen1JMRDn_branch != 0) NBGen1JMRDn();
  if (NBGen2JMRDn_branch != 0) NBGen2JMRDn();
  if (NBGen3JMRDn_branch != 0) NBGen3JMRDn();
  if (NBGen4JMRDn_branch != 0) NBGen4JMRDn();
  if (NLGen0JMRDn_branch != 0) NLGen0JMRDn();
  if (NLGen1JMRDn_branch != 0) NLGen1JMRDn();
  if (NLGen2JMRDn_branch != 0) NLGen2JMRDn();
  if (NLGen3JMRDn_branch != 0) NLGen3JMRDn();
  if (NLGen4JMRDn_branch != 0) NLGen4JMRDn();
  if (NiFJJMRDn_branch != 0) NiFJJMRDn();
  if (iFJ0JMRDn_branch != 0) iFJ0JMRDn();
  if (iFJ1JMRDn_branch != 0) iFJ1JMRDn();
  if (iFJ2JMRDn_branch != 0) iFJ2JMRDn();
  if (iFJ3JMRDn_branch != 0) iFJ3JMRDn();
  if (iFJ4JMRDn_branch != 0) iFJ4JMRDn();
  if (iVMD0JMRDn_branch != 0) iVMD0JMRDn();
  if (iVMD1JMRDn_branch != 0) iVMD1JMRDn();
  if (iVMD2JMRDn_branch != 0) iVMD2JMRDn();
  if (iVMD3JMRDn_branch != 0) iVMD3JMRDn();
  if (iVMD4JMRDn_branch != 0) iVMD4JMRDn();
  if (iWMD0JMRDn_branch != 0) iWMD0JMRDn();
  if (iWMD1JMRDn_branch != 0) iWMD1JMRDn();
  if (iWMD2JMRDn_branch != 0) iWMD2JMRDn();
  if (iWMD3JMRDn_branch != 0) iWMD3JMRDn();
  if (iWMD4JMRDn_branch != 0) iWMD4JMRDn();
  if (METJMRDn_branch != 0) METJMRDn();
  if (NuJMRDn_branch != 0) NuJMRDn();
  if (NJJMRDn_branch != 0) NJJMRDn();
  if (NbLooseJMRDn_branch != 0) NbLooseJMRDn();
  if (NbMediumJMRDn_branch != 0) NbMediumJMRDn();
  if (NbTightJMRDn_branch != 0) NbTightJMRDn();
  if (NoORNbLooseJMRDn_branch != 0) NoORNbLooseJMRDn();
  if (NoORNbMediumJMRDn_branch != 0) NoORNbMediumJMRDn();
  if (NoORNbTightJMRDn_branch != 0) NoORNbTightJMRDn();
  if (J0JMRDn_branch != 0) J0JMRDn();
  if (J1JMRDn_branch != 0) J1JMRDn();
  if (J2JMRDn_branch != 0) J2JMRDn();
  if (J3JMRDn_branch != 0) J3JMRDn();
  if (J4JMRDn_branch != 0) J4JMRDn();
  if (MVVXJMRDn_branch != 0) MVVXJMRDn();
  if (PtVVXJMRDn_branch != 0) PtVVXJMRDn();
  if (HTJMRDn_branch != 0) HTJMRDn();
  if (HTJJMRDn_branch != 0) HTJJMRDn();
  if (HTFJJMRDn_branch != 0) HTFJJMRDn();
  if (SumPtFJJMRDn_branch != 0) SumPtFJJMRDn();
  if (SumPtJJMRDn_branch != 0) SumPtJJMRDn();
  if (GenV0_branch != 0) GenV0();
  if (GenV1_branch != 0) GenV1();
  if (GenV2_branch != 0) GenV2();
  if (isHad0_branch != 0) isHad0();
  if (isHad1_branch != 0) isHad1();
  if (isHad2_branch != 0) isHad2();
  if (GenF00_branch != 0) GenF00();
  if (GenF01_branch != 0) GenF01();
  if (GenF10_branch != 0) GenF10();
  if (GenF11_branch != 0) GenF11();
  if (GenF20_branch != 0) GenF20();
  if (GenF21_branch != 0) GenF21();
}

const int &VVV0Tree::isData() {
  if (not isData_isLoaded) {
    if (isData_branch != 0) {
      isData_branch->GetEntry(index);
    } else {
      printf("branch isData_branch does not exist!\n");
      exit(1);
    }
    isData_isLoaded = true;
  }
  return isData_;
}

const int &VVV0Tree::run() {
  if (not run_isLoaded) {
    if (run_branch != 0) {
      run_branch->GetEntry(index);
    } else {
      printf("branch run_branch does not exist!\n");
      exit(1);
    }
    run_isLoaded = true;
  }
  return run_;
}

const int &VVV0Tree::lumi() {
  if (not lumi_isLoaded) {
    if (lumi_branch != 0) {
      lumi_branch->GetEntry(index);
    } else {
      printf("branch lumi_branch does not exist!\n");
      exit(1);
    }
    lumi_isLoaded = true;
  }
  return lumi_;
}

const unsigned long long &VVV0Tree::evt() {
  if (not evt_isLoaded) {
    if (evt_branch != 0) {
      evt_branch->GetEntry(index);
    } else {
      printf("branch evt_branch does not exist!\n");
      exit(1);
    }
    evt_isLoaded = true;
  }
  return evt_;
}

const int &VVV0Tree::year() {
  if (not year_isLoaded) {
    if (year_branch != 0) {
      year_branch->GetEntry(index);
    } else {
      printf("branch year_branch does not exist!\n");
      exit(1);
    }
    year_isLoaded = true;
  }
  return year_;
}

const float &VVV0Tree::genWeight() {
  if (not genWeight_isLoaded) {
    if (genWeight_branch != 0) {
      genWeight_branch->GetEntry(index);
    } else {
      printf("branch genWeight_branch does not exist!\n");
      exit(1);
    }
    genWeight_isLoaded = true;
  }
  return genWeight_;
}

const float &VVV0Tree::wgt() {
  if (not wgt_isLoaded) {
    if (wgt_branch != 0) {
      wgt_branch->GetEntry(index);
    } else {
      printf("branch wgt_branch does not exist!\n");
      exit(1);
    }
    wgt_isLoaded = true;
  }
  return wgt_;
}

const vector<float> &VVV0Tree::LHEReweightingWeight() {
  if (not LHEReweightingWeight_isLoaded) {
    if (LHEReweightingWeight_branch != 0) {
      LHEReweightingWeight_branch->GetEntry(index);
    } else {
      printf("branch LHEReweightingWeight_branch does not exist!\n");
      exit(1);
    }
    LHEReweightingWeight_isLoaded = true;
  }
  return *LHEReweightingWeight_;
}

const float &VVV0Tree::prefireWgt() {
  if (not prefireWgt_isLoaded) {
    if (prefireWgt_branch != 0) {
      prefireWgt_branch->GetEntry(index);
    } else {
      printf("branch prefireWgt_branch does not exist!\n");
      exit(1);
    }
    prefireWgt_isLoaded = true;
  }
  return prefireWgt_;
}

const float &VVV0Tree::prefireWgtUp() {
  if (not prefireWgtUp_isLoaded) {
    if (prefireWgtUp_branch != 0) {
      prefireWgtUp_branch->GetEntry(index);
    } else {
      printf("branch prefireWgtUp_branch does not exist!\n");
      exit(1);
    }
    prefireWgtUp_isLoaded = true;
  }
  return prefireWgtUp_;
}

const float &VVV0Tree::prefireWgtDn() {
  if (not prefireWgtDn_isLoaded) {
    if (prefireWgtDn_branch != 0) {
      prefireWgtDn_branch->GetEntry(index);
    } else {
      printf("branch prefireWgtDn_branch does not exist!\n");
      exit(1);
    }
    prefireWgtDn_isLoaded = true;
  }
  return prefireWgtDn_;
}

const float &VVV0Tree::puWgt() {
  if (not puWgt_isLoaded) {
    if (puWgt_branch != 0) {
      puWgt_branch->GetEntry(index);
    } else {
      printf("branch puWgt_branch does not exist!\n");
      exit(1);
    }
    puWgt_isLoaded = true;
  }
  return puWgt_;
}

const float &VVV0Tree::puWgtUp() {
  if (not puWgtUp_isLoaded) {
    if (puWgtUp_branch != 0) {
      puWgtUp_branch->GetEntry(index);
    } else {
      printf("branch puWgtUp_branch does not exist!\n");
      exit(1);
    }
    puWgtUp_isLoaded = true;
  }
  return puWgtUp_;
}

const float &VVV0Tree::puWgtDn() {
  if (not puWgtDn_isLoaded) {
    if (puWgtDn_branch != 0) {
      puWgtDn_branch->GetEntry(index);
    } else {
      printf("branch puWgtDn_branch does not exist!\n");
      exit(1);
    }
    puWgtDn_isLoaded = true;
  }
  return puWgtDn_;
}

const float &VVV0Tree::trigWgt() {
  if (not trigWgt_isLoaded) {
    if (trigWgt_branch != 0) {
      trigWgt_branch->GetEntry(index);
    } else {
      printf("branch trigWgt_branch does not exist!\n");
      exit(1);
    }
    trigWgt_isLoaded = true;
  }
  return trigWgt_;
}

const float &VVV0Tree::trigWgtUp() {
  if (not trigWgtUp_isLoaded) {
    if (trigWgtUp_branch != 0) {
      trigWgtUp_branch->GetEntry(index);
    } else {
      printf("branch trigWgtUp_branch does not exist!\n");
      exit(1);
    }
    trigWgtUp_isLoaded = true;
  }
  return trigWgtUp_;
}

const float &VVV0Tree::trigWgtDn() {
  if (not trigWgtDn_isLoaded) {
    if (trigWgtDn_branch != 0) {
      trigWgtDn_branch->GetEntry(index);
    } else {
      printf("branch trigWgtDn_branch does not exist!\n");
      exit(1);
    }
    trigWgtDn_isLoaded = true;
  }
  return trigWgtDn_;
}

const int &VVV0Tree::trigger() {
  if (not trigger_isLoaded) {
    if (trigger_branch != 0) {
      trigger_branch->GetEntry(index);
    } else {
      printf("branch trigger_branch does not exist!\n");
      exit(1);
    }
    trigger_isLoaded = true;
  }
  return trigger_;
}

const int &VVV0Tree::is0Lep() {
  if (not is0Lep_isLoaded) {
    if (is0Lep_branch != 0) {
      is0Lep_branch->GetEntry(index);
    } else {
      printf("branch is0Lep_branch does not exist!\n");
      exit(1);
    }
    is0Lep_isLoaded = true;
  }
  return is0Lep_;
}

const int &VVV0Tree::is1Lep() {
  if (not is1Lep_isLoaded) {
    if (is1Lep_branch != 0) {
      is1Lep_branch->GetEntry(index);
    } else {
      printf("branch is1Lep_branch does not exist!\n");
      exit(1);
    }
    is1Lep_isLoaded = true;
  }
  return is1Lep_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::Lep() {
  if (not Lep_isLoaded) {
    if (Lep_branch != 0) {
      Lep_branch->GetEntry(index);
    } else {
      printf("branch Lep_branch does not exist!\n");
      exit(1);
    }
    Lep_isLoaded = true;
  }
  return *Lep_;
}

const int &VVV0Tree::LepFlav() {
  if (not LepFlav_isLoaded) {
    if (LepFlav_branch != 0) {
      LepFlav_branch->GetEntry(index);
    } else {
      printf("branch LepFlav_branch does not exist!\n");
      exit(1);
    }
    LepFlav_isLoaded = true;
  }
  return LepFlav_;
}

const int &VVV0Tree::NFJ() {
  if (not NFJ_isLoaded) {
    if (NFJ_branch != 0) {
      NFJ_branch->GetEntry(index);
    } else {
      printf("branch NFJ_branch does not exist!\n");
      exit(1);
    }
    NFJ_isLoaded = true;
  }
  return NFJ_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0() {
  if (not FJ0_isLoaded) {
    if (FJ0_branch != 0) {
      FJ0_branch->GetEntry(index);
    } else {
      printf("branch FJ0_branch does not exist!\n");
      exit(1);
    }
    FJ0_isLoaded = true;
  }
  return *FJ0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1() {
  if (not FJ1_isLoaded) {
    if (FJ1_branch != 0) {
      FJ1_branch->GetEntry(index);
    } else {
      printf("branch FJ1_branch does not exist!\n");
      exit(1);
    }
    FJ1_isLoaded = true;
  }
  return *FJ1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2() {
  if (not FJ2_isLoaded) {
    if (FJ2_branch != 0) {
      FJ2_branch->GetEntry(index);
    } else {
      printf("branch FJ2_branch does not exist!\n");
      exit(1);
    }
    FJ2_isLoaded = true;
  }
  return *FJ2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3() {
  if (not FJ3_isLoaded) {
    if (FJ3_branch != 0) {
      FJ3_branch->GetEntry(index);
    } else {
      printf("branch FJ3_branch does not exist!\n");
      exit(1);
    }
    FJ3_isLoaded = true;
  }
  return *FJ3_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4() {
  if (not FJ4_isLoaded) {
    if (FJ4_branch != 0) {
      FJ4_branch->GetEntry(index);
    } else {
      printf("branch FJ4_branch does not exist!\n");
      exit(1);
    }
    FJ4_isLoaded = true;
  }
  return *FJ4_;
}

const float &VVV0Tree::VMD0() {
  if (not VMD0_isLoaded) {
    if (VMD0_branch != 0) {
      VMD0_branch->GetEntry(index);
    } else {
      printf("branch VMD0_branch does not exist!\n");
      exit(1);
    }
    VMD0_isLoaded = true;
  }
  return VMD0_;
}

const float &VVV0Tree::VMD1() {
  if (not VMD1_isLoaded) {
    if (VMD1_branch != 0) {
      VMD1_branch->GetEntry(index);
    } else {
      printf("branch VMD1_branch does not exist!\n");
      exit(1);
    }
    VMD1_isLoaded = true;
  }
  return VMD1_;
}

const float &VVV0Tree::VMD2() {
  if (not VMD2_isLoaded) {
    if (VMD2_branch != 0) {
      VMD2_branch->GetEntry(index);
    } else {
      printf("branch VMD2_branch does not exist!\n");
      exit(1);
    }
    VMD2_isLoaded = true;
  }
  return VMD2_;
}

const float &VVV0Tree::VMD3() {
  if (not VMD3_isLoaded) {
    if (VMD3_branch != 0) {
      VMD3_branch->GetEntry(index);
    } else {
      printf("branch VMD3_branch does not exist!\n");
      exit(1);
    }
    VMD3_isLoaded = true;
  }
  return VMD3_;
}

const float &VVV0Tree::VMD4() {
  if (not VMD4_isLoaded) {
    if (VMD4_branch != 0) {
      VMD4_branch->GetEntry(index);
    } else {
      printf("branch VMD4_branch does not exist!\n");
      exit(1);
    }
    VMD4_isLoaded = true;
  }
  return VMD4_;
}

const float &VVV0Tree::WMD0() {
  if (not WMD0_isLoaded) {
    if (WMD0_branch != 0) {
      WMD0_branch->GetEntry(index);
    } else {
      printf("branch WMD0_branch does not exist!\n");
      exit(1);
    }
    WMD0_isLoaded = true;
  }
  return WMD0_;
}

const float &VVV0Tree::WMD1() {
  if (not WMD1_isLoaded) {
    if (WMD1_branch != 0) {
      WMD1_branch->GetEntry(index);
    } else {
      printf("branch WMD1_branch does not exist!\n");
      exit(1);
    }
    WMD1_isLoaded = true;
  }
  return WMD1_;
}

const float &VVV0Tree::WMD2() {
  if (not WMD2_isLoaded) {
    if (WMD2_branch != 0) {
      WMD2_branch->GetEntry(index);
    } else {
      printf("branch WMD2_branch does not exist!\n");
      exit(1);
    }
    WMD2_isLoaded = true;
  }
  return WMD2_;
}

const float &VVV0Tree::WMD3() {
  if (not WMD3_isLoaded) {
    if (WMD3_branch != 0) {
      WMD3_branch->GetEntry(index);
    } else {
      printf("branch WMD3_branch does not exist!\n");
      exit(1);
    }
    WMD3_isLoaded = true;
  }
  return WMD3_;
}

const float &VVV0Tree::WMD4() {
  if (not WMD4_isLoaded) {
    if (WMD4_branch != 0) {
      WMD4_branch->GetEntry(index);
    } else {
      printf("branch WMD4_branch does not exist!\n");
      exit(1);
    }
    WMD4_isLoaded = true;
  }
  return WMD4_;
}

const int &VVV0Tree::NQGen0() {
  if (not NQGen0_isLoaded) {
    if (NQGen0_branch != 0) {
      NQGen0_branch->GetEntry(index);
    } else {
      printf("branch NQGen0_branch does not exist!\n");
      exit(1);
    }
    NQGen0_isLoaded = true;
  }
  return NQGen0_;
}

const int &VVV0Tree::NQGen1() {
  if (not NQGen1_isLoaded) {
    if (NQGen1_branch != 0) {
      NQGen1_branch->GetEntry(index);
    } else {
      printf("branch NQGen1_branch does not exist!\n");
      exit(1);
    }
    NQGen1_isLoaded = true;
  }
  return NQGen1_;
}

const int &VVV0Tree::NQGen2() {
  if (not NQGen2_isLoaded) {
    if (NQGen2_branch != 0) {
      NQGen2_branch->GetEntry(index);
    } else {
      printf("branch NQGen2_branch does not exist!\n");
      exit(1);
    }
    NQGen2_isLoaded = true;
  }
  return NQGen2_;
}

const int &VVV0Tree::NQGen3() {
  if (not NQGen3_isLoaded) {
    if (NQGen3_branch != 0) {
      NQGen3_branch->GetEntry(index);
    } else {
      printf("branch NQGen3_branch does not exist!\n");
      exit(1);
    }
    NQGen3_isLoaded = true;
  }
  return NQGen3_;
}

const int &VVV0Tree::NQGen4() {
  if (not NQGen4_isLoaded) {
    if (NQGen4_branch != 0) {
      NQGen4_branch->GetEntry(index);
    } else {
      printf("branch NQGen4_branch does not exist!\n");
      exit(1);
    }
    NQGen4_isLoaded = true;
  }
  return NQGen4_;
}

const int &VVV0Tree::NBGen0() {
  if (not NBGen0_isLoaded) {
    if (NBGen0_branch != 0) {
      NBGen0_branch->GetEntry(index);
    } else {
      printf("branch NBGen0_branch does not exist!\n");
      exit(1);
    }
    NBGen0_isLoaded = true;
  }
  return NBGen0_;
}

const int &VVV0Tree::NBGen1() {
  if (not NBGen1_isLoaded) {
    if (NBGen1_branch != 0) {
      NBGen1_branch->GetEntry(index);
    } else {
      printf("branch NBGen1_branch does not exist!\n");
      exit(1);
    }
    NBGen1_isLoaded = true;
  }
  return NBGen1_;
}

const int &VVV0Tree::NBGen2() {
  if (not NBGen2_isLoaded) {
    if (NBGen2_branch != 0) {
      NBGen2_branch->GetEntry(index);
    } else {
      printf("branch NBGen2_branch does not exist!\n");
      exit(1);
    }
    NBGen2_isLoaded = true;
  }
  return NBGen2_;
}

const int &VVV0Tree::NBGen3() {
  if (not NBGen3_isLoaded) {
    if (NBGen3_branch != 0) {
      NBGen3_branch->GetEntry(index);
    } else {
      printf("branch NBGen3_branch does not exist!\n");
      exit(1);
    }
    NBGen3_isLoaded = true;
  }
  return NBGen3_;
}

const int &VVV0Tree::NBGen4() {
  if (not NBGen4_isLoaded) {
    if (NBGen4_branch != 0) {
      NBGen4_branch->GetEntry(index);
    } else {
      printf("branch NBGen4_branch does not exist!\n");
      exit(1);
    }
    NBGen4_isLoaded = true;
  }
  return NBGen4_;
}

const int &VVV0Tree::NLGen0() {
  if (not NLGen0_isLoaded) {
    if (NLGen0_branch != 0) {
      NLGen0_branch->GetEntry(index);
    } else {
      printf("branch NLGen0_branch does not exist!\n");
      exit(1);
    }
    NLGen0_isLoaded = true;
  }
  return NLGen0_;
}

const int &VVV0Tree::NLGen1() {
  if (not NLGen1_isLoaded) {
    if (NLGen1_branch != 0) {
      NLGen1_branch->GetEntry(index);
    } else {
      printf("branch NLGen1_branch does not exist!\n");
      exit(1);
    }
    NLGen1_isLoaded = true;
  }
  return NLGen1_;
}

const int &VVV0Tree::NLGen2() {
  if (not NLGen2_isLoaded) {
    if (NLGen2_branch != 0) {
      NLGen2_branch->GetEntry(index);
    } else {
      printf("branch NLGen2_branch does not exist!\n");
      exit(1);
    }
    NLGen2_isLoaded = true;
  }
  return NLGen2_;
}

const int &VVV0Tree::NLGen3() {
  if (not NLGen3_isLoaded) {
    if (NLGen3_branch != 0) {
      NLGen3_branch->GetEntry(index);
    } else {
      printf("branch NLGen3_branch does not exist!\n");
      exit(1);
    }
    NLGen3_isLoaded = true;
  }
  return NLGen3_;
}

const int &VVV0Tree::NLGen4() {
  if (not NLGen4_isLoaded) {
    if (NLGen4_branch != 0) {
      NLGen4_branch->GetEntry(index);
    } else {
      printf("branch NLGen4_branch does not exist!\n");
      exit(1);
    }
    NLGen4_isLoaded = true;
  }
  return NLGen4_;
}

const int &VVV0Tree::NiFJ() {
  if (not NiFJ_isLoaded) {
    if (NiFJ_branch != 0) {
      NiFJ_branch->GetEntry(index);
    } else {
      printf("branch NiFJ_branch does not exist!\n");
      exit(1);
    }
    NiFJ_isLoaded = true;
  }
  return NiFJ_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0() {
  if (not iFJ0_isLoaded) {
    if (iFJ0_branch != 0) {
      iFJ0_branch->GetEntry(index);
    } else {
      printf("branch iFJ0_branch does not exist!\n");
      exit(1);
    }
    iFJ0_isLoaded = true;
  }
  return *iFJ0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1() {
  if (not iFJ1_isLoaded) {
    if (iFJ1_branch != 0) {
      iFJ1_branch->GetEntry(index);
    } else {
      printf("branch iFJ1_branch does not exist!\n");
      exit(1);
    }
    iFJ1_isLoaded = true;
  }
  return *iFJ1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2() {
  if (not iFJ2_isLoaded) {
    if (iFJ2_branch != 0) {
      iFJ2_branch->GetEntry(index);
    } else {
      printf("branch iFJ2_branch does not exist!\n");
      exit(1);
    }
    iFJ2_isLoaded = true;
  }
  return *iFJ2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3() {
  if (not iFJ3_isLoaded) {
    if (iFJ3_branch != 0) {
      iFJ3_branch->GetEntry(index);
    } else {
      printf("branch iFJ3_branch does not exist!\n");
      exit(1);
    }
    iFJ3_isLoaded = true;
  }
  return *iFJ3_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4() {
  if (not iFJ4_isLoaded) {
    if (iFJ4_branch != 0) {
      iFJ4_branch->GetEntry(index);
    } else {
      printf("branch iFJ4_branch does not exist!\n");
      exit(1);
    }
    iFJ4_isLoaded = true;
  }
  return *iFJ4_;
}

const float &VVV0Tree::iVMD0() {
  if (not iVMD0_isLoaded) {
    if (iVMD0_branch != 0) {
      iVMD0_branch->GetEntry(index);
    } else {
      printf("branch iVMD0_branch does not exist!\n");
      exit(1);
    }
    iVMD0_isLoaded = true;
  }
  return iVMD0_;
}

const float &VVV0Tree::iVMD1() {
  if (not iVMD1_isLoaded) {
    if (iVMD1_branch != 0) {
      iVMD1_branch->GetEntry(index);
    } else {
      printf("branch iVMD1_branch does not exist!\n");
      exit(1);
    }
    iVMD1_isLoaded = true;
  }
  return iVMD1_;
}

const float &VVV0Tree::iVMD2() {
  if (not iVMD2_isLoaded) {
    if (iVMD2_branch != 0) {
      iVMD2_branch->GetEntry(index);
    } else {
      printf("branch iVMD2_branch does not exist!\n");
      exit(1);
    }
    iVMD2_isLoaded = true;
  }
  return iVMD2_;
}

const float &VVV0Tree::iVMD3() {
  if (not iVMD3_isLoaded) {
    if (iVMD3_branch != 0) {
      iVMD3_branch->GetEntry(index);
    } else {
      printf("branch iVMD3_branch does not exist!\n");
      exit(1);
    }
    iVMD3_isLoaded = true;
  }
  return iVMD3_;
}

const float &VVV0Tree::iVMD4() {
  if (not iVMD4_isLoaded) {
    if (iVMD4_branch != 0) {
      iVMD4_branch->GetEntry(index);
    } else {
      printf("branch iVMD4_branch does not exist!\n");
      exit(1);
    }
    iVMD4_isLoaded = true;
  }
  return iVMD4_;
}

const float &VVV0Tree::iWMD0() {
  if (not iWMD0_isLoaded) {
    if (iWMD0_branch != 0) {
      iWMD0_branch->GetEntry(index);
    } else {
      printf("branch iWMD0_branch does not exist!\n");
      exit(1);
    }
    iWMD0_isLoaded = true;
  }
  return iWMD0_;
}

const float &VVV0Tree::iWMD1() {
  if (not iWMD1_isLoaded) {
    if (iWMD1_branch != 0) {
      iWMD1_branch->GetEntry(index);
    } else {
      printf("branch iWMD1_branch does not exist!\n");
      exit(1);
    }
    iWMD1_isLoaded = true;
  }
  return iWMD1_;
}

const float &VVV0Tree::iWMD2() {
  if (not iWMD2_isLoaded) {
    if (iWMD2_branch != 0) {
      iWMD2_branch->GetEntry(index);
    } else {
      printf("branch iWMD2_branch does not exist!\n");
      exit(1);
    }
    iWMD2_isLoaded = true;
  }
  return iWMD2_;
}

const float &VVV0Tree::iWMD3() {
  if (not iWMD3_isLoaded) {
    if (iWMD3_branch != 0) {
      iWMD3_branch->GetEntry(index);
    } else {
      printf("branch iWMD3_branch does not exist!\n");
      exit(1);
    }
    iWMD3_isLoaded = true;
  }
  return iWMD3_;
}

const float &VVV0Tree::iWMD4() {
  if (not iWMD4_isLoaded) {
    if (iWMD4_branch != 0) {
      iWMD4_branch->GetEntry(index);
    } else {
      printf("branch iWMD4_branch does not exist!\n");
      exit(1);
    }
    iWMD4_isLoaded = true;
  }
  return iWMD4_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::MET() {
  if (not MET_isLoaded) {
    if (MET_branch != 0) {
      MET_branch->GetEntry(index);
    } else {
      printf("branch MET_branch does not exist!\n");
      exit(1);
    }
    MET_isLoaded = true;
  }
  return *MET_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::Nu() {
  if (not Nu_isLoaded) {
    if (Nu_branch != 0) {
      Nu_branch->GetEntry(index);
    } else {
      printf("branch Nu_branch does not exist!\n");
      exit(1);
    }
    Nu_isLoaded = true;
  }
  return *Nu_;
}

const int &VVV0Tree::NJ() {
  if (not NJ_isLoaded) {
    if (NJ_branch != 0) {
      NJ_branch->GetEntry(index);
    } else {
      printf("branch NJ_branch does not exist!\n");
      exit(1);
    }
    NJ_isLoaded = true;
  }
  return NJ_;
}

const int &VVV0Tree::NbLoose() {
  if (not NbLoose_isLoaded) {
    if (NbLoose_branch != 0) {
      NbLoose_branch->GetEntry(index);
    } else {
      printf("branch NbLoose_branch does not exist!\n");
      exit(1);
    }
    NbLoose_isLoaded = true;
  }
  return NbLoose_;
}

const int &VVV0Tree::NbMedium() {
  if (not NbMedium_isLoaded) {
    if (NbMedium_branch != 0) {
      NbMedium_branch->GetEntry(index);
    } else {
      printf("branch NbMedium_branch does not exist!\n");
      exit(1);
    }
    NbMedium_isLoaded = true;
  }
  return NbMedium_;
}

const int &VVV0Tree::NbTight() {
  if (not NbTight_isLoaded) {
    if (NbTight_branch != 0) {
      NbTight_branch->GetEntry(index);
    } else {
      printf("branch NbTight_branch does not exist!\n");
      exit(1);
    }
    NbTight_isLoaded = true;
  }
  return NbTight_;
}

const int &VVV0Tree::NoORNbLoose() {
  if (not NoORNbLoose_isLoaded) {
    if (NoORNbLoose_branch != 0) {
      NoORNbLoose_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLoose_branch does not exist!\n");
      exit(1);
    }
    NoORNbLoose_isLoaded = true;
  }
  return NoORNbLoose_;
}

const int &VVV0Tree::NoORNbMedium() {
  if (not NoORNbMedium_isLoaded) {
    if (NoORNbMedium_branch != 0) {
      NoORNbMedium_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMedium_branch does not exist!\n");
      exit(1);
    }
    NoORNbMedium_isLoaded = true;
  }
  return NoORNbMedium_;
}

const int &VVV0Tree::NoORNbTight() {
  if (not NoORNbTight_isLoaded) {
    if (NoORNbTight_branch != 0) {
      NoORNbTight_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTight_branch does not exist!\n");
      exit(1);
    }
    NoORNbTight_isLoaded = true;
  }
  return NoORNbTight_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0() {
  if (not J0_isLoaded) {
    if (J0_branch != 0) {
      J0_branch->GetEntry(index);
    } else {
      printf("branch J0_branch does not exist!\n");
      exit(1);
    }
    J0_isLoaded = true;
  }
  return *J0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1() {
  if (not J1_isLoaded) {
    if (J1_branch != 0) {
      J1_branch->GetEntry(index);
    } else {
      printf("branch J1_branch does not exist!\n");
      exit(1);
    }
    J1_isLoaded = true;
  }
  return *J1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2() {
  if (not J2_isLoaded) {
    if (J2_branch != 0) {
      J2_branch->GetEntry(index);
    } else {
      printf("branch J2_branch does not exist!\n");
      exit(1);
    }
    J2_isLoaded = true;
  }
  return *J2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3() {
  if (not J3_isLoaded) {
    if (J3_branch != 0) {
      J3_branch->GetEntry(index);
    } else {
      printf("branch J3_branch does not exist!\n");
      exit(1);
    }
    J3_isLoaded = true;
  }
  return *J3_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4() {
  if (not J4_isLoaded) {
    if (J4_branch != 0) {
      J4_branch->GetEntry(index);
    } else {
      printf("branch J4_branch does not exist!\n");
      exit(1);
    }
    J4_isLoaded = true;
  }
  return *J4_;
}

const float &VVV0Tree::MVVX() {
  if (not MVVX_isLoaded) {
    if (MVVX_branch != 0) {
      MVVX_branch->GetEntry(index);
    } else {
      printf("branch MVVX_branch does not exist!\n");
      exit(1);
    }
    MVVX_isLoaded = true;
  }
  return MVVX_;
}

const float &VVV0Tree::PtVVX() {
  if (not PtVVX_isLoaded) {
    if (PtVVX_branch != 0) {
      PtVVX_branch->GetEntry(index);
    } else {
      printf("branch PtVVX_branch does not exist!\n");
      exit(1);
    }
    PtVVX_isLoaded = true;
  }
  return PtVVX_;
}

const float &VVV0Tree::HT() {
  if (not HT_isLoaded) {
    if (HT_branch != 0) {
      HT_branch->GetEntry(index);
    } else {
      printf("branch HT_branch does not exist!\n");
      exit(1);
    }
    HT_isLoaded = true;
  }
  return HT_;
}

const float &VVV0Tree::HTJ() {
  if (not HTJ_isLoaded) {
    if (HTJ_branch != 0) {
      HTJ_branch->GetEntry(index);
    } else {
      printf("branch HTJ_branch does not exist!\n");
      exit(1);
    }
    HTJ_isLoaded = true;
  }
  return HTJ_;
}

const float &VVV0Tree::HTFJ() {
  if (not HTFJ_isLoaded) {
    if (HTFJ_branch != 0) {
      HTFJ_branch->GetEntry(index);
    } else {
      printf("branch HTFJ_branch does not exist!\n");
      exit(1);
    }
    HTFJ_isLoaded = true;
  }
  return HTFJ_;
}

const float &VVV0Tree::SumPtFJ() {
  if (not SumPtFJ_isLoaded) {
    if (SumPtFJ_branch != 0) {
      SumPtFJ_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJ_branch does not exist!\n");
      exit(1);
    }
    SumPtFJ_isLoaded = true;
  }
  return SumPtFJ_;
}

const float &VVV0Tree::SumPtJ() {
  if (not SumPtJ_isLoaded) {
    if (SumPtJ_branch != 0) {
      SumPtJ_branch->GetEntry(index);
    } else {
      printf("branch SumPtJ_branch does not exist!\n");
      exit(1);
    }
    SumPtJ_isLoaded = true;
  }
  return SumPtJ_;
}

const int &VVV0Tree::NFJJESUp() {
  if (not NFJJESUp_isLoaded) {
    if (NFJJESUp_branch != 0) {
      NFJJESUp_branch->GetEntry(index);
    } else {
      printf("branch NFJJESUp_branch does not exist!\n");
      exit(1);
    }
    NFJJESUp_isLoaded = true;
  }
  return NFJJESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JESUp() {
  if (not FJ0JESUp_isLoaded) {
    if (FJ0JESUp_branch != 0) {
      FJ0JESUp_branch->GetEntry(index);
    } else {
      printf("branch FJ0JESUp_branch does not exist!\n");
      exit(1);
    }
    FJ0JESUp_isLoaded = true;
  }
  return *FJ0JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JESUp() {
  if (not FJ1JESUp_isLoaded) {
    if (FJ1JESUp_branch != 0) {
      FJ1JESUp_branch->GetEntry(index);
    } else {
      printf("branch FJ1JESUp_branch does not exist!\n");
      exit(1);
    }
    FJ1JESUp_isLoaded = true;
  }
  return *FJ1JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JESUp() {
  if (not FJ2JESUp_isLoaded) {
    if (FJ2JESUp_branch != 0) {
      FJ2JESUp_branch->GetEntry(index);
    } else {
      printf("branch FJ2JESUp_branch does not exist!\n");
      exit(1);
    }
    FJ2JESUp_isLoaded = true;
  }
  return *FJ2JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JESUp() {
  if (not FJ3JESUp_isLoaded) {
    if (FJ3JESUp_branch != 0) {
      FJ3JESUp_branch->GetEntry(index);
    } else {
      printf("branch FJ3JESUp_branch does not exist!\n");
      exit(1);
    }
    FJ3JESUp_isLoaded = true;
  }
  return *FJ3JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JESUp() {
  if (not FJ4JESUp_isLoaded) {
    if (FJ4JESUp_branch != 0) {
      FJ4JESUp_branch->GetEntry(index);
    } else {
      printf("branch FJ4JESUp_branch does not exist!\n");
      exit(1);
    }
    FJ4JESUp_isLoaded = true;
  }
  return *FJ4JESUp_;
}

const float &VVV0Tree::VMD0JESUp() {
  if (not VMD0JESUp_isLoaded) {
    if (VMD0JESUp_branch != 0) {
      VMD0JESUp_branch->GetEntry(index);
    } else {
      printf("branch VMD0JESUp_branch does not exist!\n");
      exit(1);
    }
    VMD0JESUp_isLoaded = true;
  }
  return VMD0JESUp_;
}

const float &VVV0Tree::VMD1JESUp() {
  if (not VMD1JESUp_isLoaded) {
    if (VMD1JESUp_branch != 0) {
      VMD1JESUp_branch->GetEntry(index);
    } else {
      printf("branch VMD1JESUp_branch does not exist!\n");
      exit(1);
    }
    VMD1JESUp_isLoaded = true;
  }
  return VMD1JESUp_;
}

const float &VVV0Tree::VMD2JESUp() {
  if (not VMD2JESUp_isLoaded) {
    if (VMD2JESUp_branch != 0) {
      VMD2JESUp_branch->GetEntry(index);
    } else {
      printf("branch VMD2JESUp_branch does not exist!\n");
      exit(1);
    }
    VMD2JESUp_isLoaded = true;
  }
  return VMD2JESUp_;
}

const float &VVV0Tree::VMD3JESUp() {
  if (not VMD3JESUp_isLoaded) {
    if (VMD3JESUp_branch != 0) {
      VMD3JESUp_branch->GetEntry(index);
    } else {
      printf("branch VMD3JESUp_branch does not exist!\n");
      exit(1);
    }
    VMD3JESUp_isLoaded = true;
  }
  return VMD3JESUp_;
}

const float &VVV0Tree::VMD4JESUp() {
  if (not VMD4JESUp_isLoaded) {
    if (VMD4JESUp_branch != 0) {
      VMD4JESUp_branch->GetEntry(index);
    } else {
      printf("branch VMD4JESUp_branch does not exist!\n");
      exit(1);
    }
    VMD4JESUp_isLoaded = true;
  }
  return VMD4JESUp_;
}

const float &VVV0Tree::WMD0JESUp() {
  if (not WMD0JESUp_isLoaded) {
    if (WMD0JESUp_branch != 0) {
      WMD0JESUp_branch->GetEntry(index);
    } else {
      printf("branch WMD0JESUp_branch does not exist!\n");
      exit(1);
    }
    WMD0JESUp_isLoaded = true;
  }
  return WMD0JESUp_;
}

const float &VVV0Tree::WMD1JESUp() {
  if (not WMD1JESUp_isLoaded) {
    if (WMD1JESUp_branch != 0) {
      WMD1JESUp_branch->GetEntry(index);
    } else {
      printf("branch WMD1JESUp_branch does not exist!\n");
      exit(1);
    }
    WMD1JESUp_isLoaded = true;
  }
  return WMD1JESUp_;
}

const float &VVV0Tree::WMD2JESUp() {
  if (not WMD2JESUp_isLoaded) {
    if (WMD2JESUp_branch != 0) {
      WMD2JESUp_branch->GetEntry(index);
    } else {
      printf("branch WMD2JESUp_branch does not exist!\n");
      exit(1);
    }
    WMD2JESUp_isLoaded = true;
  }
  return WMD2JESUp_;
}

const float &VVV0Tree::WMD3JESUp() {
  if (not WMD3JESUp_isLoaded) {
    if (WMD3JESUp_branch != 0) {
      WMD3JESUp_branch->GetEntry(index);
    } else {
      printf("branch WMD3JESUp_branch does not exist!\n");
      exit(1);
    }
    WMD3JESUp_isLoaded = true;
  }
  return WMD3JESUp_;
}

const float &VVV0Tree::WMD4JESUp() {
  if (not WMD4JESUp_isLoaded) {
    if (WMD4JESUp_branch != 0) {
      WMD4JESUp_branch->GetEntry(index);
    } else {
      printf("branch WMD4JESUp_branch does not exist!\n");
      exit(1);
    }
    WMD4JESUp_isLoaded = true;
  }
  return WMD4JESUp_;
}

const int &VVV0Tree::NQGen0JESUp() {
  if (not NQGen0JESUp_isLoaded) {
    if (NQGen0JESUp_branch != 0) {
      NQGen0JESUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JESUp_branch does not exist!\n");
      exit(1);
    }
    NQGen0JESUp_isLoaded = true;
  }
  return NQGen0JESUp_;
}

const int &VVV0Tree::NQGen1JESUp() {
  if (not NQGen1JESUp_isLoaded) {
    if (NQGen1JESUp_branch != 0) {
      NQGen1JESUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JESUp_branch does not exist!\n");
      exit(1);
    }
    NQGen1JESUp_isLoaded = true;
  }
  return NQGen1JESUp_;
}

const int &VVV0Tree::NQGen2JESUp() {
  if (not NQGen2JESUp_isLoaded) {
    if (NQGen2JESUp_branch != 0) {
      NQGen2JESUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JESUp_branch does not exist!\n");
      exit(1);
    }
    NQGen2JESUp_isLoaded = true;
  }
  return NQGen2JESUp_;
}

const int &VVV0Tree::NQGen3JESUp() {
  if (not NQGen3JESUp_isLoaded) {
    if (NQGen3JESUp_branch != 0) {
      NQGen3JESUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JESUp_branch does not exist!\n");
      exit(1);
    }
    NQGen3JESUp_isLoaded = true;
  }
  return NQGen3JESUp_;
}

const int &VVV0Tree::NQGen4JESUp() {
  if (not NQGen4JESUp_isLoaded) {
    if (NQGen4JESUp_branch != 0) {
      NQGen4JESUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JESUp_branch does not exist!\n");
      exit(1);
    }
    NQGen4JESUp_isLoaded = true;
  }
  return NQGen4JESUp_;
}

const int &VVV0Tree::NBGen0JESUp() {
  if (not NBGen0JESUp_isLoaded) {
    if (NBGen0JESUp_branch != 0) {
      NBGen0JESUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JESUp_branch does not exist!\n");
      exit(1);
    }
    NBGen0JESUp_isLoaded = true;
  }
  return NBGen0JESUp_;
}

const int &VVV0Tree::NBGen1JESUp() {
  if (not NBGen1JESUp_isLoaded) {
    if (NBGen1JESUp_branch != 0) {
      NBGen1JESUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JESUp_branch does not exist!\n");
      exit(1);
    }
    NBGen1JESUp_isLoaded = true;
  }
  return NBGen1JESUp_;
}

const int &VVV0Tree::NBGen2JESUp() {
  if (not NBGen2JESUp_isLoaded) {
    if (NBGen2JESUp_branch != 0) {
      NBGen2JESUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JESUp_branch does not exist!\n");
      exit(1);
    }
    NBGen2JESUp_isLoaded = true;
  }
  return NBGen2JESUp_;
}

const int &VVV0Tree::NBGen3JESUp() {
  if (not NBGen3JESUp_isLoaded) {
    if (NBGen3JESUp_branch != 0) {
      NBGen3JESUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JESUp_branch does not exist!\n");
      exit(1);
    }
    NBGen3JESUp_isLoaded = true;
  }
  return NBGen3JESUp_;
}

const int &VVV0Tree::NBGen4JESUp() {
  if (not NBGen4JESUp_isLoaded) {
    if (NBGen4JESUp_branch != 0) {
      NBGen4JESUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JESUp_branch does not exist!\n");
      exit(1);
    }
    NBGen4JESUp_isLoaded = true;
  }
  return NBGen4JESUp_;
}

const int &VVV0Tree::NLGen0JESUp() {
  if (not NLGen0JESUp_isLoaded) {
    if (NLGen0JESUp_branch != 0) {
      NLGen0JESUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JESUp_branch does not exist!\n");
      exit(1);
    }
    NLGen0JESUp_isLoaded = true;
  }
  return NLGen0JESUp_;
}

const int &VVV0Tree::NLGen1JESUp() {
  if (not NLGen1JESUp_isLoaded) {
    if (NLGen1JESUp_branch != 0) {
      NLGen1JESUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JESUp_branch does not exist!\n");
      exit(1);
    }
    NLGen1JESUp_isLoaded = true;
  }
  return NLGen1JESUp_;
}

const int &VVV0Tree::NLGen2JESUp() {
  if (not NLGen2JESUp_isLoaded) {
    if (NLGen2JESUp_branch != 0) {
      NLGen2JESUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JESUp_branch does not exist!\n");
      exit(1);
    }
    NLGen2JESUp_isLoaded = true;
  }
  return NLGen2JESUp_;
}

const int &VVV0Tree::NLGen3JESUp() {
  if (not NLGen3JESUp_isLoaded) {
    if (NLGen3JESUp_branch != 0) {
      NLGen3JESUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JESUp_branch does not exist!\n");
      exit(1);
    }
    NLGen3JESUp_isLoaded = true;
  }
  return NLGen3JESUp_;
}

const int &VVV0Tree::NLGen4JESUp() {
  if (not NLGen4JESUp_isLoaded) {
    if (NLGen4JESUp_branch != 0) {
      NLGen4JESUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JESUp_branch does not exist!\n");
      exit(1);
    }
    NLGen4JESUp_isLoaded = true;
  }
  return NLGen4JESUp_;
}

const int &VVV0Tree::NiFJJESUp() {
  if (not NiFJJESUp_isLoaded) {
    if (NiFJJESUp_branch != 0) {
      NiFJJESUp_branch->GetEntry(index);
    } else {
      printf("branch NiFJJESUp_branch does not exist!\n");
      exit(1);
    }
    NiFJJESUp_isLoaded = true;
  }
  return NiFJJESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JESUp() {
  if (not iFJ0JESUp_isLoaded) {
    if (iFJ0JESUp_branch != 0) {
      iFJ0JESUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JESUp_branch does not exist!\n");
      exit(1);
    }
    iFJ0JESUp_isLoaded = true;
  }
  return *iFJ0JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JESUp() {
  if (not iFJ1JESUp_isLoaded) {
    if (iFJ1JESUp_branch != 0) {
      iFJ1JESUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JESUp_branch does not exist!\n");
      exit(1);
    }
    iFJ1JESUp_isLoaded = true;
  }
  return *iFJ1JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JESUp() {
  if (not iFJ2JESUp_isLoaded) {
    if (iFJ2JESUp_branch != 0) {
      iFJ2JESUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JESUp_branch does not exist!\n");
      exit(1);
    }
    iFJ2JESUp_isLoaded = true;
  }
  return *iFJ2JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JESUp() {
  if (not iFJ3JESUp_isLoaded) {
    if (iFJ3JESUp_branch != 0) {
      iFJ3JESUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JESUp_branch does not exist!\n");
      exit(1);
    }
    iFJ3JESUp_isLoaded = true;
  }
  return *iFJ3JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JESUp() {
  if (not iFJ4JESUp_isLoaded) {
    if (iFJ4JESUp_branch != 0) {
      iFJ4JESUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JESUp_branch does not exist!\n");
      exit(1);
    }
    iFJ4JESUp_isLoaded = true;
  }
  return *iFJ4JESUp_;
}

const float &VVV0Tree::iVMD0JESUp() {
  if (not iVMD0JESUp_isLoaded) {
    if (iVMD0JESUp_branch != 0) {
      iVMD0JESUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JESUp_branch does not exist!\n");
      exit(1);
    }
    iVMD0JESUp_isLoaded = true;
  }
  return iVMD0JESUp_;
}

const float &VVV0Tree::iVMD1JESUp() {
  if (not iVMD1JESUp_isLoaded) {
    if (iVMD1JESUp_branch != 0) {
      iVMD1JESUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JESUp_branch does not exist!\n");
      exit(1);
    }
    iVMD1JESUp_isLoaded = true;
  }
  return iVMD1JESUp_;
}

const float &VVV0Tree::iVMD2JESUp() {
  if (not iVMD2JESUp_isLoaded) {
    if (iVMD2JESUp_branch != 0) {
      iVMD2JESUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JESUp_branch does not exist!\n");
      exit(1);
    }
    iVMD2JESUp_isLoaded = true;
  }
  return iVMD2JESUp_;
}

const float &VVV0Tree::iVMD3JESUp() {
  if (not iVMD3JESUp_isLoaded) {
    if (iVMD3JESUp_branch != 0) {
      iVMD3JESUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JESUp_branch does not exist!\n");
      exit(1);
    }
    iVMD3JESUp_isLoaded = true;
  }
  return iVMD3JESUp_;
}

const float &VVV0Tree::iVMD4JESUp() {
  if (not iVMD4JESUp_isLoaded) {
    if (iVMD4JESUp_branch != 0) {
      iVMD4JESUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JESUp_branch does not exist!\n");
      exit(1);
    }
    iVMD4JESUp_isLoaded = true;
  }
  return iVMD4JESUp_;
}

const float &VVV0Tree::iWMD0JESUp() {
  if (not iWMD0JESUp_isLoaded) {
    if (iWMD0JESUp_branch != 0) {
      iWMD0JESUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JESUp_branch does not exist!\n");
      exit(1);
    }
    iWMD0JESUp_isLoaded = true;
  }
  return iWMD0JESUp_;
}

const float &VVV0Tree::iWMD1JESUp() {
  if (not iWMD1JESUp_isLoaded) {
    if (iWMD1JESUp_branch != 0) {
      iWMD1JESUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JESUp_branch does not exist!\n");
      exit(1);
    }
    iWMD1JESUp_isLoaded = true;
  }
  return iWMD1JESUp_;
}

const float &VVV0Tree::iWMD2JESUp() {
  if (not iWMD2JESUp_isLoaded) {
    if (iWMD2JESUp_branch != 0) {
      iWMD2JESUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JESUp_branch does not exist!\n");
      exit(1);
    }
    iWMD2JESUp_isLoaded = true;
  }
  return iWMD2JESUp_;
}

const float &VVV0Tree::iWMD3JESUp() {
  if (not iWMD3JESUp_isLoaded) {
    if (iWMD3JESUp_branch != 0) {
      iWMD3JESUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JESUp_branch does not exist!\n");
      exit(1);
    }
    iWMD3JESUp_isLoaded = true;
  }
  return iWMD3JESUp_;
}

const float &VVV0Tree::iWMD4JESUp() {
  if (not iWMD4JESUp_isLoaded) {
    if (iWMD4JESUp_branch != 0) {
      iWMD4JESUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JESUp_branch does not exist!\n");
      exit(1);
    }
    iWMD4JESUp_isLoaded = true;
  }
  return iWMD4JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJESUp() {
  if (not METJESUp_isLoaded) {
    if (METJESUp_branch != 0) {
      METJESUp_branch->GetEntry(index);
    } else {
      printf("branch METJESUp_branch does not exist!\n");
      exit(1);
    }
    METJESUp_isLoaded = true;
  }
  return *METJESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJESUp() {
  if (not NuJESUp_isLoaded) {
    if (NuJESUp_branch != 0) {
      NuJESUp_branch->GetEntry(index);
    } else {
      printf("branch NuJESUp_branch does not exist!\n");
      exit(1);
    }
    NuJESUp_isLoaded = true;
  }
  return *NuJESUp_;
}

const int &VVV0Tree::NJJESUp() {
  if (not NJJESUp_isLoaded) {
    if (NJJESUp_branch != 0) {
      NJJESUp_branch->GetEntry(index);
    } else {
      printf("branch NJJESUp_branch does not exist!\n");
      exit(1);
    }
    NJJESUp_isLoaded = true;
  }
  return NJJESUp_;
}

const int &VVV0Tree::NbLooseJESUp() {
  if (not NbLooseJESUp_isLoaded) {
    if (NbLooseJESUp_branch != 0) {
      NbLooseJESUp_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJESUp_branch does not exist!\n");
      exit(1);
    }
    NbLooseJESUp_isLoaded = true;
  }
  return NbLooseJESUp_;
}

const int &VVV0Tree::NbMediumJESUp() {
  if (not NbMediumJESUp_isLoaded) {
    if (NbMediumJESUp_branch != 0) {
      NbMediumJESUp_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJESUp_branch does not exist!\n");
      exit(1);
    }
    NbMediumJESUp_isLoaded = true;
  }
  return NbMediumJESUp_;
}

const int &VVV0Tree::NbTightJESUp() {
  if (not NbTightJESUp_isLoaded) {
    if (NbTightJESUp_branch != 0) {
      NbTightJESUp_branch->GetEntry(index);
    } else {
      printf("branch NbTightJESUp_branch does not exist!\n");
      exit(1);
    }
    NbTightJESUp_isLoaded = true;
  }
  return NbTightJESUp_;
}

const int &VVV0Tree::NoORNbLooseJESUp() {
  if (not NoORNbLooseJESUp_isLoaded) {
    if (NoORNbLooseJESUp_branch != 0) {
      NoORNbLooseJESUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJESUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJESUp_isLoaded = true;
  }
  return NoORNbLooseJESUp_;
}

const int &VVV0Tree::NoORNbMediumJESUp() {
  if (not NoORNbMediumJESUp_isLoaded) {
    if (NoORNbMediumJESUp_branch != 0) {
      NoORNbMediumJESUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJESUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJESUp_isLoaded = true;
  }
  return NoORNbMediumJESUp_;
}

const int &VVV0Tree::NoORNbTightJESUp() {
  if (not NoORNbTightJESUp_isLoaded) {
    if (NoORNbTightJESUp_branch != 0) {
      NoORNbTightJESUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJESUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJESUp_isLoaded = true;
  }
  return NoORNbTightJESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JESUp() {
  if (not J0JESUp_isLoaded) {
    if (J0JESUp_branch != 0) {
      J0JESUp_branch->GetEntry(index);
    } else {
      printf("branch J0JESUp_branch does not exist!\n");
      exit(1);
    }
    J0JESUp_isLoaded = true;
  }
  return *J0JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JESUp() {
  if (not J1JESUp_isLoaded) {
    if (J1JESUp_branch != 0) {
      J1JESUp_branch->GetEntry(index);
    } else {
      printf("branch J1JESUp_branch does not exist!\n");
      exit(1);
    }
    J1JESUp_isLoaded = true;
  }
  return *J1JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JESUp() {
  if (not J2JESUp_isLoaded) {
    if (J2JESUp_branch != 0) {
      J2JESUp_branch->GetEntry(index);
    } else {
      printf("branch J2JESUp_branch does not exist!\n");
      exit(1);
    }
    J2JESUp_isLoaded = true;
  }
  return *J2JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JESUp() {
  if (not J3JESUp_isLoaded) {
    if (J3JESUp_branch != 0) {
      J3JESUp_branch->GetEntry(index);
    } else {
      printf("branch J3JESUp_branch does not exist!\n");
      exit(1);
    }
    J3JESUp_isLoaded = true;
  }
  return *J3JESUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JESUp() {
  if (not J4JESUp_isLoaded) {
    if (J4JESUp_branch != 0) {
      J4JESUp_branch->GetEntry(index);
    } else {
      printf("branch J4JESUp_branch does not exist!\n");
      exit(1);
    }
    J4JESUp_isLoaded = true;
  }
  return *J4JESUp_;
}

const float &VVV0Tree::MVVXJESUp() {
  if (not MVVXJESUp_isLoaded) {
    if (MVVXJESUp_branch != 0) {
      MVVXJESUp_branch->GetEntry(index);
    } else {
      printf("branch MVVXJESUp_branch does not exist!\n");
      exit(1);
    }
    MVVXJESUp_isLoaded = true;
  }
  return MVVXJESUp_;
}

const float &VVV0Tree::PtVVXJESUp() {
  if (not PtVVXJESUp_isLoaded) {
    if (PtVVXJESUp_branch != 0) {
      PtVVXJESUp_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJESUp_branch does not exist!\n");
      exit(1);
    }
    PtVVXJESUp_isLoaded = true;
  }
  return PtVVXJESUp_;
}

const float &VVV0Tree::HTJESUp() {
  if (not HTJESUp_isLoaded) {
    if (HTJESUp_branch != 0) {
      HTJESUp_branch->GetEntry(index);
    } else {
      printf("branch HTJESUp_branch does not exist!\n");
      exit(1);
    }
    HTJESUp_isLoaded = true;
  }
  return HTJESUp_;
}

const float &VVV0Tree::HTJJESUp() {
  if (not HTJJESUp_isLoaded) {
    if (HTJJESUp_branch != 0) {
      HTJJESUp_branch->GetEntry(index);
    } else {
      printf("branch HTJJESUp_branch does not exist!\n");
      exit(1);
    }
    HTJJESUp_isLoaded = true;
  }
  return HTJJESUp_;
}

const float &VVV0Tree::HTFJJESUp() {
  if (not HTFJJESUp_isLoaded) {
    if (HTFJJESUp_branch != 0) {
      HTFJJESUp_branch->GetEntry(index);
    } else {
      printf("branch HTFJJESUp_branch does not exist!\n");
      exit(1);
    }
    HTFJJESUp_isLoaded = true;
  }
  return HTFJJESUp_;
}

const float &VVV0Tree::SumPtFJJESUp() {
  if (not SumPtFJJESUp_isLoaded) {
    if (SumPtFJJESUp_branch != 0) {
      SumPtFJJESUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJESUp_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJESUp_isLoaded = true;
  }
  return SumPtFJJESUp_;
}

const float &VVV0Tree::SumPtJJESUp() {
  if (not SumPtJJESUp_isLoaded) {
    if (SumPtJJESUp_branch != 0) {
      SumPtJJESUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJESUp_branch does not exist!\n");
      exit(1);
    }
    SumPtJJESUp_isLoaded = true;
  }
  return SumPtJJESUp_;
}

const int &VVV0Tree::NFJJESDn() {
  if (not NFJJESDn_isLoaded) {
    if (NFJJESDn_branch != 0) {
      NFJJESDn_branch->GetEntry(index);
    } else {
      printf("branch NFJJESDn_branch does not exist!\n");
      exit(1);
    }
    NFJJESDn_isLoaded = true;
  }
  return NFJJESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JESDn() {
  if (not FJ0JESDn_isLoaded) {
    if (FJ0JESDn_branch != 0) {
      FJ0JESDn_branch->GetEntry(index);
    } else {
      printf("branch FJ0JESDn_branch does not exist!\n");
      exit(1);
    }
    FJ0JESDn_isLoaded = true;
  }
  return *FJ0JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JESDn() {
  if (not FJ1JESDn_isLoaded) {
    if (FJ1JESDn_branch != 0) {
      FJ1JESDn_branch->GetEntry(index);
    } else {
      printf("branch FJ1JESDn_branch does not exist!\n");
      exit(1);
    }
    FJ1JESDn_isLoaded = true;
  }
  return *FJ1JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JESDn() {
  if (not FJ2JESDn_isLoaded) {
    if (FJ2JESDn_branch != 0) {
      FJ2JESDn_branch->GetEntry(index);
    } else {
      printf("branch FJ2JESDn_branch does not exist!\n");
      exit(1);
    }
    FJ2JESDn_isLoaded = true;
  }
  return *FJ2JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JESDn() {
  if (not FJ3JESDn_isLoaded) {
    if (FJ3JESDn_branch != 0) {
      FJ3JESDn_branch->GetEntry(index);
    } else {
      printf("branch FJ3JESDn_branch does not exist!\n");
      exit(1);
    }
    FJ3JESDn_isLoaded = true;
  }
  return *FJ3JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JESDn() {
  if (not FJ4JESDn_isLoaded) {
    if (FJ4JESDn_branch != 0) {
      FJ4JESDn_branch->GetEntry(index);
    } else {
      printf("branch FJ4JESDn_branch does not exist!\n");
      exit(1);
    }
    FJ4JESDn_isLoaded = true;
  }
  return *FJ4JESDn_;
}

const float &VVV0Tree::VMD0JESDn() {
  if (not VMD0JESDn_isLoaded) {
    if (VMD0JESDn_branch != 0) {
      VMD0JESDn_branch->GetEntry(index);
    } else {
      printf("branch VMD0JESDn_branch does not exist!\n");
      exit(1);
    }
    VMD0JESDn_isLoaded = true;
  }
  return VMD0JESDn_;
}

const float &VVV0Tree::VMD1JESDn() {
  if (not VMD1JESDn_isLoaded) {
    if (VMD1JESDn_branch != 0) {
      VMD1JESDn_branch->GetEntry(index);
    } else {
      printf("branch VMD1JESDn_branch does not exist!\n");
      exit(1);
    }
    VMD1JESDn_isLoaded = true;
  }
  return VMD1JESDn_;
}

const float &VVV0Tree::VMD2JESDn() {
  if (not VMD2JESDn_isLoaded) {
    if (VMD2JESDn_branch != 0) {
      VMD2JESDn_branch->GetEntry(index);
    } else {
      printf("branch VMD2JESDn_branch does not exist!\n");
      exit(1);
    }
    VMD2JESDn_isLoaded = true;
  }
  return VMD2JESDn_;
}

const float &VVV0Tree::VMD3JESDn() {
  if (not VMD3JESDn_isLoaded) {
    if (VMD3JESDn_branch != 0) {
      VMD3JESDn_branch->GetEntry(index);
    } else {
      printf("branch VMD3JESDn_branch does not exist!\n");
      exit(1);
    }
    VMD3JESDn_isLoaded = true;
  }
  return VMD3JESDn_;
}

const float &VVV0Tree::VMD4JESDn() {
  if (not VMD4JESDn_isLoaded) {
    if (VMD4JESDn_branch != 0) {
      VMD4JESDn_branch->GetEntry(index);
    } else {
      printf("branch VMD4JESDn_branch does not exist!\n");
      exit(1);
    }
    VMD4JESDn_isLoaded = true;
  }
  return VMD4JESDn_;
}

const float &VVV0Tree::WMD0JESDn() {
  if (not WMD0JESDn_isLoaded) {
    if (WMD0JESDn_branch != 0) {
      WMD0JESDn_branch->GetEntry(index);
    } else {
      printf("branch WMD0JESDn_branch does not exist!\n");
      exit(1);
    }
    WMD0JESDn_isLoaded = true;
  }
  return WMD0JESDn_;
}

const float &VVV0Tree::WMD1JESDn() {
  if (not WMD1JESDn_isLoaded) {
    if (WMD1JESDn_branch != 0) {
      WMD1JESDn_branch->GetEntry(index);
    } else {
      printf("branch WMD1JESDn_branch does not exist!\n");
      exit(1);
    }
    WMD1JESDn_isLoaded = true;
  }
  return WMD1JESDn_;
}

const float &VVV0Tree::WMD2JESDn() {
  if (not WMD2JESDn_isLoaded) {
    if (WMD2JESDn_branch != 0) {
      WMD2JESDn_branch->GetEntry(index);
    } else {
      printf("branch WMD2JESDn_branch does not exist!\n");
      exit(1);
    }
    WMD2JESDn_isLoaded = true;
  }
  return WMD2JESDn_;
}

const float &VVV0Tree::WMD3JESDn() {
  if (not WMD3JESDn_isLoaded) {
    if (WMD3JESDn_branch != 0) {
      WMD3JESDn_branch->GetEntry(index);
    } else {
      printf("branch WMD3JESDn_branch does not exist!\n");
      exit(1);
    }
    WMD3JESDn_isLoaded = true;
  }
  return WMD3JESDn_;
}

const float &VVV0Tree::WMD4JESDn() {
  if (not WMD4JESDn_isLoaded) {
    if (WMD4JESDn_branch != 0) {
      WMD4JESDn_branch->GetEntry(index);
    } else {
      printf("branch WMD4JESDn_branch does not exist!\n");
      exit(1);
    }
    WMD4JESDn_isLoaded = true;
  }
  return WMD4JESDn_;
}

const int &VVV0Tree::NQGen0JESDn() {
  if (not NQGen0JESDn_isLoaded) {
    if (NQGen0JESDn_branch != 0) {
      NQGen0JESDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JESDn_branch does not exist!\n");
      exit(1);
    }
    NQGen0JESDn_isLoaded = true;
  }
  return NQGen0JESDn_;
}

const int &VVV0Tree::NQGen1JESDn() {
  if (not NQGen1JESDn_isLoaded) {
    if (NQGen1JESDn_branch != 0) {
      NQGen1JESDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JESDn_branch does not exist!\n");
      exit(1);
    }
    NQGen1JESDn_isLoaded = true;
  }
  return NQGen1JESDn_;
}

const int &VVV0Tree::NQGen2JESDn() {
  if (not NQGen2JESDn_isLoaded) {
    if (NQGen2JESDn_branch != 0) {
      NQGen2JESDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JESDn_branch does not exist!\n");
      exit(1);
    }
    NQGen2JESDn_isLoaded = true;
  }
  return NQGen2JESDn_;
}

const int &VVV0Tree::NQGen3JESDn() {
  if (not NQGen3JESDn_isLoaded) {
    if (NQGen3JESDn_branch != 0) {
      NQGen3JESDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JESDn_branch does not exist!\n");
      exit(1);
    }
    NQGen3JESDn_isLoaded = true;
  }
  return NQGen3JESDn_;
}

const int &VVV0Tree::NQGen4JESDn() {
  if (not NQGen4JESDn_isLoaded) {
    if (NQGen4JESDn_branch != 0) {
      NQGen4JESDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JESDn_branch does not exist!\n");
      exit(1);
    }
    NQGen4JESDn_isLoaded = true;
  }
  return NQGen4JESDn_;
}

const int &VVV0Tree::NBGen0JESDn() {
  if (not NBGen0JESDn_isLoaded) {
    if (NBGen0JESDn_branch != 0) {
      NBGen0JESDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JESDn_branch does not exist!\n");
      exit(1);
    }
    NBGen0JESDn_isLoaded = true;
  }
  return NBGen0JESDn_;
}

const int &VVV0Tree::NBGen1JESDn() {
  if (not NBGen1JESDn_isLoaded) {
    if (NBGen1JESDn_branch != 0) {
      NBGen1JESDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JESDn_branch does not exist!\n");
      exit(1);
    }
    NBGen1JESDn_isLoaded = true;
  }
  return NBGen1JESDn_;
}

const int &VVV0Tree::NBGen2JESDn() {
  if (not NBGen2JESDn_isLoaded) {
    if (NBGen2JESDn_branch != 0) {
      NBGen2JESDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JESDn_branch does not exist!\n");
      exit(1);
    }
    NBGen2JESDn_isLoaded = true;
  }
  return NBGen2JESDn_;
}

const int &VVV0Tree::NBGen3JESDn() {
  if (not NBGen3JESDn_isLoaded) {
    if (NBGen3JESDn_branch != 0) {
      NBGen3JESDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JESDn_branch does not exist!\n");
      exit(1);
    }
    NBGen3JESDn_isLoaded = true;
  }
  return NBGen3JESDn_;
}

const int &VVV0Tree::NBGen4JESDn() {
  if (not NBGen4JESDn_isLoaded) {
    if (NBGen4JESDn_branch != 0) {
      NBGen4JESDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JESDn_branch does not exist!\n");
      exit(1);
    }
    NBGen4JESDn_isLoaded = true;
  }
  return NBGen4JESDn_;
}

const int &VVV0Tree::NLGen0JESDn() {
  if (not NLGen0JESDn_isLoaded) {
    if (NLGen0JESDn_branch != 0) {
      NLGen0JESDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JESDn_branch does not exist!\n");
      exit(1);
    }
    NLGen0JESDn_isLoaded = true;
  }
  return NLGen0JESDn_;
}

const int &VVV0Tree::NLGen1JESDn() {
  if (not NLGen1JESDn_isLoaded) {
    if (NLGen1JESDn_branch != 0) {
      NLGen1JESDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JESDn_branch does not exist!\n");
      exit(1);
    }
    NLGen1JESDn_isLoaded = true;
  }
  return NLGen1JESDn_;
}

const int &VVV0Tree::NLGen2JESDn() {
  if (not NLGen2JESDn_isLoaded) {
    if (NLGen2JESDn_branch != 0) {
      NLGen2JESDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JESDn_branch does not exist!\n");
      exit(1);
    }
    NLGen2JESDn_isLoaded = true;
  }
  return NLGen2JESDn_;
}

const int &VVV0Tree::NLGen3JESDn() {
  if (not NLGen3JESDn_isLoaded) {
    if (NLGen3JESDn_branch != 0) {
      NLGen3JESDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JESDn_branch does not exist!\n");
      exit(1);
    }
    NLGen3JESDn_isLoaded = true;
  }
  return NLGen3JESDn_;
}

const int &VVV0Tree::NLGen4JESDn() {
  if (not NLGen4JESDn_isLoaded) {
    if (NLGen4JESDn_branch != 0) {
      NLGen4JESDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JESDn_branch does not exist!\n");
      exit(1);
    }
    NLGen4JESDn_isLoaded = true;
  }
  return NLGen4JESDn_;
}

const int &VVV0Tree::NiFJJESDn() {
  if (not NiFJJESDn_isLoaded) {
    if (NiFJJESDn_branch != 0) {
      NiFJJESDn_branch->GetEntry(index);
    } else {
      printf("branch NiFJJESDn_branch does not exist!\n");
      exit(1);
    }
    NiFJJESDn_isLoaded = true;
  }
  return NiFJJESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JESDn() {
  if (not iFJ0JESDn_isLoaded) {
    if (iFJ0JESDn_branch != 0) {
      iFJ0JESDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JESDn_branch does not exist!\n");
      exit(1);
    }
    iFJ0JESDn_isLoaded = true;
  }
  return *iFJ0JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JESDn() {
  if (not iFJ1JESDn_isLoaded) {
    if (iFJ1JESDn_branch != 0) {
      iFJ1JESDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JESDn_branch does not exist!\n");
      exit(1);
    }
    iFJ1JESDn_isLoaded = true;
  }
  return *iFJ1JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JESDn() {
  if (not iFJ2JESDn_isLoaded) {
    if (iFJ2JESDn_branch != 0) {
      iFJ2JESDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JESDn_branch does not exist!\n");
      exit(1);
    }
    iFJ2JESDn_isLoaded = true;
  }
  return *iFJ2JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JESDn() {
  if (not iFJ3JESDn_isLoaded) {
    if (iFJ3JESDn_branch != 0) {
      iFJ3JESDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JESDn_branch does not exist!\n");
      exit(1);
    }
    iFJ3JESDn_isLoaded = true;
  }
  return *iFJ3JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JESDn() {
  if (not iFJ4JESDn_isLoaded) {
    if (iFJ4JESDn_branch != 0) {
      iFJ4JESDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JESDn_branch does not exist!\n");
      exit(1);
    }
    iFJ4JESDn_isLoaded = true;
  }
  return *iFJ4JESDn_;
}

const float &VVV0Tree::iVMD0JESDn() {
  if (not iVMD0JESDn_isLoaded) {
    if (iVMD0JESDn_branch != 0) {
      iVMD0JESDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JESDn_branch does not exist!\n");
      exit(1);
    }
    iVMD0JESDn_isLoaded = true;
  }
  return iVMD0JESDn_;
}

const float &VVV0Tree::iVMD1JESDn() {
  if (not iVMD1JESDn_isLoaded) {
    if (iVMD1JESDn_branch != 0) {
      iVMD1JESDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JESDn_branch does not exist!\n");
      exit(1);
    }
    iVMD1JESDn_isLoaded = true;
  }
  return iVMD1JESDn_;
}

const float &VVV0Tree::iVMD2JESDn() {
  if (not iVMD2JESDn_isLoaded) {
    if (iVMD2JESDn_branch != 0) {
      iVMD2JESDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JESDn_branch does not exist!\n");
      exit(1);
    }
    iVMD2JESDn_isLoaded = true;
  }
  return iVMD2JESDn_;
}

const float &VVV0Tree::iVMD3JESDn() {
  if (not iVMD3JESDn_isLoaded) {
    if (iVMD3JESDn_branch != 0) {
      iVMD3JESDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JESDn_branch does not exist!\n");
      exit(1);
    }
    iVMD3JESDn_isLoaded = true;
  }
  return iVMD3JESDn_;
}

const float &VVV0Tree::iVMD4JESDn() {
  if (not iVMD4JESDn_isLoaded) {
    if (iVMD4JESDn_branch != 0) {
      iVMD4JESDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JESDn_branch does not exist!\n");
      exit(1);
    }
    iVMD4JESDn_isLoaded = true;
  }
  return iVMD4JESDn_;
}

const float &VVV0Tree::iWMD0JESDn() {
  if (not iWMD0JESDn_isLoaded) {
    if (iWMD0JESDn_branch != 0) {
      iWMD0JESDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JESDn_branch does not exist!\n");
      exit(1);
    }
    iWMD0JESDn_isLoaded = true;
  }
  return iWMD0JESDn_;
}

const float &VVV0Tree::iWMD1JESDn() {
  if (not iWMD1JESDn_isLoaded) {
    if (iWMD1JESDn_branch != 0) {
      iWMD1JESDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JESDn_branch does not exist!\n");
      exit(1);
    }
    iWMD1JESDn_isLoaded = true;
  }
  return iWMD1JESDn_;
}

const float &VVV0Tree::iWMD2JESDn() {
  if (not iWMD2JESDn_isLoaded) {
    if (iWMD2JESDn_branch != 0) {
      iWMD2JESDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JESDn_branch does not exist!\n");
      exit(1);
    }
    iWMD2JESDn_isLoaded = true;
  }
  return iWMD2JESDn_;
}

const float &VVV0Tree::iWMD3JESDn() {
  if (not iWMD3JESDn_isLoaded) {
    if (iWMD3JESDn_branch != 0) {
      iWMD3JESDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JESDn_branch does not exist!\n");
      exit(1);
    }
    iWMD3JESDn_isLoaded = true;
  }
  return iWMD3JESDn_;
}

const float &VVV0Tree::iWMD4JESDn() {
  if (not iWMD4JESDn_isLoaded) {
    if (iWMD4JESDn_branch != 0) {
      iWMD4JESDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JESDn_branch does not exist!\n");
      exit(1);
    }
    iWMD4JESDn_isLoaded = true;
  }
  return iWMD4JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJESDn() {
  if (not METJESDn_isLoaded) {
    if (METJESDn_branch != 0) {
      METJESDn_branch->GetEntry(index);
    } else {
      printf("branch METJESDn_branch does not exist!\n");
      exit(1);
    }
    METJESDn_isLoaded = true;
  }
  return *METJESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJESDn() {
  if (not NuJESDn_isLoaded) {
    if (NuJESDn_branch != 0) {
      NuJESDn_branch->GetEntry(index);
    } else {
      printf("branch NuJESDn_branch does not exist!\n");
      exit(1);
    }
    NuJESDn_isLoaded = true;
  }
  return *NuJESDn_;
}

const int &VVV0Tree::NJJESDn() {
  if (not NJJESDn_isLoaded) {
    if (NJJESDn_branch != 0) {
      NJJESDn_branch->GetEntry(index);
    } else {
      printf("branch NJJESDn_branch does not exist!\n");
      exit(1);
    }
    NJJESDn_isLoaded = true;
  }
  return NJJESDn_;
}

const int &VVV0Tree::NbLooseJESDn() {
  if (not NbLooseJESDn_isLoaded) {
    if (NbLooseJESDn_branch != 0) {
      NbLooseJESDn_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJESDn_branch does not exist!\n");
      exit(1);
    }
    NbLooseJESDn_isLoaded = true;
  }
  return NbLooseJESDn_;
}

const int &VVV0Tree::NbMediumJESDn() {
  if (not NbMediumJESDn_isLoaded) {
    if (NbMediumJESDn_branch != 0) {
      NbMediumJESDn_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJESDn_branch does not exist!\n");
      exit(1);
    }
    NbMediumJESDn_isLoaded = true;
  }
  return NbMediumJESDn_;
}

const int &VVV0Tree::NbTightJESDn() {
  if (not NbTightJESDn_isLoaded) {
    if (NbTightJESDn_branch != 0) {
      NbTightJESDn_branch->GetEntry(index);
    } else {
      printf("branch NbTightJESDn_branch does not exist!\n");
      exit(1);
    }
    NbTightJESDn_isLoaded = true;
  }
  return NbTightJESDn_;
}

const int &VVV0Tree::NoORNbLooseJESDn() {
  if (not NoORNbLooseJESDn_isLoaded) {
    if (NoORNbLooseJESDn_branch != 0) {
      NoORNbLooseJESDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJESDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJESDn_isLoaded = true;
  }
  return NoORNbLooseJESDn_;
}

const int &VVV0Tree::NoORNbMediumJESDn() {
  if (not NoORNbMediumJESDn_isLoaded) {
    if (NoORNbMediumJESDn_branch != 0) {
      NoORNbMediumJESDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJESDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJESDn_isLoaded = true;
  }
  return NoORNbMediumJESDn_;
}

const int &VVV0Tree::NoORNbTightJESDn() {
  if (not NoORNbTightJESDn_isLoaded) {
    if (NoORNbTightJESDn_branch != 0) {
      NoORNbTightJESDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJESDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJESDn_isLoaded = true;
  }
  return NoORNbTightJESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JESDn() {
  if (not J0JESDn_isLoaded) {
    if (J0JESDn_branch != 0) {
      J0JESDn_branch->GetEntry(index);
    } else {
      printf("branch J0JESDn_branch does not exist!\n");
      exit(1);
    }
    J0JESDn_isLoaded = true;
  }
  return *J0JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JESDn() {
  if (not J1JESDn_isLoaded) {
    if (J1JESDn_branch != 0) {
      J1JESDn_branch->GetEntry(index);
    } else {
      printf("branch J1JESDn_branch does not exist!\n");
      exit(1);
    }
    J1JESDn_isLoaded = true;
  }
  return *J1JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JESDn() {
  if (not J2JESDn_isLoaded) {
    if (J2JESDn_branch != 0) {
      J2JESDn_branch->GetEntry(index);
    } else {
      printf("branch J2JESDn_branch does not exist!\n");
      exit(1);
    }
    J2JESDn_isLoaded = true;
  }
  return *J2JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JESDn() {
  if (not J3JESDn_isLoaded) {
    if (J3JESDn_branch != 0) {
      J3JESDn_branch->GetEntry(index);
    } else {
      printf("branch J3JESDn_branch does not exist!\n");
      exit(1);
    }
    J3JESDn_isLoaded = true;
  }
  return *J3JESDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JESDn() {
  if (not J4JESDn_isLoaded) {
    if (J4JESDn_branch != 0) {
      J4JESDn_branch->GetEntry(index);
    } else {
      printf("branch J4JESDn_branch does not exist!\n");
      exit(1);
    }
    J4JESDn_isLoaded = true;
  }
  return *J4JESDn_;
}

const float &VVV0Tree::MVVXJESDn() {
  if (not MVVXJESDn_isLoaded) {
    if (MVVXJESDn_branch != 0) {
      MVVXJESDn_branch->GetEntry(index);
    } else {
      printf("branch MVVXJESDn_branch does not exist!\n");
      exit(1);
    }
    MVVXJESDn_isLoaded = true;
  }
  return MVVXJESDn_;
}

const float &VVV0Tree::PtVVXJESDn() {
  if (not PtVVXJESDn_isLoaded) {
    if (PtVVXJESDn_branch != 0) {
      PtVVXJESDn_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJESDn_branch does not exist!\n");
      exit(1);
    }
    PtVVXJESDn_isLoaded = true;
  }
  return PtVVXJESDn_;
}

const float &VVV0Tree::HTJESDn() {
  if (not HTJESDn_isLoaded) {
    if (HTJESDn_branch != 0) {
      HTJESDn_branch->GetEntry(index);
    } else {
      printf("branch HTJESDn_branch does not exist!\n");
      exit(1);
    }
    HTJESDn_isLoaded = true;
  }
  return HTJESDn_;
}

const float &VVV0Tree::HTJJESDn() {
  if (not HTJJESDn_isLoaded) {
    if (HTJJESDn_branch != 0) {
      HTJJESDn_branch->GetEntry(index);
    } else {
      printf("branch HTJJESDn_branch does not exist!\n");
      exit(1);
    }
    HTJJESDn_isLoaded = true;
  }
  return HTJJESDn_;
}

const float &VVV0Tree::HTFJJESDn() {
  if (not HTFJJESDn_isLoaded) {
    if (HTFJJESDn_branch != 0) {
      HTFJJESDn_branch->GetEntry(index);
    } else {
      printf("branch HTFJJESDn_branch does not exist!\n");
      exit(1);
    }
    HTFJJESDn_isLoaded = true;
  }
  return HTFJJESDn_;
}

const float &VVV0Tree::SumPtFJJESDn() {
  if (not SumPtFJJESDn_isLoaded) {
    if (SumPtFJJESDn_branch != 0) {
      SumPtFJJESDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJESDn_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJESDn_isLoaded = true;
  }
  return SumPtFJJESDn_;
}

const float &VVV0Tree::SumPtJJESDn() {
  if (not SumPtJJESDn_isLoaded) {
    if (SumPtJJESDn_branch != 0) {
      SumPtJJESDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJESDn_branch does not exist!\n");
      exit(1);
    }
    SumPtJJESDn_isLoaded = true;
  }
  return SumPtJJESDn_;
}

const int &VVV0Tree::NFJJERUp() {
  if (not NFJJERUp_isLoaded) {
    if (NFJJERUp_branch != 0) {
      NFJJERUp_branch->GetEntry(index);
    } else {
      printf("branch NFJJERUp_branch does not exist!\n");
      exit(1);
    }
    NFJJERUp_isLoaded = true;
  }
  return NFJJERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JERUp() {
  if (not FJ0JERUp_isLoaded) {
    if (FJ0JERUp_branch != 0) {
      FJ0JERUp_branch->GetEntry(index);
    } else {
      printf("branch FJ0JERUp_branch does not exist!\n");
      exit(1);
    }
    FJ0JERUp_isLoaded = true;
  }
  return *FJ0JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JERUp() {
  if (not FJ1JERUp_isLoaded) {
    if (FJ1JERUp_branch != 0) {
      FJ1JERUp_branch->GetEntry(index);
    } else {
      printf("branch FJ1JERUp_branch does not exist!\n");
      exit(1);
    }
    FJ1JERUp_isLoaded = true;
  }
  return *FJ1JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JERUp() {
  if (not FJ2JERUp_isLoaded) {
    if (FJ2JERUp_branch != 0) {
      FJ2JERUp_branch->GetEntry(index);
    } else {
      printf("branch FJ2JERUp_branch does not exist!\n");
      exit(1);
    }
    FJ2JERUp_isLoaded = true;
  }
  return *FJ2JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JERUp() {
  if (not FJ3JERUp_isLoaded) {
    if (FJ3JERUp_branch != 0) {
      FJ3JERUp_branch->GetEntry(index);
    } else {
      printf("branch FJ3JERUp_branch does not exist!\n");
      exit(1);
    }
    FJ3JERUp_isLoaded = true;
  }
  return *FJ3JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JERUp() {
  if (not FJ4JERUp_isLoaded) {
    if (FJ4JERUp_branch != 0) {
      FJ4JERUp_branch->GetEntry(index);
    } else {
      printf("branch FJ4JERUp_branch does not exist!\n");
      exit(1);
    }
    FJ4JERUp_isLoaded = true;
  }
  return *FJ4JERUp_;
}

const float &VVV0Tree::VMD0JERUp() {
  if (not VMD0JERUp_isLoaded) {
    if (VMD0JERUp_branch != 0) {
      VMD0JERUp_branch->GetEntry(index);
    } else {
      printf("branch VMD0JERUp_branch does not exist!\n");
      exit(1);
    }
    VMD0JERUp_isLoaded = true;
  }
  return VMD0JERUp_;
}

const float &VVV0Tree::VMD1JERUp() {
  if (not VMD1JERUp_isLoaded) {
    if (VMD1JERUp_branch != 0) {
      VMD1JERUp_branch->GetEntry(index);
    } else {
      printf("branch VMD1JERUp_branch does not exist!\n");
      exit(1);
    }
    VMD1JERUp_isLoaded = true;
  }
  return VMD1JERUp_;
}

const float &VVV0Tree::VMD2JERUp() {
  if (not VMD2JERUp_isLoaded) {
    if (VMD2JERUp_branch != 0) {
      VMD2JERUp_branch->GetEntry(index);
    } else {
      printf("branch VMD2JERUp_branch does not exist!\n");
      exit(1);
    }
    VMD2JERUp_isLoaded = true;
  }
  return VMD2JERUp_;
}

const float &VVV0Tree::VMD3JERUp() {
  if (not VMD3JERUp_isLoaded) {
    if (VMD3JERUp_branch != 0) {
      VMD3JERUp_branch->GetEntry(index);
    } else {
      printf("branch VMD3JERUp_branch does not exist!\n");
      exit(1);
    }
    VMD3JERUp_isLoaded = true;
  }
  return VMD3JERUp_;
}

const float &VVV0Tree::VMD4JERUp() {
  if (not VMD4JERUp_isLoaded) {
    if (VMD4JERUp_branch != 0) {
      VMD4JERUp_branch->GetEntry(index);
    } else {
      printf("branch VMD4JERUp_branch does not exist!\n");
      exit(1);
    }
    VMD4JERUp_isLoaded = true;
  }
  return VMD4JERUp_;
}

const float &VVV0Tree::WMD0JERUp() {
  if (not WMD0JERUp_isLoaded) {
    if (WMD0JERUp_branch != 0) {
      WMD0JERUp_branch->GetEntry(index);
    } else {
      printf("branch WMD0JERUp_branch does not exist!\n");
      exit(1);
    }
    WMD0JERUp_isLoaded = true;
  }
  return WMD0JERUp_;
}

const float &VVV0Tree::WMD1JERUp() {
  if (not WMD1JERUp_isLoaded) {
    if (WMD1JERUp_branch != 0) {
      WMD1JERUp_branch->GetEntry(index);
    } else {
      printf("branch WMD1JERUp_branch does not exist!\n");
      exit(1);
    }
    WMD1JERUp_isLoaded = true;
  }
  return WMD1JERUp_;
}

const float &VVV0Tree::WMD2JERUp() {
  if (not WMD2JERUp_isLoaded) {
    if (WMD2JERUp_branch != 0) {
      WMD2JERUp_branch->GetEntry(index);
    } else {
      printf("branch WMD2JERUp_branch does not exist!\n");
      exit(1);
    }
    WMD2JERUp_isLoaded = true;
  }
  return WMD2JERUp_;
}

const float &VVV0Tree::WMD3JERUp() {
  if (not WMD3JERUp_isLoaded) {
    if (WMD3JERUp_branch != 0) {
      WMD3JERUp_branch->GetEntry(index);
    } else {
      printf("branch WMD3JERUp_branch does not exist!\n");
      exit(1);
    }
    WMD3JERUp_isLoaded = true;
  }
  return WMD3JERUp_;
}

const float &VVV0Tree::WMD4JERUp() {
  if (not WMD4JERUp_isLoaded) {
    if (WMD4JERUp_branch != 0) {
      WMD4JERUp_branch->GetEntry(index);
    } else {
      printf("branch WMD4JERUp_branch does not exist!\n");
      exit(1);
    }
    WMD4JERUp_isLoaded = true;
  }
  return WMD4JERUp_;
}

const int &VVV0Tree::NQGen0JERUp() {
  if (not NQGen0JERUp_isLoaded) {
    if (NQGen0JERUp_branch != 0) {
      NQGen0JERUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JERUp_branch does not exist!\n");
      exit(1);
    }
    NQGen0JERUp_isLoaded = true;
  }
  return NQGen0JERUp_;
}

const int &VVV0Tree::NQGen1JERUp() {
  if (not NQGen1JERUp_isLoaded) {
    if (NQGen1JERUp_branch != 0) {
      NQGen1JERUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JERUp_branch does not exist!\n");
      exit(1);
    }
    NQGen1JERUp_isLoaded = true;
  }
  return NQGen1JERUp_;
}

const int &VVV0Tree::NQGen2JERUp() {
  if (not NQGen2JERUp_isLoaded) {
    if (NQGen2JERUp_branch != 0) {
      NQGen2JERUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JERUp_branch does not exist!\n");
      exit(1);
    }
    NQGen2JERUp_isLoaded = true;
  }
  return NQGen2JERUp_;
}

const int &VVV0Tree::NQGen3JERUp() {
  if (not NQGen3JERUp_isLoaded) {
    if (NQGen3JERUp_branch != 0) {
      NQGen3JERUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JERUp_branch does not exist!\n");
      exit(1);
    }
    NQGen3JERUp_isLoaded = true;
  }
  return NQGen3JERUp_;
}

const int &VVV0Tree::NQGen4JERUp() {
  if (not NQGen4JERUp_isLoaded) {
    if (NQGen4JERUp_branch != 0) {
      NQGen4JERUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JERUp_branch does not exist!\n");
      exit(1);
    }
    NQGen4JERUp_isLoaded = true;
  }
  return NQGen4JERUp_;
}

const int &VVV0Tree::NBGen0JERUp() {
  if (not NBGen0JERUp_isLoaded) {
    if (NBGen0JERUp_branch != 0) {
      NBGen0JERUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JERUp_branch does not exist!\n");
      exit(1);
    }
    NBGen0JERUp_isLoaded = true;
  }
  return NBGen0JERUp_;
}

const int &VVV0Tree::NBGen1JERUp() {
  if (not NBGen1JERUp_isLoaded) {
    if (NBGen1JERUp_branch != 0) {
      NBGen1JERUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JERUp_branch does not exist!\n");
      exit(1);
    }
    NBGen1JERUp_isLoaded = true;
  }
  return NBGen1JERUp_;
}

const int &VVV0Tree::NBGen2JERUp() {
  if (not NBGen2JERUp_isLoaded) {
    if (NBGen2JERUp_branch != 0) {
      NBGen2JERUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JERUp_branch does not exist!\n");
      exit(1);
    }
    NBGen2JERUp_isLoaded = true;
  }
  return NBGen2JERUp_;
}

const int &VVV0Tree::NBGen3JERUp() {
  if (not NBGen3JERUp_isLoaded) {
    if (NBGen3JERUp_branch != 0) {
      NBGen3JERUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JERUp_branch does not exist!\n");
      exit(1);
    }
    NBGen3JERUp_isLoaded = true;
  }
  return NBGen3JERUp_;
}

const int &VVV0Tree::NBGen4JERUp() {
  if (not NBGen4JERUp_isLoaded) {
    if (NBGen4JERUp_branch != 0) {
      NBGen4JERUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JERUp_branch does not exist!\n");
      exit(1);
    }
    NBGen4JERUp_isLoaded = true;
  }
  return NBGen4JERUp_;
}

const int &VVV0Tree::NLGen0JERUp() {
  if (not NLGen0JERUp_isLoaded) {
    if (NLGen0JERUp_branch != 0) {
      NLGen0JERUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JERUp_branch does not exist!\n");
      exit(1);
    }
    NLGen0JERUp_isLoaded = true;
  }
  return NLGen0JERUp_;
}

const int &VVV0Tree::NLGen1JERUp() {
  if (not NLGen1JERUp_isLoaded) {
    if (NLGen1JERUp_branch != 0) {
      NLGen1JERUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JERUp_branch does not exist!\n");
      exit(1);
    }
    NLGen1JERUp_isLoaded = true;
  }
  return NLGen1JERUp_;
}

const int &VVV0Tree::NLGen2JERUp() {
  if (not NLGen2JERUp_isLoaded) {
    if (NLGen2JERUp_branch != 0) {
      NLGen2JERUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JERUp_branch does not exist!\n");
      exit(1);
    }
    NLGen2JERUp_isLoaded = true;
  }
  return NLGen2JERUp_;
}

const int &VVV0Tree::NLGen3JERUp() {
  if (not NLGen3JERUp_isLoaded) {
    if (NLGen3JERUp_branch != 0) {
      NLGen3JERUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JERUp_branch does not exist!\n");
      exit(1);
    }
    NLGen3JERUp_isLoaded = true;
  }
  return NLGen3JERUp_;
}

const int &VVV0Tree::NLGen4JERUp() {
  if (not NLGen4JERUp_isLoaded) {
    if (NLGen4JERUp_branch != 0) {
      NLGen4JERUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JERUp_branch does not exist!\n");
      exit(1);
    }
    NLGen4JERUp_isLoaded = true;
  }
  return NLGen4JERUp_;
}

const int &VVV0Tree::NiFJJERUp() {
  if (not NiFJJERUp_isLoaded) {
    if (NiFJJERUp_branch != 0) {
      NiFJJERUp_branch->GetEntry(index);
    } else {
      printf("branch NiFJJERUp_branch does not exist!\n");
      exit(1);
    }
    NiFJJERUp_isLoaded = true;
  }
  return NiFJJERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JERUp() {
  if (not iFJ0JERUp_isLoaded) {
    if (iFJ0JERUp_branch != 0) {
      iFJ0JERUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JERUp_branch does not exist!\n");
      exit(1);
    }
    iFJ0JERUp_isLoaded = true;
  }
  return *iFJ0JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JERUp() {
  if (not iFJ1JERUp_isLoaded) {
    if (iFJ1JERUp_branch != 0) {
      iFJ1JERUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JERUp_branch does not exist!\n");
      exit(1);
    }
    iFJ1JERUp_isLoaded = true;
  }
  return *iFJ1JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JERUp() {
  if (not iFJ2JERUp_isLoaded) {
    if (iFJ2JERUp_branch != 0) {
      iFJ2JERUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JERUp_branch does not exist!\n");
      exit(1);
    }
    iFJ2JERUp_isLoaded = true;
  }
  return *iFJ2JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JERUp() {
  if (not iFJ3JERUp_isLoaded) {
    if (iFJ3JERUp_branch != 0) {
      iFJ3JERUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JERUp_branch does not exist!\n");
      exit(1);
    }
    iFJ3JERUp_isLoaded = true;
  }
  return *iFJ3JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JERUp() {
  if (not iFJ4JERUp_isLoaded) {
    if (iFJ4JERUp_branch != 0) {
      iFJ4JERUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JERUp_branch does not exist!\n");
      exit(1);
    }
    iFJ4JERUp_isLoaded = true;
  }
  return *iFJ4JERUp_;
}

const float &VVV0Tree::iVMD0JERUp() {
  if (not iVMD0JERUp_isLoaded) {
    if (iVMD0JERUp_branch != 0) {
      iVMD0JERUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JERUp_branch does not exist!\n");
      exit(1);
    }
    iVMD0JERUp_isLoaded = true;
  }
  return iVMD0JERUp_;
}

const float &VVV0Tree::iVMD1JERUp() {
  if (not iVMD1JERUp_isLoaded) {
    if (iVMD1JERUp_branch != 0) {
      iVMD1JERUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JERUp_branch does not exist!\n");
      exit(1);
    }
    iVMD1JERUp_isLoaded = true;
  }
  return iVMD1JERUp_;
}

const float &VVV0Tree::iVMD2JERUp() {
  if (not iVMD2JERUp_isLoaded) {
    if (iVMD2JERUp_branch != 0) {
      iVMD2JERUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JERUp_branch does not exist!\n");
      exit(1);
    }
    iVMD2JERUp_isLoaded = true;
  }
  return iVMD2JERUp_;
}

const float &VVV0Tree::iVMD3JERUp() {
  if (not iVMD3JERUp_isLoaded) {
    if (iVMD3JERUp_branch != 0) {
      iVMD3JERUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JERUp_branch does not exist!\n");
      exit(1);
    }
    iVMD3JERUp_isLoaded = true;
  }
  return iVMD3JERUp_;
}

const float &VVV0Tree::iVMD4JERUp() {
  if (not iVMD4JERUp_isLoaded) {
    if (iVMD4JERUp_branch != 0) {
      iVMD4JERUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JERUp_branch does not exist!\n");
      exit(1);
    }
    iVMD4JERUp_isLoaded = true;
  }
  return iVMD4JERUp_;
}

const float &VVV0Tree::iWMD0JERUp() {
  if (not iWMD0JERUp_isLoaded) {
    if (iWMD0JERUp_branch != 0) {
      iWMD0JERUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JERUp_branch does not exist!\n");
      exit(1);
    }
    iWMD0JERUp_isLoaded = true;
  }
  return iWMD0JERUp_;
}

const float &VVV0Tree::iWMD1JERUp() {
  if (not iWMD1JERUp_isLoaded) {
    if (iWMD1JERUp_branch != 0) {
      iWMD1JERUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JERUp_branch does not exist!\n");
      exit(1);
    }
    iWMD1JERUp_isLoaded = true;
  }
  return iWMD1JERUp_;
}

const float &VVV0Tree::iWMD2JERUp() {
  if (not iWMD2JERUp_isLoaded) {
    if (iWMD2JERUp_branch != 0) {
      iWMD2JERUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JERUp_branch does not exist!\n");
      exit(1);
    }
    iWMD2JERUp_isLoaded = true;
  }
  return iWMD2JERUp_;
}

const float &VVV0Tree::iWMD3JERUp() {
  if (not iWMD3JERUp_isLoaded) {
    if (iWMD3JERUp_branch != 0) {
      iWMD3JERUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JERUp_branch does not exist!\n");
      exit(1);
    }
    iWMD3JERUp_isLoaded = true;
  }
  return iWMD3JERUp_;
}

const float &VVV0Tree::iWMD4JERUp() {
  if (not iWMD4JERUp_isLoaded) {
    if (iWMD4JERUp_branch != 0) {
      iWMD4JERUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JERUp_branch does not exist!\n");
      exit(1);
    }
    iWMD4JERUp_isLoaded = true;
  }
  return iWMD4JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJERUp() {
  if (not METJERUp_isLoaded) {
    if (METJERUp_branch != 0) {
      METJERUp_branch->GetEntry(index);
    } else {
      printf("branch METJERUp_branch does not exist!\n");
      exit(1);
    }
    METJERUp_isLoaded = true;
  }
  return *METJERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJERUp() {
  if (not NuJERUp_isLoaded) {
    if (NuJERUp_branch != 0) {
      NuJERUp_branch->GetEntry(index);
    } else {
      printf("branch NuJERUp_branch does not exist!\n");
      exit(1);
    }
    NuJERUp_isLoaded = true;
  }
  return *NuJERUp_;
}

const int &VVV0Tree::NJJERUp() {
  if (not NJJERUp_isLoaded) {
    if (NJJERUp_branch != 0) {
      NJJERUp_branch->GetEntry(index);
    } else {
      printf("branch NJJERUp_branch does not exist!\n");
      exit(1);
    }
    NJJERUp_isLoaded = true;
  }
  return NJJERUp_;
}

const int &VVV0Tree::NbLooseJERUp() {
  if (not NbLooseJERUp_isLoaded) {
    if (NbLooseJERUp_branch != 0) {
      NbLooseJERUp_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJERUp_branch does not exist!\n");
      exit(1);
    }
    NbLooseJERUp_isLoaded = true;
  }
  return NbLooseJERUp_;
}

const int &VVV0Tree::NbMediumJERUp() {
  if (not NbMediumJERUp_isLoaded) {
    if (NbMediumJERUp_branch != 0) {
      NbMediumJERUp_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJERUp_branch does not exist!\n");
      exit(1);
    }
    NbMediumJERUp_isLoaded = true;
  }
  return NbMediumJERUp_;
}

const int &VVV0Tree::NbTightJERUp() {
  if (not NbTightJERUp_isLoaded) {
    if (NbTightJERUp_branch != 0) {
      NbTightJERUp_branch->GetEntry(index);
    } else {
      printf("branch NbTightJERUp_branch does not exist!\n");
      exit(1);
    }
    NbTightJERUp_isLoaded = true;
  }
  return NbTightJERUp_;
}

const int &VVV0Tree::NoORNbLooseJERUp() {
  if (not NoORNbLooseJERUp_isLoaded) {
    if (NoORNbLooseJERUp_branch != 0) {
      NoORNbLooseJERUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJERUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJERUp_isLoaded = true;
  }
  return NoORNbLooseJERUp_;
}

const int &VVV0Tree::NoORNbMediumJERUp() {
  if (not NoORNbMediumJERUp_isLoaded) {
    if (NoORNbMediumJERUp_branch != 0) {
      NoORNbMediumJERUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJERUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJERUp_isLoaded = true;
  }
  return NoORNbMediumJERUp_;
}

const int &VVV0Tree::NoORNbTightJERUp() {
  if (not NoORNbTightJERUp_isLoaded) {
    if (NoORNbTightJERUp_branch != 0) {
      NoORNbTightJERUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJERUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJERUp_isLoaded = true;
  }
  return NoORNbTightJERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JERUp() {
  if (not J0JERUp_isLoaded) {
    if (J0JERUp_branch != 0) {
      J0JERUp_branch->GetEntry(index);
    } else {
      printf("branch J0JERUp_branch does not exist!\n");
      exit(1);
    }
    J0JERUp_isLoaded = true;
  }
  return *J0JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JERUp() {
  if (not J1JERUp_isLoaded) {
    if (J1JERUp_branch != 0) {
      J1JERUp_branch->GetEntry(index);
    } else {
      printf("branch J1JERUp_branch does not exist!\n");
      exit(1);
    }
    J1JERUp_isLoaded = true;
  }
  return *J1JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JERUp() {
  if (not J2JERUp_isLoaded) {
    if (J2JERUp_branch != 0) {
      J2JERUp_branch->GetEntry(index);
    } else {
      printf("branch J2JERUp_branch does not exist!\n");
      exit(1);
    }
    J2JERUp_isLoaded = true;
  }
  return *J2JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JERUp() {
  if (not J3JERUp_isLoaded) {
    if (J3JERUp_branch != 0) {
      J3JERUp_branch->GetEntry(index);
    } else {
      printf("branch J3JERUp_branch does not exist!\n");
      exit(1);
    }
    J3JERUp_isLoaded = true;
  }
  return *J3JERUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JERUp() {
  if (not J4JERUp_isLoaded) {
    if (J4JERUp_branch != 0) {
      J4JERUp_branch->GetEntry(index);
    } else {
      printf("branch J4JERUp_branch does not exist!\n");
      exit(1);
    }
    J4JERUp_isLoaded = true;
  }
  return *J4JERUp_;
}

const float &VVV0Tree::MVVXJERUp() {
  if (not MVVXJERUp_isLoaded) {
    if (MVVXJERUp_branch != 0) {
      MVVXJERUp_branch->GetEntry(index);
    } else {
      printf("branch MVVXJERUp_branch does not exist!\n");
      exit(1);
    }
    MVVXJERUp_isLoaded = true;
  }
  return MVVXJERUp_;
}

const float &VVV0Tree::PtVVXJERUp() {
  if (not PtVVXJERUp_isLoaded) {
    if (PtVVXJERUp_branch != 0) {
      PtVVXJERUp_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJERUp_branch does not exist!\n");
      exit(1);
    }
    PtVVXJERUp_isLoaded = true;
  }
  return PtVVXJERUp_;
}

const float &VVV0Tree::HTJERUp() {
  if (not HTJERUp_isLoaded) {
    if (HTJERUp_branch != 0) {
      HTJERUp_branch->GetEntry(index);
    } else {
      printf("branch HTJERUp_branch does not exist!\n");
      exit(1);
    }
    HTJERUp_isLoaded = true;
  }
  return HTJERUp_;
}

const float &VVV0Tree::HTJJERUp() {
  if (not HTJJERUp_isLoaded) {
    if (HTJJERUp_branch != 0) {
      HTJJERUp_branch->GetEntry(index);
    } else {
      printf("branch HTJJERUp_branch does not exist!\n");
      exit(1);
    }
    HTJJERUp_isLoaded = true;
  }
  return HTJJERUp_;
}

const float &VVV0Tree::HTFJJERUp() {
  if (not HTFJJERUp_isLoaded) {
    if (HTFJJERUp_branch != 0) {
      HTFJJERUp_branch->GetEntry(index);
    } else {
      printf("branch HTFJJERUp_branch does not exist!\n");
      exit(1);
    }
    HTFJJERUp_isLoaded = true;
  }
  return HTFJJERUp_;
}

const float &VVV0Tree::SumPtFJJERUp() {
  if (not SumPtFJJERUp_isLoaded) {
    if (SumPtFJJERUp_branch != 0) {
      SumPtFJJERUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJERUp_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJERUp_isLoaded = true;
  }
  return SumPtFJJERUp_;
}

const float &VVV0Tree::SumPtJJERUp() {
  if (not SumPtJJERUp_isLoaded) {
    if (SumPtJJERUp_branch != 0) {
      SumPtJJERUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJERUp_branch does not exist!\n");
      exit(1);
    }
    SumPtJJERUp_isLoaded = true;
  }
  return SumPtJJERUp_;
}

const int &VVV0Tree::NFJJERDn() {
  if (not NFJJERDn_isLoaded) {
    if (NFJJERDn_branch != 0) {
      NFJJERDn_branch->GetEntry(index);
    } else {
      printf("branch NFJJERDn_branch does not exist!\n");
      exit(1);
    }
    NFJJERDn_isLoaded = true;
  }
  return NFJJERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JERDn() {
  if (not FJ0JERDn_isLoaded) {
    if (FJ0JERDn_branch != 0) {
      FJ0JERDn_branch->GetEntry(index);
    } else {
      printf("branch FJ0JERDn_branch does not exist!\n");
      exit(1);
    }
    FJ0JERDn_isLoaded = true;
  }
  return *FJ0JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JERDn() {
  if (not FJ1JERDn_isLoaded) {
    if (FJ1JERDn_branch != 0) {
      FJ1JERDn_branch->GetEntry(index);
    } else {
      printf("branch FJ1JERDn_branch does not exist!\n");
      exit(1);
    }
    FJ1JERDn_isLoaded = true;
  }
  return *FJ1JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JERDn() {
  if (not FJ2JERDn_isLoaded) {
    if (FJ2JERDn_branch != 0) {
      FJ2JERDn_branch->GetEntry(index);
    } else {
      printf("branch FJ2JERDn_branch does not exist!\n");
      exit(1);
    }
    FJ2JERDn_isLoaded = true;
  }
  return *FJ2JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JERDn() {
  if (not FJ3JERDn_isLoaded) {
    if (FJ3JERDn_branch != 0) {
      FJ3JERDn_branch->GetEntry(index);
    } else {
      printf("branch FJ3JERDn_branch does not exist!\n");
      exit(1);
    }
    FJ3JERDn_isLoaded = true;
  }
  return *FJ3JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JERDn() {
  if (not FJ4JERDn_isLoaded) {
    if (FJ4JERDn_branch != 0) {
      FJ4JERDn_branch->GetEntry(index);
    } else {
      printf("branch FJ4JERDn_branch does not exist!\n");
      exit(1);
    }
    FJ4JERDn_isLoaded = true;
  }
  return *FJ4JERDn_;
}

const float &VVV0Tree::VMD0JERDn() {
  if (not VMD0JERDn_isLoaded) {
    if (VMD0JERDn_branch != 0) {
      VMD0JERDn_branch->GetEntry(index);
    } else {
      printf("branch VMD0JERDn_branch does not exist!\n");
      exit(1);
    }
    VMD0JERDn_isLoaded = true;
  }
  return VMD0JERDn_;
}

const float &VVV0Tree::VMD1JERDn() {
  if (not VMD1JERDn_isLoaded) {
    if (VMD1JERDn_branch != 0) {
      VMD1JERDn_branch->GetEntry(index);
    } else {
      printf("branch VMD1JERDn_branch does not exist!\n");
      exit(1);
    }
    VMD1JERDn_isLoaded = true;
  }
  return VMD1JERDn_;
}

const float &VVV0Tree::VMD2JERDn() {
  if (not VMD2JERDn_isLoaded) {
    if (VMD2JERDn_branch != 0) {
      VMD2JERDn_branch->GetEntry(index);
    } else {
      printf("branch VMD2JERDn_branch does not exist!\n");
      exit(1);
    }
    VMD2JERDn_isLoaded = true;
  }
  return VMD2JERDn_;
}

const float &VVV0Tree::VMD3JERDn() {
  if (not VMD3JERDn_isLoaded) {
    if (VMD3JERDn_branch != 0) {
      VMD3JERDn_branch->GetEntry(index);
    } else {
      printf("branch VMD3JERDn_branch does not exist!\n");
      exit(1);
    }
    VMD3JERDn_isLoaded = true;
  }
  return VMD3JERDn_;
}

const float &VVV0Tree::VMD4JERDn() {
  if (not VMD4JERDn_isLoaded) {
    if (VMD4JERDn_branch != 0) {
      VMD4JERDn_branch->GetEntry(index);
    } else {
      printf("branch VMD4JERDn_branch does not exist!\n");
      exit(1);
    }
    VMD4JERDn_isLoaded = true;
  }
  return VMD4JERDn_;
}

const float &VVV0Tree::WMD0JERDn() {
  if (not WMD0JERDn_isLoaded) {
    if (WMD0JERDn_branch != 0) {
      WMD0JERDn_branch->GetEntry(index);
    } else {
      printf("branch WMD0JERDn_branch does not exist!\n");
      exit(1);
    }
    WMD0JERDn_isLoaded = true;
  }
  return WMD0JERDn_;
}

const float &VVV0Tree::WMD1JERDn() {
  if (not WMD1JERDn_isLoaded) {
    if (WMD1JERDn_branch != 0) {
      WMD1JERDn_branch->GetEntry(index);
    } else {
      printf("branch WMD1JERDn_branch does not exist!\n");
      exit(1);
    }
    WMD1JERDn_isLoaded = true;
  }
  return WMD1JERDn_;
}

const float &VVV0Tree::WMD2JERDn() {
  if (not WMD2JERDn_isLoaded) {
    if (WMD2JERDn_branch != 0) {
      WMD2JERDn_branch->GetEntry(index);
    } else {
      printf("branch WMD2JERDn_branch does not exist!\n");
      exit(1);
    }
    WMD2JERDn_isLoaded = true;
  }
  return WMD2JERDn_;
}

const float &VVV0Tree::WMD3JERDn() {
  if (not WMD3JERDn_isLoaded) {
    if (WMD3JERDn_branch != 0) {
      WMD3JERDn_branch->GetEntry(index);
    } else {
      printf("branch WMD3JERDn_branch does not exist!\n");
      exit(1);
    }
    WMD3JERDn_isLoaded = true;
  }
  return WMD3JERDn_;
}

const float &VVV0Tree::WMD4JERDn() {
  if (not WMD4JERDn_isLoaded) {
    if (WMD4JERDn_branch != 0) {
      WMD4JERDn_branch->GetEntry(index);
    } else {
      printf("branch WMD4JERDn_branch does not exist!\n");
      exit(1);
    }
    WMD4JERDn_isLoaded = true;
  }
  return WMD4JERDn_;
}

const int &VVV0Tree::NQGen0JERDn() {
  if (not NQGen0JERDn_isLoaded) {
    if (NQGen0JERDn_branch != 0) {
      NQGen0JERDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JERDn_branch does not exist!\n");
      exit(1);
    }
    NQGen0JERDn_isLoaded = true;
  }
  return NQGen0JERDn_;
}

const int &VVV0Tree::NQGen1JERDn() {
  if (not NQGen1JERDn_isLoaded) {
    if (NQGen1JERDn_branch != 0) {
      NQGen1JERDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JERDn_branch does not exist!\n");
      exit(1);
    }
    NQGen1JERDn_isLoaded = true;
  }
  return NQGen1JERDn_;
}

const int &VVV0Tree::NQGen2JERDn() {
  if (not NQGen2JERDn_isLoaded) {
    if (NQGen2JERDn_branch != 0) {
      NQGen2JERDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JERDn_branch does not exist!\n");
      exit(1);
    }
    NQGen2JERDn_isLoaded = true;
  }
  return NQGen2JERDn_;
}

const int &VVV0Tree::NQGen3JERDn() {
  if (not NQGen3JERDn_isLoaded) {
    if (NQGen3JERDn_branch != 0) {
      NQGen3JERDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JERDn_branch does not exist!\n");
      exit(1);
    }
    NQGen3JERDn_isLoaded = true;
  }
  return NQGen3JERDn_;
}

const int &VVV0Tree::NQGen4JERDn() {
  if (not NQGen4JERDn_isLoaded) {
    if (NQGen4JERDn_branch != 0) {
      NQGen4JERDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JERDn_branch does not exist!\n");
      exit(1);
    }
    NQGen4JERDn_isLoaded = true;
  }
  return NQGen4JERDn_;
}

const int &VVV0Tree::NBGen0JERDn() {
  if (not NBGen0JERDn_isLoaded) {
    if (NBGen0JERDn_branch != 0) {
      NBGen0JERDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JERDn_branch does not exist!\n");
      exit(1);
    }
    NBGen0JERDn_isLoaded = true;
  }
  return NBGen0JERDn_;
}

const int &VVV0Tree::NBGen1JERDn() {
  if (not NBGen1JERDn_isLoaded) {
    if (NBGen1JERDn_branch != 0) {
      NBGen1JERDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JERDn_branch does not exist!\n");
      exit(1);
    }
    NBGen1JERDn_isLoaded = true;
  }
  return NBGen1JERDn_;
}

const int &VVV0Tree::NBGen2JERDn() {
  if (not NBGen2JERDn_isLoaded) {
    if (NBGen2JERDn_branch != 0) {
      NBGen2JERDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JERDn_branch does not exist!\n");
      exit(1);
    }
    NBGen2JERDn_isLoaded = true;
  }
  return NBGen2JERDn_;
}

const int &VVV0Tree::NBGen3JERDn() {
  if (not NBGen3JERDn_isLoaded) {
    if (NBGen3JERDn_branch != 0) {
      NBGen3JERDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JERDn_branch does not exist!\n");
      exit(1);
    }
    NBGen3JERDn_isLoaded = true;
  }
  return NBGen3JERDn_;
}

const int &VVV0Tree::NBGen4JERDn() {
  if (not NBGen4JERDn_isLoaded) {
    if (NBGen4JERDn_branch != 0) {
      NBGen4JERDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JERDn_branch does not exist!\n");
      exit(1);
    }
    NBGen4JERDn_isLoaded = true;
  }
  return NBGen4JERDn_;
}

const int &VVV0Tree::NLGen0JERDn() {
  if (not NLGen0JERDn_isLoaded) {
    if (NLGen0JERDn_branch != 0) {
      NLGen0JERDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JERDn_branch does not exist!\n");
      exit(1);
    }
    NLGen0JERDn_isLoaded = true;
  }
  return NLGen0JERDn_;
}

const int &VVV0Tree::NLGen1JERDn() {
  if (not NLGen1JERDn_isLoaded) {
    if (NLGen1JERDn_branch != 0) {
      NLGen1JERDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JERDn_branch does not exist!\n");
      exit(1);
    }
    NLGen1JERDn_isLoaded = true;
  }
  return NLGen1JERDn_;
}

const int &VVV0Tree::NLGen2JERDn() {
  if (not NLGen2JERDn_isLoaded) {
    if (NLGen2JERDn_branch != 0) {
      NLGen2JERDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JERDn_branch does not exist!\n");
      exit(1);
    }
    NLGen2JERDn_isLoaded = true;
  }
  return NLGen2JERDn_;
}

const int &VVV0Tree::NLGen3JERDn() {
  if (not NLGen3JERDn_isLoaded) {
    if (NLGen3JERDn_branch != 0) {
      NLGen3JERDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JERDn_branch does not exist!\n");
      exit(1);
    }
    NLGen3JERDn_isLoaded = true;
  }
  return NLGen3JERDn_;
}

const int &VVV0Tree::NLGen4JERDn() {
  if (not NLGen4JERDn_isLoaded) {
    if (NLGen4JERDn_branch != 0) {
      NLGen4JERDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JERDn_branch does not exist!\n");
      exit(1);
    }
    NLGen4JERDn_isLoaded = true;
  }
  return NLGen4JERDn_;
}

const int &VVV0Tree::NiFJJERDn() {
  if (not NiFJJERDn_isLoaded) {
    if (NiFJJERDn_branch != 0) {
      NiFJJERDn_branch->GetEntry(index);
    } else {
      printf("branch NiFJJERDn_branch does not exist!\n");
      exit(1);
    }
    NiFJJERDn_isLoaded = true;
  }
  return NiFJJERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JERDn() {
  if (not iFJ0JERDn_isLoaded) {
    if (iFJ0JERDn_branch != 0) {
      iFJ0JERDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JERDn_branch does not exist!\n");
      exit(1);
    }
    iFJ0JERDn_isLoaded = true;
  }
  return *iFJ0JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JERDn() {
  if (not iFJ1JERDn_isLoaded) {
    if (iFJ1JERDn_branch != 0) {
      iFJ1JERDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JERDn_branch does not exist!\n");
      exit(1);
    }
    iFJ1JERDn_isLoaded = true;
  }
  return *iFJ1JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JERDn() {
  if (not iFJ2JERDn_isLoaded) {
    if (iFJ2JERDn_branch != 0) {
      iFJ2JERDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JERDn_branch does not exist!\n");
      exit(1);
    }
    iFJ2JERDn_isLoaded = true;
  }
  return *iFJ2JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JERDn() {
  if (not iFJ3JERDn_isLoaded) {
    if (iFJ3JERDn_branch != 0) {
      iFJ3JERDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JERDn_branch does not exist!\n");
      exit(1);
    }
    iFJ3JERDn_isLoaded = true;
  }
  return *iFJ3JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JERDn() {
  if (not iFJ4JERDn_isLoaded) {
    if (iFJ4JERDn_branch != 0) {
      iFJ4JERDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JERDn_branch does not exist!\n");
      exit(1);
    }
    iFJ4JERDn_isLoaded = true;
  }
  return *iFJ4JERDn_;
}

const float &VVV0Tree::iVMD0JERDn() {
  if (not iVMD0JERDn_isLoaded) {
    if (iVMD0JERDn_branch != 0) {
      iVMD0JERDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JERDn_branch does not exist!\n");
      exit(1);
    }
    iVMD0JERDn_isLoaded = true;
  }
  return iVMD0JERDn_;
}

const float &VVV0Tree::iVMD1JERDn() {
  if (not iVMD1JERDn_isLoaded) {
    if (iVMD1JERDn_branch != 0) {
      iVMD1JERDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JERDn_branch does not exist!\n");
      exit(1);
    }
    iVMD1JERDn_isLoaded = true;
  }
  return iVMD1JERDn_;
}

const float &VVV0Tree::iVMD2JERDn() {
  if (not iVMD2JERDn_isLoaded) {
    if (iVMD2JERDn_branch != 0) {
      iVMD2JERDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JERDn_branch does not exist!\n");
      exit(1);
    }
    iVMD2JERDn_isLoaded = true;
  }
  return iVMD2JERDn_;
}

const float &VVV0Tree::iVMD3JERDn() {
  if (not iVMD3JERDn_isLoaded) {
    if (iVMD3JERDn_branch != 0) {
      iVMD3JERDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JERDn_branch does not exist!\n");
      exit(1);
    }
    iVMD3JERDn_isLoaded = true;
  }
  return iVMD3JERDn_;
}

const float &VVV0Tree::iVMD4JERDn() {
  if (not iVMD4JERDn_isLoaded) {
    if (iVMD4JERDn_branch != 0) {
      iVMD4JERDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JERDn_branch does not exist!\n");
      exit(1);
    }
    iVMD4JERDn_isLoaded = true;
  }
  return iVMD4JERDn_;
}

const float &VVV0Tree::iWMD0JERDn() {
  if (not iWMD0JERDn_isLoaded) {
    if (iWMD0JERDn_branch != 0) {
      iWMD0JERDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JERDn_branch does not exist!\n");
      exit(1);
    }
    iWMD0JERDn_isLoaded = true;
  }
  return iWMD0JERDn_;
}

const float &VVV0Tree::iWMD1JERDn() {
  if (not iWMD1JERDn_isLoaded) {
    if (iWMD1JERDn_branch != 0) {
      iWMD1JERDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JERDn_branch does not exist!\n");
      exit(1);
    }
    iWMD1JERDn_isLoaded = true;
  }
  return iWMD1JERDn_;
}

const float &VVV0Tree::iWMD2JERDn() {
  if (not iWMD2JERDn_isLoaded) {
    if (iWMD2JERDn_branch != 0) {
      iWMD2JERDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JERDn_branch does not exist!\n");
      exit(1);
    }
    iWMD2JERDn_isLoaded = true;
  }
  return iWMD2JERDn_;
}

const float &VVV0Tree::iWMD3JERDn() {
  if (not iWMD3JERDn_isLoaded) {
    if (iWMD3JERDn_branch != 0) {
      iWMD3JERDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JERDn_branch does not exist!\n");
      exit(1);
    }
    iWMD3JERDn_isLoaded = true;
  }
  return iWMD3JERDn_;
}

const float &VVV0Tree::iWMD4JERDn() {
  if (not iWMD4JERDn_isLoaded) {
    if (iWMD4JERDn_branch != 0) {
      iWMD4JERDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JERDn_branch does not exist!\n");
      exit(1);
    }
    iWMD4JERDn_isLoaded = true;
  }
  return iWMD4JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJERDn() {
  if (not METJERDn_isLoaded) {
    if (METJERDn_branch != 0) {
      METJERDn_branch->GetEntry(index);
    } else {
      printf("branch METJERDn_branch does not exist!\n");
      exit(1);
    }
    METJERDn_isLoaded = true;
  }
  return *METJERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJERDn() {
  if (not NuJERDn_isLoaded) {
    if (NuJERDn_branch != 0) {
      NuJERDn_branch->GetEntry(index);
    } else {
      printf("branch NuJERDn_branch does not exist!\n");
      exit(1);
    }
    NuJERDn_isLoaded = true;
  }
  return *NuJERDn_;
}

const int &VVV0Tree::NJJERDn() {
  if (not NJJERDn_isLoaded) {
    if (NJJERDn_branch != 0) {
      NJJERDn_branch->GetEntry(index);
    } else {
      printf("branch NJJERDn_branch does not exist!\n");
      exit(1);
    }
    NJJERDn_isLoaded = true;
  }
  return NJJERDn_;
}

const int &VVV0Tree::NbLooseJERDn() {
  if (not NbLooseJERDn_isLoaded) {
    if (NbLooseJERDn_branch != 0) {
      NbLooseJERDn_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJERDn_branch does not exist!\n");
      exit(1);
    }
    NbLooseJERDn_isLoaded = true;
  }
  return NbLooseJERDn_;
}

const int &VVV0Tree::NbMediumJERDn() {
  if (not NbMediumJERDn_isLoaded) {
    if (NbMediumJERDn_branch != 0) {
      NbMediumJERDn_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJERDn_branch does not exist!\n");
      exit(1);
    }
    NbMediumJERDn_isLoaded = true;
  }
  return NbMediumJERDn_;
}

const int &VVV0Tree::NbTightJERDn() {
  if (not NbTightJERDn_isLoaded) {
    if (NbTightJERDn_branch != 0) {
      NbTightJERDn_branch->GetEntry(index);
    } else {
      printf("branch NbTightJERDn_branch does not exist!\n");
      exit(1);
    }
    NbTightJERDn_isLoaded = true;
  }
  return NbTightJERDn_;
}

const int &VVV0Tree::NoORNbLooseJERDn() {
  if (not NoORNbLooseJERDn_isLoaded) {
    if (NoORNbLooseJERDn_branch != 0) {
      NoORNbLooseJERDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJERDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJERDn_isLoaded = true;
  }
  return NoORNbLooseJERDn_;
}

const int &VVV0Tree::NoORNbMediumJERDn() {
  if (not NoORNbMediumJERDn_isLoaded) {
    if (NoORNbMediumJERDn_branch != 0) {
      NoORNbMediumJERDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJERDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJERDn_isLoaded = true;
  }
  return NoORNbMediumJERDn_;
}

const int &VVV0Tree::NoORNbTightJERDn() {
  if (not NoORNbTightJERDn_isLoaded) {
    if (NoORNbTightJERDn_branch != 0) {
      NoORNbTightJERDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJERDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJERDn_isLoaded = true;
  }
  return NoORNbTightJERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JERDn() {
  if (not J0JERDn_isLoaded) {
    if (J0JERDn_branch != 0) {
      J0JERDn_branch->GetEntry(index);
    } else {
      printf("branch J0JERDn_branch does not exist!\n");
      exit(1);
    }
    J0JERDn_isLoaded = true;
  }
  return *J0JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JERDn() {
  if (not J1JERDn_isLoaded) {
    if (J1JERDn_branch != 0) {
      J1JERDn_branch->GetEntry(index);
    } else {
      printf("branch J1JERDn_branch does not exist!\n");
      exit(1);
    }
    J1JERDn_isLoaded = true;
  }
  return *J1JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JERDn() {
  if (not J2JERDn_isLoaded) {
    if (J2JERDn_branch != 0) {
      J2JERDn_branch->GetEntry(index);
    } else {
      printf("branch J2JERDn_branch does not exist!\n");
      exit(1);
    }
    J2JERDn_isLoaded = true;
  }
  return *J2JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JERDn() {
  if (not J3JERDn_isLoaded) {
    if (J3JERDn_branch != 0) {
      J3JERDn_branch->GetEntry(index);
    } else {
      printf("branch J3JERDn_branch does not exist!\n");
      exit(1);
    }
    J3JERDn_isLoaded = true;
  }
  return *J3JERDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JERDn() {
  if (not J4JERDn_isLoaded) {
    if (J4JERDn_branch != 0) {
      J4JERDn_branch->GetEntry(index);
    } else {
      printf("branch J4JERDn_branch does not exist!\n");
      exit(1);
    }
    J4JERDn_isLoaded = true;
  }
  return *J4JERDn_;
}

const float &VVV0Tree::MVVXJERDn() {
  if (not MVVXJERDn_isLoaded) {
    if (MVVXJERDn_branch != 0) {
      MVVXJERDn_branch->GetEntry(index);
    } else {
      printf("branch MVVXJERDn_branch does not exist!\n");
      exit(1);
    }
    MVVXJERDn_isLoaded = true;
  }
  return MVVXJERDn_;
}

const float &VVV0Tree::PtVVXJERDn() {
  if (not PtVVXJERDn_isLoaded) {
    if (PtVVXJERDn_branch != 0) {
      PtVVXJERDn_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJERDn_branch does not exist!\n");
      exit(1);
    }
    PtVVXJERDn_isLoaded = true;
  }
  return PtVVXJERDn_;
}

const float &VVV0Tree::HTJERDn() {
  if (not HTJERDn_isLoaded) {
    if (HTJERDn_branch != 0) {
      HTJERDn_branch->GetEntry(index);
    } else {
      printf("branch HTJERDn_branch does not exist!\n");
      exit(1);
    }
    HTJERDn_isLoaded = true;
  }
  return HTJERDn_;
}

const float &VVV0Tree::HTJJERDn() {
  if (not HTJJERDn_isLoaded) {
    if (HTJJERDn_branch != 0) {
      HTJJERDn_branch->GetEntry(index);
    } else {
      printf("branch HTJJERDn_branch does not exist!\n");
      exit(1);
    }
    HTJJERDn_isLoaded = true;
  }
  return HTJJERDn_;
}

const float &VVV0Tree::HTFJJERDn() {
  if (not HTFJJERDn_isLoaded) {
    if (HTFJJERDn_branch != 0) {
      HTFJJERDn_branch->GetEntry(index);
    } else {
      printf("branch HTFJJERDn_branch does not exist!\n");
      exit(1);
    }
    HTFJJERDn_isLoaded = true;
  }
  return HTFJJERDn_;
}

const float &VVV0Tree::SumPtFJJERDn() {
  if (not SumPtFJJERDn_isLoaded) {
    if (SumPtFJJERDn_branch != 0) {
      SumPtFJJERDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJERDn_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJERDn_isLoaded = true;
  }
  return SumPtFJJERDn_;
}

const float &VVV0Tree::SumPtJJERDn() {
  if (not SumPtJJERDn_isLoaded) {
    if (SumPtJJERDn_branch != 0) {
      SumPtJJERDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJERDn_branch does not exist!\n");
      exit(1);
    }
    SumPtJJERDn_isLoaded = true;
  }
  return SumPtJJERDn_;
}

const int &VVV0Tree::NFJJMSUp() {
  if (not NFJJMSUp_isLoaded) {
    if (NFJJMSUp_branch != 0) {
      NFJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NFJJMSUp_branch does not exist!\n");
      exit(1);
    }
    NFJJMSUp_isLoaded = true;
  }
  return NFJJMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JMSUp() {
  if (not FJ0JMSUp_isLoaded) {
    if (FJ0JMSUp_branch != 0) {
      FJ0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch FJ0JMSUp_branch does not exist!\n");
      exit(1);
    }
    FJ0JMSUp_isLoaded = true;
  }
  return *FJ0JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JMSUp() {
  if (not FJ1JMSUp_isLoaded) {
    if (FJ1JMSUp_branch != 0) {
      FJ1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch FJ1JMSUp_branch does not exist!\n");
      exit(1);
    }
    FJ1JMSUp_isLoaded = true;
  }
  return *FJ1JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JMSUp() {
  if (not FJ2JMSUp_isLoaded) {
    if (FJ2JMSUp_branch != 0) {
      FJ2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch FJ2JMSUp_branch does not exist!\n");
      exit(1);
    }
    FJ2JMSUp_isLoaded = true;
  }
  return *FJ2JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JMSUp() {
  if (not FJ3JMSUp_isLoaded) {
    if (FJ3JMSUp_branch != 0) {
      FJ3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch FJ3JMSUp_branch does not exist!\n");
      exit(1);
    }
    FJ3JMSUp_isLoaded = true;
  }
  return *FJ3JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JMSUp() {
  if (not FJ4JMSUp_isLoaded) {
    if (FJ4JMSUp_branch != 0) {
      FJ4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch FJ4JMSUp_branch does not exist!\n");
      exit(1);
    }
    FJ4JMSUp_isLoaded = true;
  }
  return *FJ4JMSUp_;
}

const float &VVV0Tree::VMD0JMSUp() {
  if (not VMD0JMSUp_isLoaded) {
    if (VMD0JMSUp_branch != 0) {
      VMD0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch VMD0JMSUp_branch does not exist!\n");
      exit(1);
    }
    VMD0JMSUp_isLoaded = true;
  }
  return VMD0JMSUp_;
}

const float &VVV0Tree::VMD1JMSUp() {
  if (not VMD1JMSUp_isLoaded) {
    if (VMD1JMSUp_branch != 0) {
      VMD1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch VMD1JMSUp_branch does not exist!\n");
      exit(1);
    }
    VMD1JMSUp_isLoaded = true;
  }
  return VMD1JMSUp_;
}

const float &VVV0Tree::VMD2JMSUp() {
  if (not VMD2JMSUp_isLoaded) {
    if (VMD2JMSUp_branch != 0) {
      VMD2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch VMD2JMSUp_branch does not exist!\n");
      exit(1);
    }
    VMD2JMSUp_isLoaded = true;
  }
  return VMD2JMSUp_;
}

const float &VVV0Tree::VMD3JMSUp() {
  if (not VMD3JMSUp_isLoaded) {
    if (VMD3JMSUp_branch != 0) {
      VMD3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch VMD3JMSUp_branch does not exist!\n");
      exit(1);
    }
    VMD3JMSUp_isLoaded = true;
  }
  return VMD3JMSUp_;
}

const float &VVV0Tree::VMD4JMSUp() {
  if (not VMD4JMSUp_isLoaded) {
    if (VMD4JMSUp_branch != 0) {
      VMD4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch VMD4JMSUp_branch does not exist!\n");
      exit(1);
    }
    VMD4JMSUp_isLoaded = true;
  }
  return VMD4JMSUp_;
}

const float &VVV0Tree::WMD0JMSUp() {
  if (not WMD0JMSUp_isLoaded) {
    if (WMD0JMSUp_branch != 0) {
      WMD0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch WMD0JMSUp_branch does not exist!\n");
      exit(1);
    }
    WMD0JMSUp_isLoaded = true;
  }
  return WMD0JMSUp_;
}

const float &VVV0Tree::WMD1JMSUp() {
  if (not WMD1JMSUp_isLoaded) {
    if (WMD1JMSUp_branch != 0) {
      WMD1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch WMD1JMSUp_branch does not exist!\n");
      exit(1);
    }
    WMD1JMSUp_isLoaded = true;
  }
  return WMD1JMSUp_;
}

const float &VVV0Tree::WMD2JMSUp() {
  if (not WMD2JMSUp_isLoaded) {
    if (WMD2JMSUp_branch != 0) {
      WMD2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch WMD2JMSUp_branch does not exist!\n");
      exit(1);
    }
    WMD2JMSUp_isLoaded = true;
  }
  return WMD2JMSUp_;
}

const float &VVV0Tree::WMD3JMSUp() {
  if (not WMD3JMSUp_isLoaded) {
    if (WMD3JMSUp_branch != 0) {
      WMD3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch WMD3JMSUp_branch does not exist!\n");
      exit(1);
    }
    WMD3JMSUp_isLoaded = true;
  }
  return WMD3JMSUp_;
}

const float &VVV0Tree::WMD4JMSUp() {
  if (not WMD4JMSUp_isLoaded) {
    if (WMD4JMSUp_branch != 0) {
      WMD4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch WMD4JMSUp_branch does not exist!\n");
      exit(1);
    }
    WMD4JMSUp_isLoaded = true;
  }
  return WMD4JMSUp_;
}

const int &VVV0Tree::NQGen0JMSUp() {
  if (not NQGen0JMSUp_isLoaded) {
    if (NQGen0JMSUp_branch != 0) {
      NQGen0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JMSUp_branch does not exist!\n");
      exit(1);
    }
    NQGen0JMSUp_isLoaded = true;
  }
  return NQGen0JMSUp_;
}

const int &VVV0Tree::NQGen1JMSUp() {
  if (not NQGen1JMSUp_isLoaded) {
    if (NQGen1JMSUp_branch != 0) {
      NQGen1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JMSUp_branch does not exist!\n");
      exit(1);
    }
    NQGen1JMSUp_isLoaded = true;
  }
  return NQGen1JMSUp_;
}

const int &VVV0Tree::NQGen2JMSUp() {
  if (not NQGen2JMSUp_isLoaded) {
    if (NQGen2JMSUp_branch != 0) {
      NQGen2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JMSUp_branch does not exist!\n");
      exit(1);
    }
    NQGen2JMSUp_isLoaded = true;
  }
  return NQGen2JMSUp_;
}

const int &VVV0Tree::NQGen3JMSUp() {
  if (not NQGen3JMSUp_isLoaded) {
    if (NQGen3JMSUp_branch != 0) {
      NQGen3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JMSUp_branch does not exist!\n");
      exit(1);
    }
    NQGen3JMSUp_isLoaded = true;
  }
  return NQGen3JMSUp_;
}

const int &VVV0Tree::NQGen4JMSUp() {
  if (not NQGen4JMSUp_isLoaded) {
    if (NQGen4JMSUp_branch != 0) {
      NQGen4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JMSUp_branch does not exist!\n");
      exit(1);
    }
    NQGen4JMSUp_isLoaded = true;
  }
  return NQGen4JMSUp_;
}

const int &VVV0Tree::NBGen0JMSUp() {
  if (not NBGen0JMSUp_isLoaded) {
    if (NBGen0JMSUp_branch != 0) {
      NBGen0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JMSUp_branch does not exist!\n");
      exit(1);
    }
    NBGen0JMSUp_isLoaded = true;
  }
  return NBGen0JMSUp_;
}

const int &VVV0Tree::NBGen1JMSUp() {
  if (not NBGen1JMSUp_isLoaded) {
    if (NBGen1JMSUp_branch != 0) {
      NBGen1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JMSUp_branch does not exist!\n");
      exit(1);
    }
    NBGen1JMSUp_isLoaded = true;
  }
  return NBGen1JMSUp_;
}

const int &VVV0Tree::NBGen2JMSUp() {
  if (not NBGen2JMSUp_isLoaded) {
    if (NBGen2JMSUp_branch != 0) {
      NBGen2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JMSUp_branch does not exist!\n");
      exit(1);
    }
    NBGen2JMSUp_isLoaded = true;
  }
  return NBGen2JMSUp_;
}

const int &VVV0Tree::NBGen3JMSUp() {
  if (not NBGen3JMSUp_isLoaded) {
    if (NBGen3JMSUp_branch != 0) {
      NBGen3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JMSUp_branch does not exist!\n");
      exit(1);
    }
    NBGen3JMSUp_isLoaded = true;
  }
  return NBGen3JMSUp_;
}

const int &VVV0Tree::NBGen4JMSUp() {
  if (not NBGen4JMSUp_isLoaded) {
    if (NBGen4JMSUp_branch != 0) {
      NBGen4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JMSUp_branch does not exist!\n");
      exit(1);
    }
    NBGen4JMSUp_isLoaded = true;
  }
  return NBGen4JMSUp_;
}

const int &VVV0Tree::NLGen0JMSUp() {
  if (not NLGen0JMSUp_isLoaded) {
    if (NLGen0JMSUp_branch != 0) {
      NLGen0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JMSUp_branch does not exist!\n");
      exit(1);
    }
    NLGen0JMSUp_isLoaded = true;
  }
  return NLGen0JMSUp_;
}

const int &VVV0Tree::NLGen1JMSUp() {
  if (not NLGen1JMSUp_isLoaded) {
    if (NLGen1JMSUp_branch != 0) {
      NLGen1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JMSUp_branch does not exist!\n");
      exit(1);
    }
    NLGen1JMSUp_isLoaded = true;
  }
  return NLGen1JMSUp_;
}

const int &VVV0Tree::NLGen2JMSUp() {
  if (not NLGen2JMSUp_isLoaded) {
    if (NLGen2JMSUp_branch != 0) {
      NLGen2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JMSUp_branch does not exist!\n");
      exit(1);
    }
    NLGen2JMSUp_isLoaded = true;
  }
  return NLGen2JMSUp_;
}

const int &VVV0Tree::NLGen3JMSUp() {
  if (not NLGen3JMSUp_isLoaded) {
    if (NLGen3JMSUp_branch != 0) {
      NLGen3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JMSUp_branch does not exist!\n");
      exit(1);
    }
    NLGen3JMSUp_isLoaded = true;
  }
  return NLGen3JMSUp_;
}

const int &VVV0Tree::NLGen4JMSUp() {
  if (not NLGen4JMSUp_isLoaded) {
    if (NLGen4JMSUp_branch != 0) {
      NLGen4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JMSUp_branch does not exist!\n");
      exit(1);
    }
    NLGen4JMSUp_isLoaded = true;
  }
  return NLGen4JMSUp_;
}

const int &VVV0Tree::NiFJJMSUp() {
  if (not NiFJJMSUp_isLoaded) {
    if (NiFJJMSUp_branch != 0) {
      NiFJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NiFJJMSUp_branch does not exist!\n");
      exit(1);
    }
    NiFJJMSUp_isLoaded = true;
  }
  return NiFJJMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JMSUp() {
  if (not iFJ0JMSUp_isLoaded) {
    if (iFJ0JMSUp_branch != 0) {
      iFJ0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JMSUp_branch does not exist!\n");
      exit(1);
    }
    iFJ0JMSUp_isLoaded = true;
  }
  return *iFJ0JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JMSUp() {
  if (not iFJ1JMSUp_isLoaded) {
    if (iFJ1JMSUp_branch != 0) {
      iFJ1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JMSUp_branch does not exist!\n");
      exit(1);
    }
    iFJ1JMSUp_isLoaded = true;
  }
  return *iFJ1JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JMSUp() {
  if (not iFJ2JMSUp_isLoaded) {
    if (iFJ2JMSUp_branch != 0) {
      iFJ2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JMSUp_branch does not exist!\n");
      exit(1);
    }
    iFJ2JMSUp_isLoaded = true;
  }
  return *iFJ2JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JMSUp() {
  if (not iFJ3JMSUp_isLoaded) {
    if (iFJ3JMSUp_branch != 0) {
      iFJ3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JMSUp_branch does not exist!\n");
      exit(1);
    }
    iFJ3JMSUp_isLoaded = true;
  }
  return *iFJ3JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JMSUp() {
  if (not iFJ4JMSUp_isLoaded) {
    if (iFJ4JMSUp_branch != 0) {
      iFJ4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JMSUp_branch does not exist!\n");
      exit(1);
    }
    iFJ4JMSUp_isLoaded = true;
  }
  return *iFJ4JMSUp_;
}

const float &VVV0Tree::iVMD0JMSUp() {
  if (not iVMD0JMSUp_isLoaded) {
    if (iVMD0JMSUp_branch != 0) {
      iVMD0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JMSUp_branch does not exist!\n");
      exit(1);
    }
    iVMD0JMSUp_isLoaded = true;
  }
  return iVMD0JMSUp_;
}

const float &VVV0Tree::iVMD1JMSUp() {
  if (not iVMD1JMSUp_isLoaded) {
    if (iVMD1JMSUp_branch != 0) {
      iVMD1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JMSUp_branch does not exist!\n");
      exit(1);
    }
    iVMD1JMSUp_isLoaded = true;
  }
  return iVMD1JMSUp_;
}

const float &VVV0Tree::iVMD2JMSUp() {
  if (not iVMD2JMSUp_isLoaded) {
    if (iVMD2JMSUp_branch != 0) {
      iVMD2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JMSUp_branch does not exist!\n");
      exit(1);
    }
    iVMD2JMSUp_isLoaded = true;
  }
  return iVMD2JMSUp_;
}

const float &VVV0Tree::iVMD3JMSUp() {
  if (not iVMD3JMSUp_isLoaded) {
    if (iVMD3JMSUp_branch != 0) {
      iVMD3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JMSUp_branch does not exist!\n");
      exit(1);
    }
    iVMD3JMSUp_isLoaded = true;
  }
  return iVMD3JMSUp_;
}

const float &VVV0Tree::iVMD4JMSUp() {
  if (not iVMD4JMSUp_isLoaded) {
    if (iVMD4JMSUp_branch != 0) {
      iVMD4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JMSUp_branch does not exist!\n");
      exit(1);
    }
    iVMD4JMSUp_isLoaded = true;
  }
  return iVMD4JMSUp_;
}

const float &VVV0Tree::iWMD0JMSUp() {
  if (not iWMD0JMSUp_isLoaded) {
    if (iWMD0JMSUp_branch != 0) {
      iWMD0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JMSUp_branch does not exist!\n");
      exit(1);
    }
    iWMD0JMSUp_isLoaded = true;
  }
  return iWMD0JMSUp_;
}

const float &VVV0Tree::iWMD1JMSUp() {
  if (not iWMD1JMSUp_isLoaded) {
    if (iWMD1JMSUp_branch != 0) {
      iWMD1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JMSUp_branch does not exist!\n");
      exit(1);
    }
    iWMD1JMSUp_isLoaded = true;
  }
  return iWMD1JMSUp_;
}

const float &VVV0Tree::iWMD2JMSUp() {
  if (not iWMD2JMSUp_isLoaded) {
    if (iWMD2JMSUp_branch != 0) {
      iWMD2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JMSUp_branch does not exist!\n");
      exit(1);
    }
    iWMD2JMSUp_isLoaded = true;
  }
  return iWMD2JMSUp_;
}

const float &VVV0Tree::iWMD3JMSUp() {
  if (not iWMD3JMSUp_isLoaded) {
    if (iWMD3JMSUp_branch != 0) {
      iWMD3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JMSUp_branch does not exist!\n");
      exit(1);
    }
    iWMD3JMSUp_isLoaded = true;
  }
  return iWMD3JMSUp_;
}

const float &VVV0Tree::iWMD4JMSUp() {
  if (not iWMD4JMSUp_isLoaded) {
    if (iWMD4JMSUp_branch != 0) {
      iWMD4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JMSUp_branch does not exist!\n");
      exit(1);
    }
    iWMD4JMSUp_isLoaded = true;
  }
  return iWMD4JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJMSUp() {
  if (not METJMSUp_isLoaded) {
    if (METJMSUp_branch != 0) {
      METJMSUp_branch->GetEntry(index);
    } else {
      printf("branch METJMSUp_branch does not exist!\n");
      exit(1);
    }
    METJMSUp_isLoaded = true;
  }
  return *METJMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJMSUp() {
  if (not NuJMSUp_isLoaded) {
    if (NuJMSUp_branch != 0) {
      NuJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NuJMSUp_branch does not exist!\n");
      exit(1);
    }
    NuJMSUp_isLoaded = true;
  }
  return *NuJMSUp_;
}

const int &VVV0Tree::NJJMSUp() {
  if (not NJJMSUp_isLoaded) {
    if (NJJMSUp_branch != 0) {
      NJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NJJMSUp_branch does not exist!\n");
      exit(1);
    }
    NJJMSUp_isLoaded = true;
  }
  return NJJMSUp_;
}

const int &VVV0Tree::NbLooseJMSUp() {
  if (not NbLooseJMSUp_isLoaded) {
    if (NbLooseJMSUp_branch != 0) {
      NbLooseJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJMSUp_branch does not exist!\n");
      exit(1);
    }
    NbLooseJMSUp_isLoaded = true;
  }
  return NbLooseJMSUp_;
}

const int &VVV0Tree::NbMediumJMSUp() {
  if (not NbMediumJMSUp_isLoaded) {
    if (NbMediumJMSUp_branch != 0) {
      NbMediumJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJMSUp_branch does not exist!\n");
      exit(1);
    }
    NbMediumJMSUp_isLoaded = true;
  }
  return NbMediumJMSUp_;
}

const int &VVV0Tree::NbTightJMSUp() {
  if (not NbTightJMSUp_isLoaded) {
    if (NbTightJMSUp_branch != 0) {
      NbTightJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NbTightJMSUp_branch does not exist!\n");
      exit(1);
    }
    NbTightJMSUp_isLoaded = true;
  }
  return NbTightJMSUp_;
}

const int &VVV0Tree::NoORNbLooseJMSUp() {
  if (not NoORNbLooseJMSUp_isLoaded) {
    if (NoORNbLooseJMSUp_branch != 0) {
      NoORNbLooseJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJMSUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJMSUp_isLoaded = true;
  }
  return NoORNbLooseJMSUp_;
}

const int &VVV0Tree::NoORNbMediumJMSUp() {
  if (not NoORNbMediumJMSUp_isLoaded) {
    if (NoORNbMediumJMSUp_branch != 0) {
      NoORNbMediumJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJMSUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJMSUp_isLoaded = true;
  }
  return NoORNbMediumJMSUp_;
}

const int &VVV0Tree::NoORNbTightJMSUp() {
  if (not NoORNbTightJMSUp_isLoaded) {
    if (NoORNbTightJMSUp_branch != 0) {
      NoORNbTightJMSUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJMSUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJMSUp_isLoaded = true;
  }
  return NoORNbTightJMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JMSUp() {
  if (not J0JMSUp_isLoaded) {
    if (J0JMSUp_branch != 0) {
      J0JMSUp_branch->GetEntry(index);
    } else {
      printf("branch J0JMSUp_branch does not exist!\n");
      exit(1);
    }
    J0JMSUp_isLoaded = true;
  }
  return *J0JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JMSUp() {
  if (not J1JMSUp_isLoaded) {
    if (J1JMSUp_branch != 0) {
      J1JMSUp_branch->GetEntry(index);
    } else {
      printf("branch J1JMSUp_branch does not exist!\n");
      exit(1);
    }
    J1JMSUp_isLoaded = true;
  }
  return *J1JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JMSUp() {
  if (not J2JMSUp_isLoaded) {
    if (J2JMSUp_branch != 0) {
      J2JMSUp_branch->GetEntry(index);
    } else {
      printf("branch J2JMSUp_branch does not exist!\n");
      exit(1);
    }
    J2JMSUp_isLoaded = true;
  }
  return *J2JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JMSUp() {
  if (not J3JMSUp_isLoaded) {
    if (J3JMSUp_branch != 0) {
      J3JMSUp_branch->GetEntry(index);
    } else {
      printf("branch J3JMSUp_branch does not exist!\n");
      exit(1);
    }
    J3JMSUp_isLoaded = true;
  }
  return *J3JMSUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JMSUp() {
  if (not J4JMSUp_isLoaded) {
    if (J4JMSUp_branch != 0) {
      J4JMSUp_branch->GetEntry(index);
    } else {
      printf("branch J4JMSUp_branch does not exist!\n");
      exit(1);
    }
    J4JMSUp_isLoaded = true;
  }
  return *J4JMSUp_;
}

const float &VVV0Tree::MVVXJMSUp() {
  if (not MVVXJMSUp_isLoaded) {
    if (MVVXJMSUp_branch != 0) {
      MVVXJMSUp_branch->GetEntry(index);
    } else {
      printf("branch MVVXJMSUp_branch does not exist!\n");
      exit(1);
    }
    MVVXJMSUp_isLoaded = true;
  }
  return MVVXJMSUp_;
}

const float &VVV0Tree::PtVVXJMSUp() {
  if (not PtVVXJMSUp_isLoaded) {
    if (PtVVXJMSUp_branch != 0) {
      PtVVXJMSUp_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJMSUp_branch does not exist!\n");
      exit(1);
    }
    PtVVXJMSUp_isLoaded = true;
  }
  return PtVVXJMSUp_;
}

const float &VVV0Tree::HTJMSUp() {
  if (not HTJMSUp_isLoaded) {
    if (HTJMSUp_branch != 0) {
      HTJMSUp_branch->GetEntry(index);
    } else {
      printf("branch HTJMSUp_branch does not exist!\n");
      exit(1);
    }
    HTJMSUp_isLoaded = true;
  }
  return HTJMSUp_;
}

const float &VVV0Tree::HTJJMSUp() {
  if (not HTJJMSUp_isLoaded) {
    if (HTJJMSUp_branch != 0) {
      HTJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch HTJJMSUp_branch does not exist!\n");
      exit(1);
    }
    HTJJMSUp_isLoaded = true;
  }
  return HTJJMSUp_;
}

const float &VVV0Tree::HTFJJMSUp() {
  if (not HTFJJMSUp_isLoaded) {
    if (HTFJJMSUp_branch != 0) {
      HTFJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch HTFJJMSUp_branch does not exist!\n");
      exit(1);
    }
    HTFJJMSUp_isLoaded = true;
  }
  return HTFJJMSUp_;
}

const float &VVV0Tree::SumPtFJJMSUp() {
  if (not SumPtFJJMSUp_isLoaded) {
    if (SumPtFJJMSUp_branch != 0) {
      SumPtFJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJMSUp_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJMSUp_isLoaded = true;
  }
  return SumPtFJJMSUp_;
}

const float &VVV0Tree::SumPtJJMSUp() {
  if (not SumPtJJMSUp_isLoaded) {
    if (SumPtJJMSUp_branch != 0) {
      SumPtJJMSUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJMSUp_branch does not exist!\n");
      exit(1);
    }
    SumPtJJMSUp_isLoaded = true;
  }
  return SumPtJJMSUp_;
}

const int &VVV0Tree::NFJJMSDn() {
  if (not NFJJMSDn_isLoaded) {
    if (NFJJMSDn_branch != 0) {
      NFJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NFJJMSDn_branch does not exist!\n");
      exit(1);
    }
    NFJJMSDn_isLoaded = true;
  }
  return NFJJMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JMSDn() {
  if (not FJ0JMSDn_isLoaded) {
    if (FJ0JMSDn_branch != 0) {
      FJ0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch FJ0JMSDn_branch does not exist!\n");
      exit(1);
    }
    FJ0JMSDn_isLoaded = true;
  }
  return *FJ0JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JMSDn() {
  if (not FJ1JMSDn_isLoaded) {
    if (FJ1JMSDn_branch != 0) {
      FJ1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch FJ1JMSDn_branch does not exist!\n");
      exit(1);
    }
    FJ1JMSDn_isLoaded = true;
  }
  return *FJ1JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JMSDn() {
  if (not FJ2JMSDn_isLoaded) {
    if (FJ2JMSDn_branch != 0) {
      FJ2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch FJ2JMSDn_branch does not exist!\n");
      exit(1);
    }
    FJ2JMSDn_isLoaded = true;
  }
  return *FJ2JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JMSDn() {
  if (not FJ3JMSDn_isLoaded) {
    if (FJ3JMSDn_branch != 0) {
      FJ3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch FJ3JMSDn_branch does not exist!\n");
      exit(1);
    }
    FJ3JMSDn_isLoaded = true;
  }
  return *FJ3JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JMSDn() {
  if (not FJ4JMSDn_isLoaded) {
    if (FJ4JMSDn_branch != 0) {
      FJ4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch FJ4JMSDn_branch does not exist!\n");
      exit(1);
    }
    FJ4JMSDn_isLoaded = true;
  }
  return *FJ4JMSDn_;
}

const float &VVV0Tree::VMD0JMSDn() {
  if (not VMD0JMSDn_isLoaded) {
    if (VMD0JMSDn_branch != 0) {
      VMD0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch VMD0JMSDn_branch does not exist!\n");
      exit(1);
    }
    VMD0JMSDn_isLoaded = true;
  }
  return VMD0JMSDn_;
}

const float &VVV0Tree::VMD1JMSDn() {
  if (not VMD1JMSDn_isLoaded) {
    if (VMD1JMSDn_branch != 0) {
      VMD1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch VMD1JMSDn_branch does not exist!\n");
      exit(1);
    }
    VMD1JMSDn_isLoaded = true;
  }
  return VMD1JMSDn_;
}

const float &VVV0Tree::VMD2JMSDn() {
  if (not VMD2JMSDn_isLoaded) {
    if (VMD2JMSDn_branch != 0) {
      VMD2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch VMD2JMSDn_branch does not exist!\n");
      exit(1);
    }
    VMD2JMSDn_isLoaded = true;
  }
  return VMD2JMSDn_;
}

const float &VVV0Tree::VMD3JMSDn() {
  if (not VMD3JMSDn_isLoaded) {
    if (VMD3JMSDn_branch != 0) {
      VMD3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch VMD3JMSDn_branch does not exist!\n");
      exit(1);
    }
    VMD3JMSDn_isLoaded = true;
  }
  return VMD3JMSDn_;
}

const float &VVV0Tree::VMD4JMSDn() {
  if (not VMD4JMSDn_isLoaded) {
    if (VMD4JMSDn_branch != 0) {
      VMD4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch VMD4JMSDn_branch does not exist!\n");
      exit(1);
    }
    VMD4JMSDn_isLoaded = true;
  }
  return VMD4JMSDn_;
}

const float &VVV0Tree::WMD0JMSDn() {
  if (not WMD0JMSDn_isLoaded) {
    if (WMD0JMSDn_branch != 0) {
      WMD0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch WMD0JMSDn_branch does not exist!\n");
      exit(1);
    }
    WMD0JMSDn_isLoaded = true;
  }
  return WMD0JMSDn_;
}

const float &VVV0Tree::WMD1JMSDn() {
  if (not WMD1JMSDn_isLoaded) {
    if (WMD1JMSDn_branch != 0) {
      WMD1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch WMD1JMSDn_branch does not exist!\n");
      exit(1);
    }
    WMD1JMSDn_isLoaded = true;
  }
  return WMD1JMSDn_;
}

const float &VVV0Tree::WMD2JMSDn() {
  if (not WMD2JMSDn_isLoaded) {
    if (WMD2JMSDn_branch != 0) {
      WMD2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch WMD2JMSDn_branch does not exist!\n");
      exit(1);
    }
    WMD2JMSDn_isLoaded = true;
  }
  return WMD2JMSDn_;
}

const float &VVV0Tree::WMD3JMSDn() {
  if (not WMD3JMSDn_isLoaded) {
    if (WMD3JMSDn_branch != 0) {
      WMD3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch WMD3JMSDn_branch does not exist!\n");
      exit(1);
    }
    WMD3JMSDn_isLoaded = true;
  }
  return WMD3JMSDn_;
}

const float &VVV0Tree::WMD4JMSDn() {
  if (not WMD4JMSDn_isLoaded) {
    if (WMD4JMSDn_branch != 0) {
      WMD4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch WMD4JMSDn_branch does not exist!\n");
      exit(1);
    }
    WMD4JMSDn_isLoaded = true;
  }
  return WMD4JMSDn_;
}

const int &VVV0Tree::NQGen0JMSDn() {
  if (not NQGen0JMSDn_isLoaded) {
    if (NQGen0JMSDn_branch != 0) {
      NQGen0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JMSDn_branch does not exist!\n");
      exit(1);
    }
    NQGen0JMSDn_isLoaded = true;
  }
  return NQGen0JMSDn_;
}

const int &VVV0Tree::NQGen1JMSDn() {
  if (not NQGen1JMSDn_isLoaded) {
    if (NQGen1JMSDn_branch != 0) {
      NQGen1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JMSDn_branch does not exist!\n");
      exit(1);
    }
    NQGen1JMSDn_isLoaded = true;
  }
  return NQGen1JMSDn_;
}

const int &VVV0Tree::NQGen2JMSDn() {
  if (not NQGen2JMSDn_isLoaded) {
    if (NQGen2JMSDn_branch != 0) {
      NQGen2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JMSDn_branch does not exist!\n");
      exit(1);
    }
    NQGen2JMSDn_isLoaded = true;
  }
  return NQGen2JMSDn_;
}

const int &VVV0Tree::NQGen3JMSDn() {
  if (not NQGen3JMSDn_isLoaded) {
    if (NQGen3JMSDn_branch != 0) {
      NQGen3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JMSDn_branch does not exist!\n");
      exit(1);
    }
    NQGen3JMSDn_isLoaded = true;
  }
  return NQGen3JMSDn_;
}

const int &VVV0Tree::NQGen4JMSDn() {
  if (not NQGen4JMSDn_isLoaded) {
    if (NQGen4JMSDn_branch != 0) {
      NQGen4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JMSDn_branch does not exist!\n");
      exit(1);
    }
    NQGen4JMSDn_isLoaded = true;
  }
  return NQGen4JMSDn_;
}

const int &VVV0Tree::NBGen0JMSDn() {
  if (not NBGen0JMSDn_isLoaded) {
    if (NBGen0JMSDn_branch != 0) {
      NBGen0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JMSDn_branch does not exist!\n");
      exit(1);
    }
    NBGen0JMSDn_isLoaded = true;
  }
  return NBGen0JMSDn_;
}

const int &VVV0Tree::NBGen1JMSDn() {
  if (not NBGen1JMSDn_isLoaded) {
    if (NBGen1JMSDn_branch != 0) {
      NBGen1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JMSDn_branch does not exist!\n");
      exit(1);
    }
    NBGen1JMSDn_isLoaded = true;
  }
  return NBGen1JMSDn_;
}

const int &VVV0Tree::NBGen2JMSDn() {
  if (not NBGen2JMSDn_isLoaded) {
    if (NBGen2JMSDn_branch != 0) {
      NBGen2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JMSDn_branch does not exist!\n");
      exit(1);
    }
    NBGen2JMSDn_isLoaded = true;
  }
  return NBGen2JMSDn_;
}

const int &VVV0Tree::NBGen3JMSDn() {
  if (not NBGen3JMSDn_isLoaded) {
    if (NBGen3JMSDn_branch != 0) {
      NBGen3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JMSDn_branch does not exist!\n");
      exit(1);
    }
    NBGen3JMSDn_isLoaded = true;
  }
  return NBGen3JMSDn_;
}

const int &VVV0Tree::NBGen4JMSDn() {
  if (not NBGen4JMSDn_isLoaded) {
    if (NBGen4JMSDn_branch != 0) {
      NBGen4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JMSDn_branch does not exist!\n");
      exit(1);
    }
    NBGen4JMSDn_isLoaded = true;
  }
  return NBGen4JMSDn_;
}

const int &VVV0Tree::NLGen0JMSDn() {
  if (not NLGen0JMSDn_isLoaded) {
    if (NLGen0JMSDn_branch != 0) {
      NLGen0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JMSDn_branch does not exist!\n");
      exit(1);
    }
    NLGen0JMSDn_isLoaded = true;
  }
  return NLGen0JMSDn_;
}

const int &VVV0Tree::NLGen1JMSDn() {
  if (not NLGen1JMSDn_isLoaded) {
    if (NLGen1JMSDn_branch != 0) {
      NLGen1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JMSDn_branch does not exist!\n");
      exit(1);
    }
    NLGen1JMSDn_isLoaded = true;
  }
  return NLGen1JMSDn_;
}

const int &VVV0Tree::NLGen2JMSDn() {
  if (not NLGen2JMSDn_isLoaded) {
    if (NLGen2JMSDn_branch != 0) {
      NLGen2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JMSDn_branch does not exist!\n");
      exit(1);
    }
    NLGen2JMSDn_isLoaded = true;
  }
  return NLGen2JMSDn_;
}

const int &VVV0Tree::NLGen3JMSDn() {
  if (not NLGen3JMSDn_isLoaded) {
    if (NLGen3JMSDn_branch != 0) {
      NLGen3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JMSDn_branch does not exist!\n");
      exit(1);
    }
    NLGen3JMSDn_isLoaded = true;
  }
  return NLGen3JMSDn_;
}

const int &VVV0Tree::NLGen4JMSDn() {
  if (not NLGen4JMSDn_isLoaded) {
    if (NLGen4JMSDn_branch != 0) {
      NLGen4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JMSDn_branch does not exist!\n");
      exit(1);
    }
    NLGen4JMSDn_isLoaded = true;
  }
  return NLGen4JMSDn_;
}

const int &VVV0Tree::NiFJJMSDn() {
  if (not NiFJJMSDn_isLoaded) {
    if (NiFJJMSDn_branch != 0) {
      NiFJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NiFJJMSDn_branch does not exist!\n");
      exit(1);
    }
    NiFJJMSDn_isLoaded = true;
  }
  return NiFJJMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JMSDn() {
  if (not iFJ0JMSDn_isLoaded) {
    if (iFJ0JMSDn_branch != 0) {
      iFJ0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JMSDn_branch does not exist!\n");
      exit(1);
    }
    iFJ0JMSDn_isLoaded = true;
  }
  return *iFJ0JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JMSDn() {
  if (not iFJ1JMSDn_isLoaded) {
    if (iFJ1JMSDn_branch != 0) {
      iFJ1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JMSDn_branch does not exist!\n");
      exit(1);
    }
    iFJ1JMSDn_isLoaded = true;
  }
  return *iFJ1JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JMSDn() {
  if (not iFJ2JMSDn_isLoaded) {
    if (iFJ2JMSDn_branch != 0) {
      iFJ2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JMSDn_branch does not exist!\n");
      exit(1);
    }
    iFJ2JMSDn_isLoaded = true;
  }
  return *iFJ2JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JMSDn() {
  if (not iFJ3JMSDn_isLoaded) {
    if (iFJ3JMSDn_branch != 0) {
      iFJ3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JMSDn_branch does not exist!\n");
      exit(1);
    }
    iFJ3JMSDn_isLoaded = true;
  }
  return *iFJ3JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JMSDn() {
  if (not iFJ4JMSDn_isLoaded) {
    if (iFJ4JMSDn_branch != 0) {
      iFJ4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JMSDn_branch does not exist!\n");
      exit(1);
    }
    iFJ4JMSDn_isLoaded = true;
  }
  return *iFJ4JMSDn_;
}

const float &VVV0Tree::iVMD0JMSDn() {
  if (not iVMD0JMSDn_isLoaded) {
    if (iVMD0JMSDn_branch != 0) {
      iVMD0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JMSDn_branch does not exist!\n");
      exit(1);
    }
    iVMD0JMSDn_isLoaded = true;
  }
  return iVMD0JMSDn_;
}

const float &VVV0Tree::iVMD1JMSDn() {
  if (not iVMD1JMSDn_isLoaded) {
    if (iVMD1JMSDn_branch != 0) {
      iVMD1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JMSDn_branch does not exist!\n");
      exit(1);
    }
    iVMD1JMSDn_isLoaded = true;
  }
  return iVMD1JMSDn_;
}

const float &VVV0Tree::iVMD2JMSDn() {
  if (not iVMD2JMSDn_isLoaded) {
    if (iVMD2JMSDn_branch != 0) {
      iVMD2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JMSDn_branch does not exist!\n");
      exit(1);
    }
    iVMD2JMSDn_isLoaded = true;
  }
  return iVMD2JMSDn_;
}

const float &VVV0Tree::iVMD3JMSDn() {
  if (not iVMD3JMSDn_isLoaded) {
    if (iVMD3JMSDn_branch != 0) {
      iVMD3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JMSDn_branch does not exist!\n");
      exit(1);
    }
    iVMD3JMSDn_isLoaded = true;
  }
  return iVMD3JMSDn_;
}

const float &VVV0Tree::iVMD4JMSDn() {
  if (not iVMD4JMSDn_isLoaded) {
    if (iVMD4JMSDn_branch != 0) {
      iVMD4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JMSDn_branch does not exist!\n");
      exit(1);
    }
    iVMD4JMSDn_isLoaded = true;
  }
  return iVMD4JMSDn_;
}

const float &VVV0Tree::iWMD0JMSDn() {
  if (not iWMD0JMSDn_isLoaded) {
    if (iWMD0JMSDn_branch != 0) {
      iWMD0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JMSDn_branch does not exist!\n");
      exit(1);
    }
    iWMD0JMSDn_isLoaded = true;
  }
  return iWMD0JMSDn_;
}

const float &VVV0Tree::iWMD1JMSDn() {
  if (not iWMD1JMSDn_isLoaded) {
    if (iWMD1JMSDn_branch != 0) {
      iWMD1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JMSDn_branch does not exist!\n");
      exit(1);
    }
    iWMD1JMSDn_isLoaded = true;
  }
  return iWMD1JMSDn_;
}

const float &VVV0Tree::iWMD2JMSDn() {
  if (not iWMD2JMSDn_isLoaded) {
    if (iWMD2JMSDn_branch != 0) {
      iWMD2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JMSDn_branch does not exist!\n");
      exit(1);
    }
    iWMD2JMSDn_isLoaded = true;
  }
  return iWMD2JMSDn_;
}

const float &VVV0Tree::iWMD3JMSDn() {
  if (not iWMD3JMSDn_isLoaded) {
    if (iWMD3JMSDn_branch != 0) {
      iWMD3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JMSDn_branch does not exist!\n");
      exit(1);
    }
    iWMD3JMSDn_isLoaded = true;
  }
  return iWMD3JMSDn_;
}

const float &VVV0Tree::iWMD4JMSDn() {
  if (not iWMD4JMSDn_isLoaded) {
    if (iWMD4JMSDn_branch != 0) {
      iWMD4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JMSDn_branch does not exist!\n");
      exit(1);
    }
    iWMD4JMSDn_isLoaded = true;
  }
  return iWMD4JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJMSDn() {
  if (not METJMSDn_isLoaded) {
    if (METJMSDn_branch != 0) {
      METJMSDn_branch->GetEntry(index);
    } else {
      printf("branch METJMSDn_branch does not exist!\n");
      exit(1);
    }
    METJMSDn_isLoaded = true;
  }
  return *METJMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJMSDn() {
  if (not NuJMSDn_isLoaded) {
    if (NuJMSDn_branch != 0) {
      NuJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NuJMSDn_branch does not exist!\n");
      exit(1);
    }
    NuJMSDn_isLoaded = true;
  }
  return *NuJMSDn_;
}

const int &VVV0Tree::NJJMSDn() {
  if (not NJJMSDn_isLoaded) {
    if (NJJMSDn_branch != 0) {
      NJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NJJMSDn_branch does not exist!\n");
      exit(1);
    }
    NJJMSDn_isLoaded = true;
  }
  return NJJMSDn_;
}

const int &VVV0Tree::NbLooseJMSDn() {
  if (not NbLooseJMSDn_isLoaded) {
    if (NbLooseJMSDn_branch != 0) {
      NbLooseJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJMSDn_branch does not exist!\n");
      exit(1);
    }
    NbLooseJMSDn_isLoaded = true;
  }
  return NbLooseJMSDn_;
}

const int &VVV0Tree::NbMediumJMSDn() {
  if (not NbMediumJMSDn_isLoaded) {
    if (NbMediumJMSDn_branch != 0) {
      NbMediumJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJMSDn_branch does not exist!\n");
      exit(1);
    }
    NbMediumJMSDn_isLoaded = true;
  }
  return NbMediumJMSDn_;
}

const int &VVV0Tree::NbTightJMSDn() {
  if (not NbTightJMSDn_isLoaded) {
    if (NbTightJMSDn_branch != 0) {
      NbTightJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NbTightJMSDn_branch does not exist!\n");
      exit(1);
    }
    NbTightJMSDn_isLoaded = true;
  }
  return NbTightJMSDn_;
}

const int &VVV0Tree::NoORNbLooseJMSDn() {
  if (not NoORNbLooseJMSDn_isLoaded) {
    if (NoORNbLooseJMSDn_branch != 0) {
      NoORNbLooseJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJMSDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJMSDn_isLoaded = true;
  }
  return NoORNbLooseJMSDn_;
}

const int &VVV0Tree::NoORNbMediumJMSDn() {
  if (not NoORNbMediumJMSDn_isLoaded) {
    if (NoORNbMediumJMSDn_branch != 0) {
      NoORNbMediumJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJMSDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJMSDn_isLoaded = true;
  }
  return NoORNbMediumJMSDn_;
}

const int &VVV0Tree::NoORNbTightJMSDn() {
  if (not NoORNbTightJMSDn_isLoaded) {
    if (NoORNbTightJMSDn_branch != 0) {
      NoORNbTightJMSDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJMSDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJMSDn_isLoaded = true;
  }
  return NoORNbTightJMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JMSDn() {
  if (not J0JMSDn_isLoaded) {
    if (J0JMSDn_branch != 0) {
      J0JMSDn_branch->GetEntry(index);
    } else {
      printf("branch J0JMSDn_branch does not exist!\n");
      exit(1);
    }
    J0JMSDn_isLoaded = true;
  }
  return *J0JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JMSDn() {
  if (not J1JMSDn_isLoaded) {
    if (J1JMSDn_branch != 0) {
      J1JMSDn_branch->GetEntry(index);
    } else {
      printf("branch J1JMSDn_branch does not exist!\n");
      exit(1);
    }
    J1JMSDn_isLoaded = true;
  }
  return *J1JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JMSDn() {
  if (not J2JMSDn_isLoaded) {
    if (J2JMSDn_branch != 0) {
      J2JMSDn_branch->GetEntry(index);
    } else {
      printf("branch J2JMSDn_branch does not exist!\n");
      exit(1);
    }
    J2JMSDn_isLoaded = true;
  }
  return *J2JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JMSDn() {
  if (not J3JMSDn_isLoaded) {
    if (J3JMSDn_branch != 0) {
      J3JMSDn_branch->GetEntry(index);
    } else {
      printf("branch J3JMSDn_branch does not exist!\n");
      exit(1);
    }
    J3JMSDn_isLoaded = true;
  }
  return *J3JMSDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JMSDn() {
  if (not J4JMSDn_isLoaded) {
    if (J4JMSDn_branch != 0) {
      J4JMSDn_branch->GetEntry(index);
    } else {
      printf("branch J4JMSDn_branch does not exist!\n");
      exit(1);
    }
    J4JMSDn_isLoaded = true;
  }
  return *J4JMSDn_;
}

const float &VVV0Tree::MVVXJMSDn() {
  if (not MVVXJMSDn_isLoaded) {
    if (MVVXJMSDn_branch != 0) {
      MVVXJMSDn_branch->GetEntry(index);
    } else {
      printf("branch MVVXJMSDn_branch does not exist!\n");
      exit(1);
    }
    MVVXJMSDn_isLoaded = true;
  }
  return MVVXJMSDn_;
}

const float &VVV0Tree::PtVVXJMSDn() {
  if (not PtVVXJMSDn_isLoaded) {
    if (PtVVXJMSDn_branch != 0) {
      PtVVXJMSDn_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJMSDn_branch does not exist!\n");
      exit(1);
    }
    PtVVXJMSDn_isLoaded = true;
  }
  return PtVVXJMSDn_;
}

const float &VVV0Tree::HTJMSDn() {
  if (not HTJMSDn_isLoaded) {
    if (HTJMSDn_branch != 0) {
      HTJMSDn_branch->GetEntry(index);
    } else {
      printf("branch HTJMSDn_branch does not exist!\n");
      exit(1);
    }
    HTJMSDn_isLoaded = true;
  }
  return HTJMSDn_;
}

const float &VVV0Tree::HTJJMSDn() {
  if (not HTJJMSDn_isLoaded) {
    if (HTJJMSDn_branch != 0) {
      HTJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch HTJJMSDn_branch does not exist!\n");
      exit(1);
    }
    HTJJMSDn_isLoaded = true;
  }
  return HTJJMSDn_;
}

const float &VVV0Tree::HTFJJMSDn() {
  if (not HTFJJMSDn_isLoaded) {
    if (HTFJJMSDn_branch != 0) {
      HTFJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch HTFJJMSDn_branch does not exist!\n");
      exit(1);
    }
    HTFJJMSDn_isLoaded = true;
  }
  return HTFJJMSDn_;
}

const float &VVV0Tree::SumPtFJJMSDn() {
  if (not SumPtFJJMSDn_isLoaded) {
    if (SumPtFJJMSDn_branch != 0) {
      SumPtFJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJMSDn_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJMSDn_isLoaded = true;
  }
  return SumPtFJJMSDn_;
}

const float &VVV0Tree::SumPtJJMSDn() {
  if (not SumPtJJMSDn_isLoaded) {
    if (SumPtJJMSDn_branch != 0) {
      SumPtJJMSDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJMSDn_branch does not exist!\n");
      exit(1);
    }
    SumPtJJMSDn_isLoaded = true;
  }
  return SumPtJJMSDn_;
}

const int &VVV0Tree::NFJJMRUp() {
  if (not NFJJMRUp_isLoaded) {
    if (NFJJMRUp_branch != 0) {
      NFJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NFJJMRUp_branch does not exist!\n");
      exit(1);
    }
    NFJJMRUp_isLoaded = true;
  }
  return NFJJMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JMRUp() {
  if (not FJ0JMRUp_isLoaded) {
    if (FJ0JMRUp_branch != 0) {
      FJ0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch FJ0JMRUp_branch does not exist!\n");
      exit(1);
    }
    FJ0JMRUp_isLoaded = true;
  }
  return *FJ0JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JMRUp() {
  if (not FJ1JMRUp_isLoaded) {
    if (FJ1JMRUp_branch != 0) {
      FJ1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch FJ1JMRUp_branch does not exist!\n");
      exit(1);
    }
    FJ1JMRUp_isLoaded = true;
  }
  return *FJ1JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JMRUp() {
  if (not FJ2JMRUp_isLoaded) {
    if (FJ2JMRUp_branch != 0) {
      FJ2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch FJ2JMRUp_branch does not exist!\n");
      exit(1);
    }
    FJ2JMRUp_isLoaded = true;
  }
  return *FJ2JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JMRUp() {
  if (not FJ3JMRUp_isLoaded) {
    if (FJ3JMRUp_branch != 0) {
      FJ3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch FJ3JMRUp_branch does not exist!\n");
      exit(1);
    }
    FJ3JMRUp_isLoaded = true;
  }
  return *FJ3JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JMRUp() {
  if (not FJ4JMRUp_isLoaded) {
    if (FJ4JMRUp_branch != 0) {
      FJ4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch FJ4JMRUp_branch does not exist!\n");
      exit(1);
    }
    FJ4JMRUp_isLoaded = true;
  }
  return *FJ4JMRUp_;
}

const float &VVV0Tree::VMD0JMRUp() {
  if (not VMD0JMRUp_isLoaded) {
    if (VMD0JMRUp_branch != 0) {
      VMD0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch VMD0JMRUp_branch does not exist!\n");
      exit(1);
    }
    VMD0JMRUp_isLoaded = true;
  }
  return VMD0JMRUp_;
}

const float &VVV0Tree::VMD1JMRUp() {
  if (not VMD1JMRUp_isLoaded) {
    if (VMD1JMRUp_branch != 0) {
      VMD1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch VMD1JMRUp_branch does not exist!\n");
      exit(1);
    }
    VMD1JMRUp_isLoaded = true;
  }
  return VMD1JMRUp_;
}

const float &VVV0Tree::VMD2JMRUp() {
  if (not VMD2JMRUp_isLoaded) {
    if (VMD2JMRUp_branch != 0) {
      VMD2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch VMD2JMRUp_branch does not exist!\n");
      exit(1);
    }
    VMD2JMRUp_isLoaded = true;
  }
  return VMD2JMRUp_;
}

const float &VVV0Tree::VMD3JMRUp() {
  if (not VMD3JMRUp_isLoaded) {
    if (VMD3JMRUp_branch != 0) {
      VMD3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch VMD3JMRUp_branch does not exist!\n");
      exit(1);
    }
    VMD3JMRUp_isLoaded = true;
  }
  return VMD3JMRUp_;
}

const float &VVV0Tree::VMD4JMRUp() {
  if (not VMD4JMRUp_isLoaded) {
    if (VMD4JMRUp_branch != 0) {
      VMD4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch VMD4JMRUp_branch does not exist!\n");
      exit(1);
    }
    VMD4JMRUp_isLoaded = true;
  }
  return VMD4JMRUp_;
}

const float &VVV0Tree::WMD0JMRUp() {
  if (not WMD0JMRUp_isLoaded) {
    if (WMD0JMRUp_branch != 0) {
      WMD0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch WMD0JMRUp_branch does not exist!\n");
      exit(1);
    }
    WMD0JMRUp_isLoaded = true;
  }
  return WMD0JMRUp_;
}

const float &VVV0Tree::WMD1JMRUp() {
  if (not WMD1JMRUp_isLoaded) {
    if (WMD1JMRUp_branch != 0) {
      WMD1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch WMD1JMRUp_branch does not exist!\n");
      exit(1);
    }
    WMD1JMRUp_isLoaded = true;
  }
  return WMD1JMRUp_;
}

const float &VVV0Tree::WMD2JMRUp() {
  if (not WMD2JMRUp_isLoaded) {
    if (WMD2JMRUp_branch != 0) {
      WMD2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch WMD2JMRUp_branch does not exist!\n");
      exit(1);
    }
    WMD2JMRUp_isLoaded = true;
  }
  return WMD2JMRUp_;
}

const float &VVV0Tree::WMD3JMRUp() {
  if (not WMD3JMRUp_isLoaded) {
    if (WMD3JMRUp_branch != 0) {
      WMD3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch WMD3JMRUp_branch does not exist!\n");
      exit(1);
    }
    WMD3JMRUp_isLoaded = true;
  }
  return WMD3JMRUp_;
}

const float &VVV0Tree::WMD4JMRUp() {
  if (not WMD4JMRUp_isLoaded) {
    if (WMD4JMRUp_branch != 0) {
      WMD4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch WMD4JMRUp_branch does not exist!\n");
      exit(1);
    }
    WMD4JMRUp_isLoaded = true;
  }
  return WMD4JMRUp_;
}

const int &VVV0Tree::NQGen0JMRUp() {
  if (not NQGen0JMRUp_isLoaded) {
    if (NQGen0JMRUp_branch != 0) {
      NQGen0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JMRUp_branch does not exist!\n");
      exit(1);
    }
    NQGen0JMRUp_isLoaded = true;
  }
  return NQGen0JMRUp_;
}

const int &VVV0Tree::NQGen1JMRUp() {
  if (not NQGen1JMRUp_isLoaded) {
    if (NQGen1JMRUp_branch != 0) {
      NQGen1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JMRUp_branch does not exist!\n");
      exit(1);
    }
    NQGen1JMRUp_isLoaded = true;
  }
  return NQGen1JMRUp_;
}

const int &VVV0Tree::NQGen2JMRUp() {
  if (not NQGen2JMRUp_isLoaded) {
    if (NQGen2JMRUp_branch != 0) {
      NQGen2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JMRUp_branch does not exist!\n");
      exit(1);
    }
    NQGen2JMRUp_isLoaded = true;
  }
  return NQGen2JMRUp_;
}

const int &VVV0Tree::NQGen3JMRUp() {
  if (not NQGen3JMRUp_isLoaded) {
    if (NQGen3JMRUp_branch != 0) {
      NQGen3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JMRUp_branch does not exist!\n");
      exit(1);
    }
    NQGen3JMRUp_isLoaded = true;
  }
  return NQGen3JMRUp_;
}

const int &VVV0Tree::NQGen4JMRUp() {
  if (not NQGen4JMRUp_isLoaded) {
    if (NQGen4JMRUp_branch != 0) {
      NQGen4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JMRUp_branch does not exist!\n");
      exit(1);
    }
    NQGen4JMRUp_isLoaded = true;
  }
  return NQGen4JMRUp_;
}

const int &VVV0Tree::NBGen0JMRUp() {
  if (not NBGen0JMRUp_isLoaded) {
    if (NBGen0JMRUp_branch != 0) {
      NBGen0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JMRUp_branch does not exist!\n");
      exit(1);
    }
    NBGen0JMRUp_isLoaded = true;
  }
  return NBGen0JMRUp_;
}

const int &VVV0Tree::NBGen1JMRUp() {
  if (not NBGen1JMRUp_isLoaded) {
    if (NBGen1JMRUp_branch != 0) {
      NBGen1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JMRUp_branch does not exist!\n");
      exit(1);
    }
    NBGen1JMRUp_isLoaded = true;
  }
  return NBGen1JMRUp_;
}

const int &VVV0Tree::NBGen2JMRUp() {
  if (not NBGen2JMRUp_isLoaded) {
    if (NBGen2JMRUp_branch != 0) {
      NBGen2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JMRUp_branch does not exist!\n");
      exit(1);
    }
    NBGen2JMRUp_isLoaded = true;
  }
  return NBGen2JMRUp_;
}

const int &VVV0Tree::NBGen3JMRUp() {
  if (not NBGen3JMRUp_isLoaded) {
    if (NBGen3JMRUp_branch != 0) {
      NBGen3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JMRUp_branch does not exist!\n");
      exit(1);
    }
    NBGen3JMRUp_isLoaded = true;
  }
  return NBGen3JMRUp_;
}

const int &VVV0Tree::NBGen4JMRUp() {
  if (not NBGen4JMRUp_isLoaded) {
    if (NBGen4JMRUp_branch != 0) {
      NBGen4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JMRUp_branch does not exist!\n");
      exit(1);
    }
    NBGen4JMRUp_isLoaded = true;
  }
  return NBGen4JMRUp_;
}

const int &VVV0Tree::NLGen0JMRUp() {
  if (not NLGen0JMRUp_isLoaded) {
    if (NLGen0JMRUp_branch != 0) {
      NLGen0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JMRUp_branch does not exist!\n");
      exit(1);
    }
    NLGen0JMRUp_isLoaded = true;
  }
  return NLGen0JMRUp_;
}

const int &VVV0Tree::NLGen1JMRUp() {
  if (not NLGen1JMRUp_isLoaded) {
    if (NLGen1JMRUp_branch != 0) {
      NLGen1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JMRUp_branch does not exist!\n");
      exit(1);
    }
    NLGen1JMRUp_isLoaded = true;
  }
  return NLGen1JMRUp_;
}

const int &VVV0Tree::NLGen2JMRUp() {
  if (not NLGen2JMRUp_isLoaded) {
    if (NLGen2JMRUp_branch != 0) {
      NLGen2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JMRUp_branch does not exist!\n");
      exit(1);
    }
    NLGen2JMRUp_isLoaded = true;
  }
  return NLGen2JMRUp_;
}

const int &VVV0Tree::NLGen3JMRUp() {
  if (not NLGen3JMRUp_isLoaded) {
    if (NLGen3JMRUp_branch != 0) {
      NLGen3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JMRUp_branch does not exist!\n");
      exit(1);
    }
    NLGen3JMRUp_isLoaded = true;
  }
  return NLGen3JMRUp_;
}

const int &VVV0Tree::NLGen4JMRUp() {
  if (not NLGen4JMRUp_isLoaded) {
    if (NLGen4JMRUp_branch != 0) {
      NLGen4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JMRUp_branch does not exist!\n");
      exit(1);
    }
    NLGen4JMRUp_isLoaded = true;
  }
  return NLGen4JMRUp_;
}

const int &VVV0Tree::NiFJJMRUp() {
  if (not NiFJJMRUp_isLoaded) {
    if (NiFJJMRUp_branch != 0) {
      NiFJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NiFJJMRUp_branch does not exist!\n");
      exit(1);
    }
    NiFJJMRUp_isLoaded = true;
  }
  return NiFJJMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JMRUp() {
  if (not iFJ0JMRUp_isLoaded) {
    if (iFJ0JMRUp_branch != 0) {
      iFJ0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JMRUp_branch does not exist!\n");
      exit(1);
    }
    iFJ0JMRUp_isLoaded = true;
  }
  return *iFJ0JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JMRUp() {
  if (not iFJ1JMRUp_isLoaded) {
    if (iFJ1JMRUp_branch != 0) {
      iFJ1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JMRUp_branch does not exist!\n");
      exit(1);
    }
    iFJ1JMRUp_isLoaded = true;
  }
  return *iFJ1JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JMRUp() {
  if (not iFJ2JMRUp_isLoaded) {
    if (iFJ2JMRUp_branch != 0) {
      iFJ2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JMRUp_branch does not exist!\n");
      exit(1);
    }
    iFJ2JMRUp_isLoaded = true;
  }
  return *iFJ2JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JMRUp() {
  if (not iFJ3JMRUp_isLoaded) {
    if (iFJ3JMRUp_branch != 0) {
      iFJ3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JMRUp_branch does not exist!\n");
      exit(1);
    }
    iFJ3JMRUp_isLoaded = true;
  }
  return *iFJ3JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JMRUp() {
  if (not iFJ4JMRUp_isLoaded) {
    if (iFJ4JMRUp_branch != 0) {
      iFJ4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JMRUp_branch does not exist!\n");
      exit(1);
    }
    iFJ4JMRUp_isLoaded = true;
  }
  return *iFJ4JMRUp_;
}

const float &VVV0Tree::iVMD0JMRUp() {
  if (not iVMD0JMRUp_isLoaded) {
    if (iVMD0JMRUp_branch != 0) {
      iVMD0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JMRUp_branch does not exist!\n");
      exit(1);
    }
    iVMD0JMRUp_isLoaded = true;
  }
  return iVMD0JMRUp_;
}

const float &VVV0Tree::iVMD1JMRUp() {
  if (not iVMD1JMRUp_isLoaded) {
    if (iVMD1JMRUp_branch != 0) {
      iVMD1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JMRUp_branch does not exist!\n");
      exit(1);
    }
    iVMD1JMRUp_isLoaded = true;
  }
  return iVMD1JMRUp_;
}

const float &VVV0Tree::iVMD2JMRUp() {
  if (not iVMD2JMRUp_isLoaded) {
    if (iVMD2JMRUp_branch != 0) {
      iVMD2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JMRUp_branch does not exist!\n");
      exit(1);
    }
    iVMD2JMRUp_isLoaded = true;
  }
  return iVMD2JMRUp_;
}

const float &VVV0Tree::iVMD3JMRUp() {
  if (not iVMD3JMRUp_isLoaded) {
    if (iVMD3JMRUp_branch != 0) {
      iVMD3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JMRUp_branch does not exist!\n");
      exit(1);
    }
    iVMD3JMRUp_isLoaded = true;
  }
  return iVMD3JMRUp_;
}

const float &VVV0Tree::iVMD4JMRUp() {
  if (not iVMD4JMRUp_isLoaded) {
    if (iVMD4JMRUp_branch != 0) {
      iVMD4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JMRUp_branch does not exist!\n");
      exit(1);
    }
    iVMD4JMRUp_isLoaded = true;
  }
  return iVMD4JMRUp_;
}

const float &VVV0Tree::iWMD0JMRUp() {
  if (not iWMD0JMRUp_isLoaded) {
    if (iWMD0JMRUp_branch != 0) {
      iWMD0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JMRUp_branch does not exist!\n");
      exit(1);
    }
    iWMD0JMRUp_isLoaded = true;
  }
  return iWMD0JMRUp_;
}

const float &VVV0Tree::iWMD1JMRUp() {
  if (not iWMD1JMRUp_isLoaded) {
    if (iWMD1JMRUp_branch != 0) {
      iWMD1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JMRUp_branch does not exist!\n");
      exit(1);
    }
    iWMD1JMRUp_isLoaded = true;
  }
  return iWMD1JMRUp_;
}

const float &VVV0Tree::iWMD2JMRUp() {
  if (not iWMD2JMRUp_isLoaded) {
    if (iWMD2JMRUp_branch != 0) {
      iWMD2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JMRUp_branch does not exist!\n");
      exit(1);
    }
    iWMD2JMRUp_isLoaded = true;
  }
  return iWMD2JMRUp_;
}

const float &VVV0Tree::iWMD3JMRUp() {
  if (not iWMD3JMRUp_isLoaded) {
    if (iWMD3JMRUp_branch != 0) {
      iWMD3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JMRUp_branch does not exist!\n");
      exit(1);
    }
    iWMD3JMRUp_isLoaded = true;
  }
  return iWMD3JMRUp_;
}

const float &VVV0Tree::iWMD4JMRUp() {
  if (not iWMD4JMRUp_isLoaded) {
    if (iWMD4JMRUp_branch != 0) {
      iWMD4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JMRUp_branch does not exist!\n");
      exit(1);
    }
    iWMD4JMRUp_isLoaded = true;
  }
  return iWMD4JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJMRUp() {
  if (not METJMRUp_isLoaded) {
    if (METJMRUp_branch != 0) {
      METJMRUp_branch->GetEntry(index);
    } else {
      printf("branch METJMRUp_branch does not exist!\n");
      exit(1);
    }
    METJMRUp_isLoaded = true;
  }
  return *METJMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJMRUp() {
  if (not NuJMRUp_isLoaded) {
    if (NuJMRUp_branch != 0) {
      NuJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NuJMRUp_branch does not exist!\n");
      exit(1);
    }
    NuJMRUp_isLoaded = true;
  }
  return *NuJMRUp_;
}

const int &VVV0Tree::NJJMRUp() {
  if (not NJJMRUp_isLoaded) {
    if (NJJMRUp_branch != 0) {
      NJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NJJMRUp_branch does not exist!\n");
      exit(1);
    }
    NJJMRUp_isLoaded = true;
  }
  return NJJMRUp_;
}

const int &VVV0Tree::NbLooseJMRUp() {
  if (not NbLooseJMRUp_isLoaded) {
    if (NbLooseJMRUp_branch != 0) {
      NbLooseJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJMRUp_branch does not exist!\n");
      exit(1);
    }
    NbLooseJMRUp_isLoaded = true;
  }
  return NbLooseJMRUp_;
}

const int &VVV0Tree::NbMediumJMRUp() {
  if (not NbMediumJMRUp_isLoaded) {
    if (NbMediumJMRUp_branch != 0) {
      NbMediumJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJMRUp_branch does not exist!\n");
      exit(1);
    }
    NbMediumJMRUp_isLoaded = true;
  }
  return NbMediumJMRUp_;
}

const int &VVV0Tree::NbTightJMRUp() {
  if (not NbTightJMRUp_isLoaded) {
    if (NbTightJMRUp_branch != 0) {
      NbTightJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NbTightJMRUp_branch does not exist!\n");
      exit(1);
    }
    NbTightJMRUp_isLoaded = true;
  }
  return NbTightJMRUp_;
}

const int &VVV0Tree::NoORNbLooseJMRUp() {
  if (not NoORNbLooseJMRUp_isLoaded) {
    if (NoORNbLooseJMRUp_branch != 0) {
      NoORNbLooseJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJMRUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJMRUp_isLoaded = true;
  }
  return NoORNbLooseJMRUp_;
}

const int &VVV0Tree::NoORNbMediumJMRUp() {
  if (not NoORNbMediumJMRUp_isLoaded) {
    if (NoORNbMediumJMRUp_branch != 0) {
      NoORNbMediumJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJMRUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJMRUp_isLoaded = true;
  }
  return NoORNbMediumJMRUp_;
}

const int &VVV0Tree::NoORNbTightJMRUp() {
  if (not NoORNbTightJMRUp_isLoaded) {
    if (NoORNbTightJMRUp_branch != 0) {
      NoORNbTightJMRUp_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJMRUp_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJMRUp_isLoaded = true;
  }
  return NoORNbTightJMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JMRUp() {
  if (not J0JMRUp_isLoaded) {
    if (J0JMRUp_branch != 0) {
      J0JMRUp_branch->GetEntry(index);
    } else {
      printf("branch J0JMRUp_branch does not exist!\n");
      exit(1);
    }
    J0JMRUp_isLoaded = true;
  }
  return *J0JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JMRUp() {
  if (not J1JMRUp_isLoaded) {
    if (J1JMRUp_branch != 0) {
      J1JMRUp_branch->GetEntry(index);
    } else {
      printf("branch J1JMRUp_branch does not exist!\n");
      exit(1);
    }
    J1JMRUp_isLoaded = true;
  }
  return *J1JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JMRUp() {
  if (not J2JMRUp_isLoaded) {
    if (J2JMRUp_branch != 0) {
      J2JMRUp_branch->GetEntry(index);
    } else {
      printf("branch J2JMRUp_branch does not exist!\n");
      exit(1);
    }
    J2JMRUp_isLoaded = true;
  }
  return *J2JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JMRUp() {
  if (not J3JMRUp_isLoaded) {
    if (J3JMRUp_branch != 0) {
      J3JMRUp_branch->GetEntry(index);
    } else {
      printf("branch J3JMRUp_branch does not exist!\n");
      exit(1);
    }
    J3JMRUp_isLoaded = true;
  }
  return *J3JMRUp_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JMRUp() {
  if (not J4JMRUp_isLoaded) {
    if (J4JMRUp_branch != 0) {
      J4JMRUp_branch->GetEntry(index);
    } else {
      printf("branch J4JMRUp_branch does not exist!\n");
      exit(1);
    }
    J4JMRUp_isLoaded = true;
  }
  return *J4JMRUp_;
}

const float &VVV0Tree::MVVXJMRUp() {
  if (not MVVXJMRUp_isLoaded) {
    if (MVVXJMRUp_branch != 0) {
      MVVXJMRUp_branch->GetEntry(index);
    } else {
      printf("branch MVVXJMRUp_branch does not exist!\n");
      exit(1);
    }
    MVVXJMRUp_isLoaded = true;
  }
  return MVVXJMRUp_;
}

const float &VVV0Tree::PtVVXJMRUp() {
  if (not PtVVXJMRUp_isLoaded) {
    if (PtVVXJMRUp_branch != 0) {
      PtVVXJMRUp_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJMRUp_branch does not exist!\n");
      exit(1);
    }
    PtVVXJMRUp_isLoaded = true;
  }
  return PtVVXJMRUp_;
}

const float &VVV0Tree::HTJMRUp() {
  if (not HTJMRUp_isLoaded) {
    if (HTJMRUp_branch != 0) {
      HTJMRUp_branch->GetEntry(index);
    } else {
      printf("branch HTJMRUp_branch does not exist!\n");
      exit(1);
    }
    HTJMRUp_isLoaded = true;
  }
  return HTJMRUp_;
}

const float &VVV0Tree::HTJJMRUp() {
  if (not HTJJMRUp_isLoaded) {
    if (HTJJMRUp_branch != 0) {
      HTJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch HTJJMRUp_branch does not exist!\n");
      exit(1);
    }
    HTJJMRUp_isLoaded = true;
  }
  return HTJJMRUp_;
}

const float &VVV0Tree::HTFJJMRUp() {
  if (not HTFJJMRUp_isLoaded) {
    if (HTFJJMRUp_branch != 0) {
      HTFJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch HTFJJMRUp_branch does not exist!\n");
      exit(1);
    }
    HTFJJMRUp_isLoaded = true;
  }
  return HTFJJMRUp_;
}

const float &VVV0Tree::SumPtFJJMRUp() {
  if (not SumPtFJJMRUp_isLoaded) {
    if (SumPtFJJMRUp_branch != 0) {
      SumPtFJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJMRUp_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJMRUp_isLoaded = true;
  }
  return SumPtFJJMRUp_;
}

const float &VVV0Tree::SumPtJJMRUp() {
  if (not SumPtJJMRUp_isLoaded) {
    if (SumPtJJMRUp_branch != 0) {
      SumPtJJMRUp_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJMRUp_branch does not exist!\n");
      exit(1);
    }
    SumPtJJMRUp_isLoaded = true;
  }
  return SumPtJJMRUp_;
}

const int &VVV0Tree::NFJJMRDn() {
  if (not NFJJMRDn_isLoaded) {
    if (NFJJMRDn_branch != 0) {
      NFJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NFJJMRDn_branch does not exist!\n");
      exit(1);
    }
    NFJJMRDn_isLoaded = true;
  }
  return NFJJMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ0JMRDn() {
  if (not FJ0JMRDn_isLoaded) {
    if (FJ0JMRDn_branch != 0) {
      FJ0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch FJ0JMRDn_branch does not exist!\n");
      exit(1);
    }
    FJ0JMRDn_isLoaded = true;
  }
  return *FJ0JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ1JMRDn() {
  if (not FJ1JMRDn_isLoaded) {
    if (FJ1JMRDn_branch != 0) {
      FJ1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch FJ1JMRDn_branch does not exist!\n");
      exit(1);
    }
    FJ1JMRDn_isLoaded = true;
  }
  return *FJ1JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ2JMRDn() {
  if (not FJ2JMRDn_isLoaded) {
    if (FJ2JMRDn_branch != 0) {
      FJ2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch FJ2JMRDn_branch does not exist!\n");
      exit(1);
    }
    FJ2JMRDn_isLoaded = true;
  }
  return *FJ2JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ3JMRDn() {
  if (not FJ3JMRDn_isLoaded) {
    if (FJ3JMRDn_branch != 0) {
      FJ3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch FJ3JMRDn_branch does not exist!\n");
      exit(1);
    }
    FJ3JMRDn_isLoaded = true;
  }
  return *FJ3JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::FJ4JMRDn() {
  if (not FJ4JMRDn_isLoaded) {
    if (FJ4JMRDn_branch != 0) {
      FJ4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch FJ4JMRDn_branch does not exist!\n");
      exit(1);
    }
    FJ4JMRDn_isLoaded = true;
  }
  return *FJ4JMRDn_;
}

const float &VVV0Tree::VMD0JMRDn() {
  if (not VMD0JMRDn_isLoaded) {
    if (VMD0JMRDn_branch != 0) {
      VMD0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch VMD0JMRDn_branch does not exist!\n");
      exit(1);
    }
    VMD0JMRDn_isLoaded = true;
  }
  return VMD0JMRDn_;
}

const float &VVV0Tree::VMD1JMRDn() {
  if (not VMD1JMRDn_isLoaded) {
    if (VMD1JMRDn_branch != 0) {
      VMD1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch VMD1JMRDn_branch does not exist!\n");
      exit(1);
    }
    VMD1JMRDn_isLoaded = true;
  }
  return VMD1JMRDn_;
}

const float &VVV0Tree::VMD2JMRDn() {
  if (not VMD2JMRDn_isLoaded) {
    if (VMD2JMRDn_branch != 0) {
      VMD2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch VMD2JMRDn_branch does not exist!\n");
      exit(1);
    }
    VMD2JMRDn_isLoaded = true;
  }
  return VMD2JMRDn_;
}

const float &VVV0Tree::VMD3JMRDn() {
  if (not VMD3JMRDn_isLoaded) {
    if (VMD3JMRDn_branch != 0) {
      VMD3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch VMD3JMRDn_branch does not exist!\n");
      exit(1);
    }
    VMD3JMRDn_isLoaded = true;
  }
  return VMD3JMRDn_;
}

const float &VVV0Tree::VMD4JMRDn() {
  if (not VMD4JMRDn_isLoaded) {
    if (VMD4JMRDn_branch != 0) {
      VMD4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch VMD4JMRDn_branch does not exist!\n");
      exit(1);
    }
    VMD4JMRDn_isLoaded = true;
  }
  return VMD4JMRDn_;
}

const float &VVV0Tree::WMD0JMRDn() {
  if (not WMD0JMRDn_isLoaded) {
    if (WMD0JMRDn_branch != 0) {
      WMD0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch WMD0JMRDn_branch does not exist!\n");
      exit(1);
    }
    WMD0JMRDn_isLoaded = true;
  }
  return WMD0JMRDn_;
}

const float &VVV0Tree::WMD1JMRDn() {
  if (not WMD1JMRDn_isLoaded) {
    if (WMD1JMRDn_branch != 0) {
      WMD1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch WMD1JMRDn_branch does not exist!\n");
      exit(1);
    }
    WMD1JMRDn_isLoaded = true;
  }
  return WMD1JMRDn_;
}

const float &VVV0Tree::WMD2JMRDn() {
  if (not WMD2JMRDn_isLoaded) {
    if (WMD2JMRDn_branch != 0) {
      WMD2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch WMD2JMRDn_branch does not exist!\n");
      exit(1);
    }
    WMD2JMRDn_isLoaded = true;
  }
  return WMD2JMRDn_;
}

const float &VVV0Tree::WMD3JMRDn() {
  if (not WMD3JMRDn_isLoaded) {
    if (WMD3JMRDn_branch != 0) {
      WMD3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch WMD3JMRDn_branch does not exist!\n");
      exit(1);
    }
    WMD3JMRDn_isLoaded = true;
  }
  return WMD3JMRDn_;
}

const float &VVV0Tree::WMD4JMRDn() {
  if (not WMD4JMRDn_isLoaded) {
    if (WMD4JMRDn_branch != 0) {
      WMD4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch WMD4JMRDn_branch does not exist!\n");
      exit(1);
    }
    WMD4JMRDn_isLoaded = true;
  }
  return WMD4JMRDn_;
}

const int &VVV0Tree::NQGen0JMRDn() {
  if (not NQGen0JMRDn_isLoaded) {
    if (NQGen0JMRDn_branch != 0) {
      NQGen0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen0JMRDn_branch does not exist!\n");
      exit(1);
    }
    NQGen0JMRDn_isLoaded = true;
  }
  return NQGen0JMRDn_;
}

const int &VVV0Tree::NQGen1JMRDn() {
  if (not NQGen1JMRDn_isLoaded) {
    if (NQGen1JMRDn_branch != 0) {
      NQGen1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen1JMRDn_branch does not exist!\n");
      exit(1);
    }
    NQGen1JMRDn_isLoaded = true;
  }
  return NQGen1JMRDn_;
}

const int &VVV0Tree::NQGen2JMRDn() {
  if (not NQGen2JMRDn_isLoaded) {
    if (NQGen2JMRDn_branch != 0) {
      NQGen2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen2JMRDn_branch does not exist!\n");
      exit(1);
    }
    NQGen2JMRDn_isLoaded = true;
  }
  return NQGen2JMRDn_;
}

const int &VVV0Tree::NQGen3JMRDn() {
  if (not NQGen3JMRDn_isLoaded) {
    if (NQGen3JMRDn_branch != 0) {
      NQGen3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen3JMRDn_branch does not exist!\n");
      exit(1);
    }
    NQGen3JMRDn_isLoaded = true;
  }
  return NQGen3JMRDn_;
}

const int &VVV0Tree::NQGen4JMRDn() {
  if (not NQGen4JMRDn_isLoaded) {
    if (NQGen4JMRDn_branch != 0) {
      NQGen4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NQGen4JMRDn_branch does not exist!\n");
      exit(1);
    }
    NQGen4JMRDn_isLoaded = true;
  }
  return NQGen4JMRDn_;
}

const int &VVV0Tree::NBGen0JMRDn() {
  if (not NBGen0JMRDn_isLoaded) {
    if (NBGen0JMRDn_branch != 0) {
      NBGen0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen0JMRDn_branch does not exist!\n");
      exit(1);
    }
    NBGen0JMRDn_isLoaded = true;
  }
  return NBGen0JMRDn_;
}

const int &VVV0Tree::NBGen1JMRDn() {
  if (not NBGen1JMRDn_isLoaded) {
    if (NBGen1JMRDn_branch != 0) {
      NBGen1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen1JMRDn_branch does not exist!\n");
      exit(1);
    }
    NBGen1JMRDn_isLoaded = true;
  }
  return NBGen1JMRDn_;
}

const int &VVV0Tree::NBGen2JMRDn() {
  if (not NBGen2JMRDn_isLoaded) {
    if (NBGen2JMRDn_branch != 0) {
      NBGen2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen2JMRDn_branch does not exist!\n");
      exit(1);
    }
    NBGen2JMRDn_isLoaded = true;
  }
  return NBGen2JMRDn_;
}

const int &VVV0Tree::NBGen3JMRDn() {
  if (not NBGen3JMRDn_isLoaded) {
    if (NBGen3JMRDn_branch != 0) {
      NBGen3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen3JMRDn_branch does not exist!\n");
      exit(1);
    }
    NBGen3JMRDn_isLoaded = true;
  }
  return NBGen3JMRDn_;
}

const int &VVV0Tree::NBGen4JMRDn() {
  if (not NBGen4JMRDn_isLoaded) {
    if (NBGen4JMRDn_branch != 0) {
      NBGen4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NBGen4JMRDn_branch does not exist!\n");
      exit(1);
    }
    NBGen4JMRDn_isLoaded = true;
  }
  return NBGen4JMRDn_;
}

const int &VVV0Tree::NLGen0JMRDn() {
  if (not NLGen0JMRDn_isLoaded) {
    if (NLGen0JMRDn_branch != 0) {
      NLGen0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen0JMRDn_branch does not exist!\n");
      exit(1);
    }
    NLGen0JMRDn_isLoaded = true;
  }
  return NLGen0JMRDn_;
}

const int &VVV0Tree::NLGen1JMRDn() {
  if (not NLGen1JMRDn_isLoaded) {
    if (NLGen1JMRDn_branch != 0) {
      NLGen1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen1JMRDn_branch does not exist!\n");
      exit(1);
    }
    NLGen1JMRDn_isLoaded = true;
  }
  return NLGen1JMRDn_;
}

const int &VVV0Tree::NLGen2JMRDn() {
  if (not NLGen2JMRDn_isLoaded) {
    if (NLGen2JMRDn_branch != 0) {
      NLGen2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen2JMRDn_branch does not exist!\n");
      exit(1);
    }
    NLGen2JMRDn_isLoaded = true;
  }
  return NLGen2JMRDn_;
}

const int &VVV0Tree::NLGen3JMRDn() {
  if (not NLGen3JMRDn_isLoaded) {
    if (NLGen3JMRDn_branch != 0) {
      NLGen3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen3JMRDn_branch does not exist!\n");
      exit(1);
    }
    NLGen3JMRDn_isLoaded = true;
  }
  return NLGen3JMRDn_;
}

const int &VVV0Tree::NLGen4JMRDn() {
  if (not NLGen4JMRDn_isLoaded) {
    if (NLGen4JMRDn_branch != 0) {
      NLGen4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch NLGen4JMRDn_branch does not exist!\n");
      exit(1);
    }
    NLGen4JMRDn_isLoaded = true;
  }
  return NLGen4JMRDn_;
}

const int &VVV0Tree::NiFJJMRDn() {
  if (not NiFJJMRDn_isLoaded) {
    if (NiFJJMRDn_branch != 0) {
      NiFJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NiFJJMRDn_branch does not exist!\n");
      exit(1);
    }
    NiFJJMRDn_isLoaded = true;
  }
  return NiFJJMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ0JMRDn() {
  if (not iFJ0JMRDn_isLoaded) {
    if (iFJ0JMRDn_branch != 0) {
      iFJ0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ0JMRDn_branch does not exist!\n");
      exit(1);
    }
    iFJ0JMRDn_isLoaded = true;
  }
  return *iFJ0JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ1JMRDn() {
  if (not iFJ1JMRDn_isLoaded) {
    if (iFJ1JMRDn_branch != 0) {
      iFJ1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ1JMRDn_branch does not exist!\n");
      exit(1);
    }
    iFJ1JMRDn_isLoaded = true;
  }
  return *iFJ1JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ2JMRDn() {
  if (not iFJ2JMRDn_isLoaded) {
    if (iFJ2JMRDn_branch != 0) {
      iFJ2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ2JMRDn_branch does not exist!\n");
      exit(1);
    }
    iFJ2JMRDn_isLoaded = true;
  }
  return *iFJ2JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ3JMRDn() {
  if (not iFJ3JMRDn_isLoaded) {
    if (iFJ3JMRDn_branch != 0) {
      iFJ3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ3JMRDn_branch does not exist!\n");
      exit(1);
    }
    iFJ3JMRDn_isLoaded = true;
  }
  return *iFJ3JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::iFJ4JMRDn() {
  if (not iFJ4JMRDn_isLoaded) {
    if (iFJ4JMRDn_branch != 0) {
      iFJ4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iFJ4JMRDn_branch does not exist!\n");
      exit(1);
    }
    iFJ4JMRDn_isLoaded = true;
  }
  return *iFJ4JMRDn_;
}

const float &VVV0Tree::iVMD0JMRDn() {
  if (not iVMD0JMRDn_isLoaded) {
    if (iVMD0JMRDn_branch != 0) {
      iVMD0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD0JMRDn_branch does not exist!\n");
      exit(1);
    }
    iVMD0JMRDn_isLoaded = true;
  }
  return iVMD0JMRDn_;
}

const float &VVV0Tree::iVMD1JMRDn() {
  if (not iVMD1JMRDn_isLoaded) {
    if (iVMD1JMRDn_branch != 0) {
      iVMD1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD1JMRDn_branch does not exist!\n");
      exit(1);
    }
    iVMD1JMRDn_isLoaded = true;
  }
  return iVMD1JMRDn_;
}

const float &VVV0Tree::iVMD2JMRDn() {
  if (not iVMD2JMRDn_isLoaded) {
    if (iVMD2JMRDn_branch != 0) {
      iVMD2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD2JMRDn_branch does not exist!\n");
      exit(1);
    }
    iVMD2JMRDn_isLoaded = true;
  }
  return iVMD2JMRDn_;
}

const float &VVV0Tree::iVMD3JMRDn() {
  if (not iVMD3JMRDn_isLoaded) {
    if (iVMD3JMRDn_branch != 0) {
      iVMD3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD3JMRDn_branch does not exist!\n");
      exit(1);
    }
    iVMD3JMRDn_isLoaded = true;
  }
  return iVMD3JMRDn_;
}

const float &VVV0Tree::iVMD4JMRDn() {
  if (not iVMD4JMRDn_isLoaded) {
    if (iVMD4JMRDn_branch != 0) {
      iVMD4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iVMD4JMRDn_branch does not exist!\n");
      exit(1);
    }
    iVMD4JMRDn_isLoaded = true;
  }
  return iVMD4JMRDn_;
}

const float &VVV0Tree::iWMD0JMRDn() {
  if (not iWMD0JMRDn_isLoaded) {
    if (iWMD0JMRDn_branch != 0) {
      iWMD0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD0JMRDn_branch does not exist!\n");
      exit(1);
    }
    iWMD0JMRDn_isLoaded = true;
  }
  return iWMD0JMRDn_;
}

const float &VVV0Tree::iWMD1JMRDn() {
  if (not iWMD1JMRDn_isLoaded) {
    if (iWMD1JMRDn_branch != 0) {
      iWMD1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD1JMRDn_branch does not exist!\n");
      exit(1);
    }
    iWMD1JMRDn_isLoaded = true;
  }
  return iWMD1JMRDn_;
}

const float &VVV0Tree::iWMD2JMRDn() {
  if (not iWMD2JMRDn_isLoaded) {
    if (iWMD2JMRDn_branch != 0) {
      iWMD2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD2JMRDn_branch does not exist!\n");
      exit(1);
    }
    iWMD2JMRDn_isLoaded = true;
  }
  return iWMD2JMRDn_;
}

const float &VVV0Tree::iWMD3JMRDn() {
  if (not iWMD3JMRDn_isLoaded) {
    if (iWMD3JMRDn_branch != 0) {
      iWMD3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD3JMRDn_branch does not exist!\n");
      exit(1);
    }
    iWMD3JMRDn_isLoaded = true;
  }
  return iWMD3JMRDn_;
}

const float &VVV0Tree::iWMD4JMRDn() {
  if (not iWMD4JMRDn_isLoaded) {
    if (iWMD4JMRDn_branch != 0) {
      iWMD4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch iWMD4JMRDn_branch does not exist!\n");
      exit(1);
    }
    iWMD4JMRDn_isLoaded = true;
  }
  return iWMD4JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::METJMRDn() {
  if (not METJMRDn_isLoaded) {
    if (METJMRDn_branch != 0) {
      METJMRDn_branch->GetEntry(index);
    } else {
      printf("branch METJMRDn_branch does not exist!\n");
      exit(1);
    }
    METJMRDn_isLoaded = true;
  }
  return *METJMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::NuJMRDn() {
  if (not NuJMRDn_isLoaded) {
    if (NuJMRDn_branch != 0) {
      NuJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NuJMRDn_branch does not exist!\n");
      exit(1);
    }
    NuJMRDn_isLoaded = true;
  }
  return *NuJMRDn_;
}

const int &VVV0Tree::NJJMRDn() {
  if (not NJJMRDn_isLoaded) {
    if (NJJMRDn_branch != 0) {
      NJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NJJMRDn_branch does not exist!\n");
      exit(1);
    }
    NJJMRDn_isLoaded = true;
  }
  return NJJMRDn_;
}

const int &VVV0Tree::NbLooseJMRDn() {
  if (not NbLooseJMRDn_isLoaded) {
    if (NbLooseJMRDn_branch != 0) {
      NbLooseJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NbLooseJMRDn_branch does not exist!\n");
      exit(1);
    }
    NbLooseJMRDn_isLoaded = true;
  }
  return NbLooseJMRDn_;
}

const int &VVV0Tree::NbMediumJMRDn() {
  if (not NbMediumJMRDn_isLoaded) {
    if (NbMediumJMRDn_branch != 0) {
      NbMediumJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NbMediumJMRDn_branch does not exist!\n");
      exit(1);
    }
    NbMediumJMRDn_isLoaded = true;
  }
  return NbMediumJMRDn_;
}

const int &VVV0Tree::NbTightJMRDn() {
  if (not NbTightJMRDn_isLoaded) {
    if (NbTightJMRDn_branch != 0) {
      NbTightJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NbTightJMRDn_branch does not exist!\n");
      exit(1);
    }
    NbTightJMRDn_isLoaded = true;
  }
  return NbTightJMRDn_;
}

const int &VVV0Tree::NoORNbLooseJMRDn() {
  if (not NoORNbLooseJMRDn_isLoaded) {
    if (NoORNbLooseJMRDn_branch != 0) {
      NoORNbLooseJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbLooseJMRDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbLooseJMRDn_isLoaded = true;
  }
  return NoORNbLooseJMRDn_;
}

const int &VVV0Tree::NoORNbMediumJMRDn() {
  if (not NoORNbMediumJMRDn_isLoaded) {
    if (NoORNbMediumJMRDn_branch != 0) {
      NoORNbMediumJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbMediumJMRDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbMediumJMRDn_isLoaded = true;
  }
  return NoORNbMediumJMRDn_;
}

const int &VVV0Tree::NoORNbTightJMRDn() {
  if (not NoORNbTightJMRDn_isLoaded) {
    if (NoORNbTightJMRDn_branch != 0) {
      NoORNbTightJMRDn_branch->GetEntry(index);
    } else {
      printf("branch NoORNbTightJMRDn_branch does not exist!\n");
      exit(1);
    }
    NoORNbTightJMRDn_isLoaded = true;
  }
  return NoORNbTightJMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J0JMRDn() {
  if (not J0JMRDn_isLoaded) {
    if (J0JMRDn_branch != 0) {
      J0JMRDn_branch->GetEntry(index);
    } else {
      printf("branch J0JMRDn_branch does not exist!\n");
      exit(1);
    }
    J0JMRDn_isLoaded = true;
  }
  return *J0JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J1JMRDn() {
  if (not J1JMRDn_isLoaded) {
    if (J1JMRDn_branch != 0) {
      J1JMRDn_branch->GetEntry(index);
    } else {
      printf("branch J1JMRDn_branch does not exist!\n");
      exit(1);
    }
    J1JMRDn_isLoaded = true;
  }
  return *J1JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J2JMRDn() {
  if (not J2JMRDn_isLoaded) {
    if (J2JMRDn_branch != 0) {
      J2JMRDn_branch->GetEntry(index);
    } else {
      printf("branch J2JMRDn_branch does not exist!\n");
      exit(1);
    }
    J2JMRDn_isLoaded = true;
  }
  return *J2JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J3JMRDn() {
  if (not J3JMRDn_isLoaded) {
    if (J3JMRDn_branch != 0) {
      J3JMRDn_branch->GetEntry(index);
    } else {
      printf("branch J3JMRDn_branch does not exist!\n");
      exit(1);
    }
    J3JMRDn_isLoaded = true;
  }
  return *J3JMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::J4JMRDn() {
  if (not J4JMRDn_isLoaded) {
    if (J4JMRDn_branch != 0) {
      J4JMRDn_branch->GetEntry(index);
    } else {
      printf("branch J4JMRDn_branch does not exist!\n");
      exit(1);
    }
    J4JMRDn_isLoaded = true;
  }
  return *J4JMRDn_;
}

const float &VVV0Tree::MVVXJMRDn() {
  if (not MVVXJMRDn_isLoaded) {
    if (MVVXJMRDn_branch != 0) {
      MVVXJMRDn_branch->GetEntry(index);
    } else {
      printf("branch MVVXJMRDn_branch does not exist!\n");
      exit(1);
    }
    MVVXJMRDn_isLoaded = true;
  }
  return MVVXJMRDn_;
}

const float &VVV0Tree::PtVVXJMRDn() {
  if (not PtVVXJMRDn_isLoaded) {
    if (PtVVXJMRDn_branch != 0) {
      PtVVXJMRDn_branch->GetEntry(index);
    } else {
      printf("branch PtVVXJMRDn_branch does not exist!\n");
      exit(1);
    }
    PtVVXJMRDn_isLoaded = true;
  }
  return PtVVXJMRDn_;
}

const float &VVV0Tree::HTJMRDn() {
  if (not HTJMRDn_isLoaded) {
    if (HTJMRDn_branch != 0) {
      HTJMRDn_branch->GetEntry(index);
    } else {
      printf("branch HTJMRDn_branch does not exist!\n");
      exit(1);
    }
    HTJMRDn_isLoaded = true;
  }
  return HTJMRDn_;
}

const float &VVV0Tree::HTJJMRDn() {
  if (not HTJJMRDn_isLoaded) {
    if (HTJJMRDn_branch != 0) {
      HTJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch HTJJMRDn_branch does not exist!\n");
      exit(1);
    }
    HTJJMRDn_isLoaded = true;
  }
  return HTJJMRDn_;
}

const float &VVV0Tree::HTFJJMRDn() {
  if (not HTFJJMRDn_isLoaded) {
    if (HTFJJMRDn_branch != 0) {
      HTFJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch HTFJJMRDn_branch does not exist!\n");
      exit(1);
    }
    HTFJJMRDn_isLoaded = true;
  }
  return HTFJJMRDn_;
}

const float &VVV0Tree::SumPtFJJMRDn() {
  if (not SumPtFJJMRDn_isLoaded) {
    if (SumPtFJJMRDn_branch != 0) {
      SumPtFJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtFJJMRDn_branch does not exist!\n");
      exit(1);
    }
    SumPtFJJMRDn_isLoaded = true;
  }
  return SumPtFJJMRDn_;
}

const float &VVV0Tree::SumPtJJMRDn() {
  if (not SumPtJJMRDn_isLoaded) {
    if (SumPtJJMRDn_branch != 0) {
      SumPtJJMRDn_branch->GetEntry(index);
    } else {
      printf("branch SumPtJJMRDn_branch does not exist!\n");
      exit(1);
    }
    SumPtJJMRDn_isLoaded = true;
  }
  return SumPtJJMRDn_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenV0() {
  if (not GenV0_isLoaded) {
    if (GenV0_branch != 0) {
      GenV0_branch->GetEntry(index);
    } else {
      printf("branch GenV0_branch does not exist!\n");
      exit(1);
    }
    GenV0_isLoaded = true;
  }
  return *GenV0_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenV1() {
  if (not GenV1_isLoaded) {
    if (GenV1_branch != 0) {
      GenV1_branch->GetEntry(index);
    } else {
      printf("branch GenV1_branch does not exist!\n");
      exit(1);
    }
    GenV1_isLoaded = true;
  }
  return *GenV1_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenV2() {
  if (not GenV2_isLoaded) {
    if (GenV2_branch != 0) {
      GenV2_branch->GetEntry(index);
    } else {
      printf("branch GenV2_branch does not exist!\n");
      exit(1);
    }
    GenV2_isLoaded = true;
  }
  return *GenV2_;
}

const int &VVV0Tree::isHad0() {
  if (not isHad0_isLoaded) {
    if (isHad0_branch != 0) {
      isHad0_branch->GetEntry(index);
    } else {
      printf("branch isHad0_branch does not exist!\n");
      exit(1);
    }
    isHad0_isLoaded = true;
  }
  return isHad0_;
}

const int &VVV0Tree::isHad1() {
  if (not isHad1_isLoaded) {
    if (isHad1_branch != 0) {
      isHad1_branch->GetEntry(index);
    } else {
      printf("branch isHad1_branch does not exist!\n");
      exit(1);
    }
    isHad1_isLoaded = true;
  }
  return isHad1_;
}

const int &VVV0Tree::isHad2() {
  if (not isHad2_isLoaded) {
    if (isHad2_branch != 0) {
      isHad2_branch->GetEntry(index);
    } else {
      printf("branch isHad2_branch does not exist!\n");
      exit(1);
    }
    isHad2_isLoaded = true;
  }
  return isHad2_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF00() {
  if (not GenF00_isLoaded) {
    if (GenF00_branch != 0) {
      GenF00_branch->GetEntry(index);
    } else {
      printf("branch GenF00_branch does not exist!\n");
      exit(1);
    }
    GenF00_isLoaded = true;
  }
  return *GenF00_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF01() {
  if (not GenF01_isLoaded) {
    if (GenF01_branch != 0) {
      GenF01_branch->GetEntry(index);
    } else {
      printf("branch GenF01_branch does not exist!\n");
      exit(1);
    }
    GenF01_isLoaded = true;
  }
  return *GenF01_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF10() {
  if (not GenF10_isLoaded) {
    if (GenF10_branch != 0) {
      GenF10_branch->GetEntry(index);
    } else {
      printf("branch GenF10_branch does not exist!\n");
      exit(1);
    }
    GenF10_isLoaded = true;
  }
  return *GenF10_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF11() {
  if (not GenF11_isLoaded) {
    if (GenF11_branch != 0) {
      GenF11_branch->GetEntry(index);
    } else {
      printf("branch GenF11_branch does not exist!\n");
      exit(1);
    }
    GenF11_isLoaded = true;
  }
  return *GenF11_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF20() {
  if (not GenF20_isLoaded) {
    if (GenF20_branch != 0) {
      GenF20_branch->GetEntry(index);
    } else {
      printf("branch GenF20_branch does not exist!\n");
      exit(1);
    }
    GenF20_isLoaded = true;
  }
  return *GenF20_;
}

const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &VVV0Tree::GenF21() {
  if (not GenF21_isLoaded) {
    if (GenF21_branch != 0) {
      GenF21_branch->GetEntry(index);
    } else {
      printf("branch GenF21_branch does not exist!\n");
      exit(1);
    }
    GenF21_isLoaded = true;
  }
  return *GenF21_;
}


void VVV0Tree::progress( int nEventsTotal, int nEventsChain ){
  int period = 1000;
  if (nEventsTotal%1000 == 0) {
    // xterm magic from L. Vacavant and A. Cerri
    if (isatty(1)) {
      if ((nEventsChain - nEventsTotal) > period) {
        float frac = (float)nEventsTotal/(nEventsChain*0.01);
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
             "\033[0m\033[32m <---\033[0m\015", frac);
        fflush(stdout);
      }
      else {
        printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", 100.);
        cout << endl;
      }
    }
  }
}

namespace tas {

const int &isData() { return vvv.isData(); }
const int &run() { return vvv.run(); }
const int &lumi() { return vvv.lumi(); }
const unsigned long long &evt() { return vvv.evt(); }
const int &year() { return vvv.year(); }
const float &genWeight() { return vvv.genWeight(); }
const float &wgt() { return vvv.wgt(); }
const vector<float> &LHEReweightingWeight() { return vvv.LHEReweightingWeight(); }
const float &prefireWgt() { return vvv.prefireWgt(); }
const float &prefireWgtUp() { return vvv.prefireWgtUp(); }
const float &prefireWgtDn() { return vvv.prefireWgtDn(); }
const float &puWgt() { return vvv.puWgt(); }
const float &puWgtUp() { return vvv.puWgtUp(); }
const float &puWgtDn() { return vvv.puWgtDn(); }
const float &trigWgt() { return vvv.trigWgt(); }
const float &trigWgtUp() { return vvv.trigWgtUp(); }
const float &trigWgtDn() { return vvv.trigWgtDn(); }
const int &trigger() { return vvv.trigger(); }
const int &is0Lep() { return vvv.is0Lep(); }
const int &is1Lep() { return vvv.is1Lep(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Lep() { return vvv.Lep(); }
const int &LepFlav() { return vvv.LepFlav(); }
const int &NFJ() { return vvv.NFJ(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0() { return vvv.FJ0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1() { return vvv.FJ1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2() { return vvv.FJ2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3() { return vvv.FJ3(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4() { return vvv.FJ4(); }
const float &VMD0() { return vvv.VMD0(); }
const float &VMD1() { return vvv.VMD1(); }
const float &VMD2() { return vvv.VMD2(); }
const float &VMD3() { return vvv.VMD3(); }
const float &VMD4() { return vvv.VMD4(); }
const float &WMD0() { return vvv.WMD0(); }
const float &WMD1() { return vvv.WMD1(); }
const float &WMD2() { return vvv.WMD2(); }
const float &WMD3() { return vvv.WMD3(); }
const float &WMD4() { return vvv.WMD4(); }
const int &NQGen0() { return vvv.NQGen0(); }
const int &NQGen1() { return vvv.NQGen1(); }
const int &NQGen2() { return vvv.NQGen2(); }
const int &NQGen3() { return vvv.NQGen3(); }
const int &NQGen4() { return vvv.NQGen4(); }
const int &NBGen0() { return vvv.NBGen0(); }
const int &NBGen1() { return vvv.NBGen1(); }
const int &NBGen2() { return vvv.NBGen2(); }
const int &NBGen3() { return vvv.NBGen3(); }
const int &NBGen4() { return vvv.NBGen4(); }
const int &NLGen0() { return vvv.NLGen0(); }
const int &NLGen1() { return vvv.NLGen1(); }
const int &NLGen2() { return vvv.NLGen2(); }
const int &NLGen3() { return vvv.NLGen3(); }
const int &NLGen4() { return vvv.NLGen4(); }
const int &NiFJ() { return vvv.NiFJ(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0() { return vvv.iFJ0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1() { return vvv.iFJ1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2() { return vvv.iFJ2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3() { return vvv.iFJ3(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4() { return vvv.iFJ4(); }
const float &iVMD0() { return vvv.iVMD0(); }
const float &iVMD1() { return vvv.iVMD1(); }
const float &iVMD2() { return vvv.iVMD2(); }
const float &iVMD3() { return vvv.iVMD3(); }
const float &iVMD4() { return vvv.iVMD4(); }
const float &iWMD0() { return vvv.iWMD0(); }
const float &iWMD1() { return vvv.iWMD1(); }
const float &iWMD2() { return vvv.iWMD2(); }
const float &iWMD3() { return vvv.iWMD3(); }
const float &iWMD4() { return vvv.iWMD4(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &MET() { return vvv.MET(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &Nu() { return vvv.Nu(); }
const int &NJ() { return vvv.NJ(); }
const int &NbLoose() { return vvv.NbLoose(); }
const int &NbMedium() { return vvv.NbMedium(); }
const int &NbTight() { return vvv.NbTight(); }
const int &NoORNbLoose() { return vvv.NoORNbLoose(); }
const int &NoORNbMedium() { return vvv.NoORNbMedium(); }
const int &NoORNbTight() { return vvv.NoORNbTight(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0() { return vvv.J0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1() { return vvv.J1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2() { return vvv.J2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3() { return vvv.J3(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4() { return vvv.J4(); }
const float &MVVX() { return vvv.MVVX(); }
const float &PtVVX() { return vvv.PtVVX(); }
const float &HT() { return vvv.HT(); }
const float &HTJ() { return vvv.HTJ(); }
const float &HTFJ() { return vvv.HTFJ(); }
const float &SumPtFJ() { return vvv.SumPtFJ(); }
const float &SumPtJ() { return vvv.SumPtJ(); }
const int &NFJJESUp() { return vvv.NFJJESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JESUp() { return vvv.FJ0JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JESUp() { return vvv.FJ1JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JESUp() { return vvv.FJ2JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JESUp() { return vvv.FJ3JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JESUp() { return vvv.FJ4JESUp(); }
const float &VMD0JESUp() { return vvv.VMD0JESUp(); }
const float &VMD1JESUp() { return vvv.VMD1JESUp(); }
const float &VMD2JESUp() { return vvv.VMD2JESUp(); }
const float &VMD3JESUp() { return vvv.VMD3JESUp(); }
const float &VMD4JESUp() { return vvv.VMD4JESUp(); }
const float &WMD0JESUp() { return vvv.WMD0JESUp(); }
const float &WMD1JESUp() { return vvv.WMD1JESUp(); }
const float &WMD2JESUp() { return vvv.WMD2JESUp(); }
const float &WMD3JESUp() { return vvv.WMD3JESUp(); }
const float &WMD4JESUp() { return vvv.WMD4JESUp(); }
const int &NQGen0JESUp() { return vvv.NQGen0JESUp(); }
const int &NQGen1JESUp() { return vvv.NQGen1JESUp(); }
const int &NQGen2JESUp() { return vvv.NQGen2JESUp(); }
const int &NQGen3JESUp() { return vvv.NQGen3JESUp(); }
const int &NQGen4JESUp() { return vvv.NQGen4JESUp(); }
const int &NBGen0JESUp() { return vvv.NBGen0JESUp(); }
const int &NBGen1JESUp() { return vvv.NBGen1JESUp(); }
const int &NBGen2JESUp() { return vvv.NBGen2JESUp(); }
const int &NBGen3JESUp() { return vvv.NBGen3JESUp(); }
const int &NBGen4JESUp() { return vvv.NBGen4JESUp(); }
const int &NLGen0JESUp() { return vvv.NLGen0JESUp(); }
const int &NLGen1JESUp() { return vvv.NLGen1JESUp(); }
const int &NLGen2JESUp() { return vvv.NLGen2JESUp(); }
const int &NLGen3JESUp() { return vvv.NLGen3JESUp(); }
const int &NLGen4JESUp() { return vvv.NLGen4JESUp(); }
const int &NiFJJESUp() { return vvv.NiFJJESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JESUp() { return vvv.iFJ0JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JESUp() { return vvv.iFJ1JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JESUp() { return vvv.iFJ2JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JESUp() { return vvv.iFJ3JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JESUp() { return vvv.iFJ4JESUp(); }
const float &iVMD0JESUp() { return vvv.iVMD0JESUp(); }
const float &iVMD1JESUp() { return vvv.iVMD1JESUp(); }
const float &iVMD2JESUp() { return vvv.iVMD2JESUp(); }
const float &iVMD3JESUp() { return vvv.iVMD3JESUp(); }
const float &iVMD4JESUp() { return vvv.iVMD4JESUp(); }
const float &iWMD0JESUp() { return vvv.iWMD0JESUp(); }
const float &iWMD1JESUp() { return vvv.iWMD1JESUp(); }
const float &iWMD2JESUp() { return vvv.iWMD2JESUp(); }
const float &iWMD3JESUp() { return vvv.iWMD3JESUp(); }
const float &iWMD4JESUp() { return vvv.iWMD4JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJESUp() { return vvv.METJESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJESUp() { return vvv.NuJESUp(); }
const int &NJJESUp() { return vvv.NJJESUp(); }
const int &NbLooseJESUp() { return vvv.NbLooseJESUp(); }
const int &NbMediumJESUp() { return vvv.NbMediumJESUp(); }
const int &NbTightJESUp() { return vvv.NbTightJESUp(); }
const int &NoORNbLooseJESUp() { return vvv.NoORNbLooseJESUp(); }
const int &NoORNbMediumJESUp() { return vvv.NoORNbMediumJESUp(); }
const int &NoORNbTightJESUp() { return vvv.NoORNbTightJESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JESUp() { return vvv.J0JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JESUp() { return vvv.J1JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JESUp() { return vvv.J2JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JESUp() { return vvv.J3JESUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JESUp() { return vvv.J4JESUp(); }
const float &MVVXJESUp() { return vvv.MVVXJESUp(); }
const float &PtVVXJESUp() { return vvv.PtVVXJESUp(); }
const float &HTJESUp() { return vvv.HTJESUp(); }
const float &HTJJESUp() { return vvv.HTJJESUp(); }
const float &HTFJJESUp() { return vvv.HTFJJESUp(); }
const float &SumPtFJJESUp() { return vvv.SumPtFJJESUp(); }
const float &SumPtJJESUp() { return vvv.SumPtJJESUp(); }
const int &NFJJESDn() { return vvv.NFJJESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JESDn() { return vvv.FJ0JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JESDn() { return vvv.FJ1JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JESDn() { return vvv.FJ2JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JESDn() { return vvv.FJ3JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JESDn() { return vvv.FJ4JESDn(); }
const float &VMD0JESDn() { return vvv.VMD0JESDn(); }
const float &VMD1JESDn() { return vvv.VMD1JESDn(); }
const float &VMD2JESDn() { return vvv.VMD2JESDn(); }
const float &VMD3JESDn() { return vvv.VMD3JESDn(); }
const float &VMD4JESDn() { return vvv.VMD4JESDn(); }
const float &WMD0JESDn() { return vvv.WMD0JESDn(); }
const float &WMD1JESDn() { return vvv.WMD1JESDn(); }
const float &WMD2JESDn() { return vvv.WMD2JESDn(); }
const float &WMD3JESDn() { return vvv.WMD3JESDn(); }
const float &WMD4JESDn() { return vvv.WMD4JESDn(); }
const int &NQGen0JESDn() { return vvv.NQGen0JESDn(); }
const int &NQGen1JESDn() { return vvv.NQGen1JESDn(); }
const int &NQGen2JESDn() { return vvv.NQGen2JESDn(); }
const int &NQGen3JESDn() { return vvv.NQGen3JESDn(); }
const int &NQGen4JESDn() { return vvv.NQGen4JESDn(); }
const int &NBGen0JESDn() { return vvv.NBGen0JESDn(); }
const int &NBGen1JESDn() { return vvv.NBGen1JESDn(); }
const int &NBGen2JESDn() { return vvv.NBGen2JESDn(); }
const int &NBGen3JESDn() { return vvv.NBGen3JESDn(); }
const int &NBGen4JESDn() { return vvv.NBGen4JESDn(); }
const int &NLGen0JESDn() { return vvv.NLGen0JESDn(); }
const int &NLGen1JESDn() { return vvv.NLGen1JESDn(); }
const int &NLGen2JESDn() { return vvv.NLGen2JESDn(); }
const int &NLGen3JESDn() { return vvv.NLGen3JESDn(); }
const int &NLGen4JESDn() { return vvv.NLGen4JESDn(); }
const int &NiFJJESDn() { return vvv.NiFJJESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JESDn() { return vvv.iFJ0JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JESDn() { return vvv.iFJ1JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JESDn() { return vvv.iFJ2JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JESDn() { return vvv.iFJ3JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JESDn() { return vvv.iFJ4JESDn(); }
const float &iVMD0JESDn() { return vvv.iVMD0JESDn(); }
const float &iVMD1JESDn() { return vvv.iVMD1JESDn(); }
const float &iVMD2JESDn() { return vvv.iVMD2JESDn(); }
const float &iVMD3JESDn() { return vvv.iVMD3JESDn(); }
const float &iVMD4JESDn() { return vvv.iVMD4JESDn(); }
const float &iWMD0JESDn() { return vvv.iWMD0JESDn(); }
const float &iWMD1JESDn() { return vvv.iWMD1JESDn(); }
const float &iWMD2JESDn() { return vvv.iWMD2JESDn(); }
const float &iWMD3JESDn() { return vvv.iWMD3JESDn(); }
const float &iWMD4JESDn() { return vvv.iWMD4JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJESDn() { return vvv.METJESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJESDn() { return vvv.NuJESDn(); }
const int &NJJESDn() { return vvv.NJJESDn(); }
const int &NbLooseJESDn() { return vvv.NbLooseJESDn(); }
const int &NbMediumJESDn() { return vvv.NbMediumJESDn(); }
const int &NbTightJESDn() { return vvv.NbTightJESDn(); }
const int &NoORNbLooseJESDn() { return vvv.NoORNbLooseJESDn(); }
const int &NoORNbMediumJESDn() { return vvv.NoORNbMediumJESDn(); }
const int &NoORNbTightJESDn() { return vvv.NoORNbTightJESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JESDn() { return vvv.J0JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JESDn() { return vvv.J1JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JESDn() { return vvv.J2JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JESDn() { return vvv.J3JESDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JESDn() { return vvv.J4JESDn(); }
const float &MVVXJESDn() { return vvv.MVVXJESDn(); }
const float &PtVVXJESDn() { return vvv.PtVVXJESDn(); }
const float &HTJESDn() { return vvv.HTJESDn(); }
const float &HTJJESDn() { return vvv.HTJJESDn(); }
const float &HTFJJESDn() { return vvv.HTFJJESDn(); }
const float &SumPtFJJESDn() { return vvv.SumPtFJJESDn(); }
const float &SumPtJJESDn() { return vvv.SumPtJJESDn(); }
const int &NFJJERUp() { return vvv.NFJJERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JERUp() { return vvv.FJ0JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JERUp() { return vvv.FJ1JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JERUp() { return vvv.FJ2JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JERUp() { return vvv.FJ3JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JERUp() { return vvv.FJ4JERUp(); }
const float &VMD0JERUp() { return vvv.VMD0JERUp(); }
const float &VMD1JERUp() { return vvv.VMD1JERUp(); }
const float &VMD2JERUp() { return vvv.VMD2JERUp(); }
const float &VMD3JERUp() { return vvv.VMD3JERUp(); }
const float &VMD4JERUp() { return vvv.VMD4JERUp(); }
const float &WMD0JERUp() { return vvv.WMD0JERUp(); }
const float &WMD1JERUp() { return vvv.WMD1JERUp(); }
const float &WMD2JERUp() { return vvv.WMD2JERUp(); }
const float &WMD3JERUp() { return vvv.WMD3JERUp(); }
const float &WMD4JERUp() { return vvv.WMD4JERUp(); }
const int &NQGen0JERUp() { return vvv.NQGen0JERUp(); }
const int &NQGen1JERUp() { return vvv.NQGen1JERUp(); }
const int &NQGen2JERUp() { return vvv.NQGen2JERUp(); }
const int &NQGen3JERUp() { return vvv.NQGen3JERUp(); }
const int &NQGen4JERUp() { return vvv.NQGen4JERUp(); }
const int &NBGen0JERUp() { return vvv.NBGen0JERUp(); }
const int &NBGen1JERUp() { return vvv.NBGen1JERUp(); }
const int &NBGen2JERUp() { return vvv.NBGen2JERUp(); }
const int &NBGen3JERUp() { return vvv.NBGen3JERUp(); }
const int &NBGen4JERUp() { return vvv.NBGen4JERUp(); }
const int &NLGen0JERUp() { return vvv.NLGen0JERUp(); }
const int &NLGen1JERUp() { return vvv.NLGen1JERUp(); }
const int &NLGen2JERUp() { return vvv.NLGen2JERUp(); }
const int &NLGen3JERUp() { return vvv.NLGen3JERUp(); }
const int &NLGen4JERUp() { return vvv.NLGen4JERUp(); }
const int &NiFJJERUp() { return vvv.NiFJJERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JERUp() { return vvv.iFJ0JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JERUp() { return vvv.iFJ1JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JERUp() { return vvv.iFJ2JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JERUp() { return vvv.iFJ3JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JERUp() { return vvv.iFJ4JERUp(); }
const float &iVMD0JERUp() { return vvv.iVMD0JERUp(); }
const float &iVMD1JERUp() { return vvv.iVMD1JERUp(); }
const float &iVMD2JERUp() { return vvv.iVMD2JERUp(); }
const float &iVMD3JERUp() { return vvv.iVMD3JERUp(); }
const float &iVMD4JERUp() { return vvv.iVMD4JERUp(); }
const float &iWMD0JERUp() { return vvv.iWMD0JERUp(); }
const float &iWMD1JERUp() { return vvv.iWMD1JERUp(); }
const float &iWMD2JERUp() { return vvv.iWMD2JERUp(); }
const float &iWMD3JERUp() { return vvv.iWMD3JERUp(); }
const float &iWMD4JERUp() { return vvv.iWMD4JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJERUp() { return vvv.METJERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJERUp() { return vvv.NuJERUp(); }
const int &NJJERUp() { return vvv.NJJERUp(); }
const int &NbLooseJERUp() { return vvv.NbLooseJERUp(); }
const int &NbMediumJERUp() { return vvv.NbMediumJERUp(); }
const int &NbTightJERUp() { return vvv.NbTightJERUp(); }
const int &NoORNbLooseJERUp() { return vvv.NoORNbLooseJERUp(); }
const int &NoORNbMediumJERUp() { return vvv.NoORNbMediumJERUp(); }
const int &NoORNbTightJERUp() { return vvv.NoORNbTightJERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JERUp() { return vvv.J0JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JERUp() { return vvv.J1JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JERUp() { return vvv.J2JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JERUp() { return vvv.J3JERUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JERUp() { return vvv.J4JERUp(); }
const float &MVVXJERUp() { return vvv.MVVXJERUp(); }
const float &PtVVXJERUp() { return vvv.PtVVXJERUp(); }
const float &HTJERUp() { return vvv.HTJERUp(); }
const float &HTJJERUp() { return vvv.HTJJERUp(); }
const float &HTFJJERUp() { return vvv.HTFJJERUp(); }
const float &SumPtFJJERUp() { return vvv.SumPtFJJERUp(); }
const float &SumPtJJERUp() { return vvv.SumPtJJERUp(); }
const int &NFJJERDn() { return vvv.NFJJERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JERDn() { return vvv.FJ0JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JERDn() { return vvv.FJ1JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JERDn() { return vvv.FJ2JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JERDn() { return vvv.FJ3JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JERDn() { return vvv.FJ4JERDn(); }
const float &VMD0JERDn() { return vvv.VMD0JERDn(); }
const float &VMD1JERDn() { return vvv.VMD1JERDn(); }
const float &VMD2JERDn() { return vvv.VMD2JERDn(); }
const float &VMD3JERDn() { return vvv.VMD3JERDn(); }
const float &VMD4JERDn() { return vvv.VMD4JERDn(); }
const float &WMD0JERDn() { return vvv.WMD0JERDn(); }
const float &WMD1JERDn() { return vvv.WMD1JERDn(); }
const float &WMD2JERDn() { return vvv.WMD2JERDn(); }
const float &WMD3JERDn() { return vvv.WMD3JERDn(); }
const float &WMD4JERDn() { return vvv.WMD4JERDn(); }
const int &NQGen0JERDn() { return vvv.NQGen0JERDn(); }
const int &NQGen1JERDn() { return vvv.NQGen1JERDn(); }
const int &NQGen2JERDn() { return vvv.NQGen2JERDn(); }
const int &NQGen3JERDn() { return vvv.NQGen3JERDn(); }
const int &NQGen4JERDn() { return vvv.NQGen4JERDn(); }
const int &NBGen0JERDn() { return vvv.NBGen0JERDn(); }
const int &NBGen1JERDn() { return vvv.NBGen1JERDn(); }
const int &NBGen2JERDn() { return vvv.NBGen2JERDn(); }
const int &NBGen3JERDn() { return vvv.NBGen3JERDn(); }
const int &NBGen4JERDn() { return vvv.NBGen4JERDn(); }
const int &NLGen0JERDn() { return vvv.NLGen0JERDn(); }
const int &NLGen1JERDn() { return vvv.NLGen1JERDn(); }
const int &NLGen2JERDn() { return vvv.NLGen2JERDn(); }
const int &NLGen3JERDn() { return vvv.NLGen3JERDn(); }
const int &NLGen4JERDn() { return vvv.NLGen4JERDn(); }
const int &NiFJJERDn() { return vvv.NiFJJERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JERDn() { return vvv.iFJ0JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JERDn() { return vvv.iFJ1JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JERDn() { return vvv.iFJ2JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JERDn() { return vvv.iFJ3JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JERDn() { return vvv.iFJ4JERDn(); }
const float &iVMD0JERDn() { return vvv.iVMD0JERDn(); }
const float &iVMD1JERDn() { return vvv.iVMD1JERDn(); }
const float &iVMD2JERDn() { return vvv.iVMD2JERDn(); }
const float &iVMD3JERDn() { return vvv.iVMD3JERDn(); }
const float &iVMD4JERDn() { return vvv.iVMD4JERDn(); }
const float &iWMD0JERDn() { return vvv.iWMD0JERDn(); }
const float &iWMD1JERDn() { return vvv.iWMD1JERDn(); }
const float &iWMD2JERDn() { return vvv.iWMD2JERDn(); }
const float &iWMD3JERDn() { return vvv.iWMD3JERDn(); }
const float &iWMD4JERDn() { return vvv.iWMD4JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJERDn() { return vvv.METJERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJERDn() { return vvv.NuJERDn(); }
const int &NJJERDn() { return vvv.NJJERDn(); }
const int &NbLooseJERDn() { return vvv.NbLooseJERDn(); }
const int &NbMediumJERDn() { return vvv.NbMediumJERDn(); }
const int &NbTightJERDn() { return vvv.NbTightJERDn(); }
const int &NoORNbLooseJERDn() { return vvv.NoORNbLooseJERDn(); }
const int &NoORNbMediumJERDn() { return vvv.NoORNbMediumJERDn(); }
const int &NoORNbTightJERDn() { return vvv.NoORNbTightJERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JERDn() { return vvv.J0JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JERDn() { return vvv.J1JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JERDn() { return vvv.J2JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JERDn() { return vvv.J3JERDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JERDn() { return vvv.J4JERDn(); }
const float &MVVXJERDn() { return vvv.MVVXJERDn(); }
const float &PtVVXJERDn() { return vvv.PtVVXJERDn(); }
const float &HTJERDn() { return vvv.HTJERDn(); }
const float &HTJJERDn() { return vvv.HTJJERDn(); }
const float &HTFJJERDn() { return vvv.HTFJJERDn(); }
const float &SumPtFJJERDn() { return vvv.SumPtFJJERDn(); }
const float &SumPtJJERDn() { return vvv.SumPtJJERDn(); }
const int &NFJJMSUp() { return vvv.NFJJMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JMSUp() { return vvv.FJ0JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JMSUp() { return vvv.FJ1JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JMSUp() { return vvv.FJ2JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JMSUp() { return vvv.FJ3JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JMSUp() { return vvv.FJ4JMSUp(); }
const float &VMD0JMSUp() { return vvv.VMD0JMSUp(); }
const float &VMD1JMSUp() { return vvv.VMD1JMSUp(); }
const float &VMD2JMSUp() { return vvv.VMD2JMSUp(); }
const float &VMD3JMSUp() { return vvv.VMD3JMSUp(); }
const float &VMD4JMSUp() { return vvv.VMD4JMSUp(); }
const float &WMD0JMSUp() { return vvv.WMD0JMSUp(); }
const float &WMD1JMSUp() { return vvv.WMD1JMSUp(); }
const float &WMD2JMSUp() { return vvv.WMD2JMSUp(); }
const float &WMD3JMSUp() { return vvv.WMD3JMSUp(); }
const float &WMD4JMSUp() { return vvv.WMD4JMSUp(); }
const int &NQGen0JMSUp() { return vvv.NQGen0JMSUp(); }
const int &NQGen1JMSUp() { return vvv.NQGen1JMSUp(); }
const int &NQGen2JMSUp() { return vvv.NQGen2JMSUp(); }
const int &NQGen3JMSUp() { return vvv.NQGen3JMSUp(); }
const int &NQGen4JMSUp() { return vvv.NQGen4JMSUp(); }
const int &NBGen0JMSUp() { return vvv.NBGen0JMSUp(); }
const int &NBGen1JMSUp() { return vvv.NBGen1JMSUp(); }
const int &NBGen2JMSUp() { return vvv.NBGen2JMSUp(); }
const int &NBGen3JMSUp() { return vvv.NBGen3JMSUp(); }
const int &NBGen4JMSUp() { return vvv.NBGen4JMSUp(); }
const int &NLGen0JMSUp() { return vvv.NLGen0JMSUp(); }
const int &NLGen1JMSUp() { return vvv.NLGen1JMSUp(); }
const int &NLGen2JMSUp() { return vvv.NLGen2JMSUp(); }
const int &NLGen3JMSUp() { return vvv.NLGen3JMSUp(); }
const int &NLGen4JMSUp() { return vvv.NLGen4JMSUp(); }
const int &NiFJJMSUp() { return vvv.NiFJJMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JMSUp() { return vvv.iFJ0JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JMSUp() { return vvv.iFJ1JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JMSUp() { return vvv.iFJ2JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JMSUp() { return vvv.iFJ3JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JMSUp() { return vvv.iFJ4JMSUp(); }
const float &iVMD0JMSUp() { return vvv.iVMD0JMSUp(); }
const float &iVMD1JMSUp() { return vvv.iVMD1JMSUp(); }
const float &iVMD2JMSUp() { return vvv.iVMD2JMSUp(); }
const float &iVMD3JMSUp() { return vvv.iVMD3JMSUp(); }
const float &iVMD4JMSUp() { return vvv.iVMD4JMSUp(); }
const float &iWMD0JMSUp() { return vvv.iWMD0JMSUp(); }
const float &iWMD1JMSUp() { return vvv.iWMD1JMSUp(); }
const float &iWMD2JMSUp() { return vvv.iWMD2JMSUp(); }
const float &iWMD3JMSUp() { return vvv.iWMD3JMSUp(); }
const float &iWMD4JMSUp() { return vvv.iWMD4JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJMSUp() { return vvv.METJMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJMSUp() { return vvv.NuJMSUp(); }
const int &NJJMSUp() { return vvv.NJJMSUp(); }
const int &NbLooseJMSUp() { return vvv.NbLooseJMSUp(); }
const int &NbMediumJMSUp() { return vvv.NbMediumJMSUp(); }
const int &NbTightJMSUp() { return vvv.NbTightJMSUp(); }
const int &NoORNbLooseJMSUp() { return vvv.NoORNbLooseJMSUp(); }
const int &NoORNbMediumJMSUp() { return vvv.NoORNbMediumJMSUp(); }
const int &NoORNbTightJMSUp() { return vvv.NoORNbTightJMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JMSUp() { return vvv.J0JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JMSUp() { return vvv.J1JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JMSUp() { return vvv.J2JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JMSUp() { return vvv.J3JMSUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JMSUp() { return vvv.J4JMSUp(); }
const float &MVVXJMSUp() { return vvv.MVVXJMSUp(); }
const float &PtVVXJMSUp() { return vvv.PtVVXJMSUp(); }
const float &HTJMSUp() { return vvv.HTJMSUp(); }
const float &HTJJMSUp() { return vvv.HTJJMSUp(); }
const float &HTFJJMSUp() { return vvv.HTFJJMSUp(); }
const float &SumPtFJJMSUp() { return vvv.SumPtFJJMSUp(); }
const float &SumPtJJMSUp() { return vvv.SumPtJJMSUp(); }
const int &NFJJMSDn() { return vvv.NFJJMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JMSDn() { return vvv.FJ0JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JMSDn() { return vvv.FJ1JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JMSDn() { return vvv.FJ2JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JMSDn() { return vvv.FJ3JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JMSDn() { return vvv.FJ4JMSDn(); }
const float &VMD0JMSDn() { return vvv.VMD0JMSDn(); }
const float &VMD1JMSDn() { return vvv.VMD1JMSDn(); }
const float &VMD2JMSDn() { return vvv.VMD2JMSDn(); }
const float &VMD3JMSDn() { return vvv.VMD3JMSDn(); }
const float &VMD4JMSDn() { return vvv.VMD4JMSDn(); }
const float &WMD0JMSDn() { return vvv.WMD0JMSDn(); }
const float &WMD1JMSDn() { return vvv.WMD1JMSDn(); }
const float &WMD2JMSDn() { return vvv.WMD2JMSDn(); }
const float &WMD3JMSDn() { return vvv.WMD3JMSDn(); }
const float &WMD4JMSDn() { return vvv.WMD4JMSDn(); }
const int &NQGen0JMSDn() { return vvv.NQGen0JMSDn(); }
const int &NQGen1JMSDn() { return vvv.NQGen1JMSDn(); }
const int &NQGen2JMSDn() { return vvv.NQGen2JMSDn(); }
const int &NQGen3JMSDn() { return vvv.NQGen3JMSDn(); }
const int &NQGen4JMSDn() { return vvv.NQGen4JMSDn(); }
const int &NBGen0JMSDn() { return vvv.NBGen0JMSDn(); }
const int &NBGen1JMSDn() { return vvv.NBGen1JMSDn(); }
const int &NBGen2JMSDn() { return vvv.NBGen2JMSDn(); }
const int &NBGen3JMSDn() { return vvv.NBGen3JMSDn(); }
const int &NBGen4JMSDn() { return vvv.NBGen4JMSDn(); }
const int &NLGen0JMSDn() { return vvv.NLGen0JMSDn(); }
const int &NLGen1JMSDn() { return vvv.NLGen1JMSDn(); }
const int &NLGen2JMSDn() { return vvv.NLGen2JMSDn(); }
const int &NLGen3JMSDn() { return vvv.NLGen3JMSDn(); }
const int &NLGen4JMSDn() { return vvv.NLGen4JMSDn(); }
const int &NiFJJMSDn() { return vvv.NiFJJMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JMSDn() { return vvv.iFJ0JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JMSDn() { return vvv.iFJ1JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JMSDn() { return vvv.iFJ2JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JMSDn() { return vvv.iFJ3JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JMSDn() { return vvv.iFJ4JMSDn(); }
const float &iVMD0JMSDn() { return vvv.iVMD0JMSDn(); }
const float &iVMD1JMSDn() { return vvv.iVMD1JMSDn(); }
const float &iVMD2JMSDn() { return vvv.iVMD2JMSDn(); }
const float &iVMD3JMSDn() { return vvv.iVMD3JMSDn(); }
const float &iVMD4JMSDn() { return vvv.iVMD4JMSDn(); }
const float &iWMD0JMSDn() { return vvv.iWMD0JMSDn(); }
const float &iWMD1JMSDn() { return vvv.iWMD1JMSDn(); }
const float &iWMD2JMSDn() { return vvv.iWMD2JMSDn(); }
const float &iWMD3JMSDn() { return vvv.iWMD3JMSDn(); }
const float &iWMD4JMSDn() { return vvv.iWMD4JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJMSDn() { return vvv.METJMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJMSDn() { return vvv.NuJMSDn(); }
const int &NJJMSDn() { return vvv.NJJMSDn(); }
const int &NbLooseJMSDn() { return vvv.NbLooseJMSDn(); }
const int &NbMediumJMSDn() { return vvv.NbMediumJMSDn(); }
const int &NbTightJMSDn() { return vvv.NbTightJMSDn(); }
const int &NoORNbLooseJMSDn() { return vvv.NoORNbLooseJMSDn(); }
const int &NoORNbMediumJMSDn() { return vvv.NoORNbMediumJMSDn(); }
const int &NoORNbTightJMSDn() { return vvv.NoORNbTightJMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JMSDn() { return vvv.J0JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JMSDn() { return vvv.J1JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JMSDn() { return vvv.J2JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JMSDn() { return vvv.J3JMSDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JMSDn() { return vvv.J4JMSDn(); }
const float &MVVXJMSDn() { return vvv.MVVXJMSDn(); }
const float &PtVVXJMSDn() { return vvv.PtVVXJMSDn(); }
const float &HTJMSDn() { return vvv.HTJMSDn(); }
const float &HTJJMSDn() { return vvv.HTJJMSDn(); }
const float &HTFJJMSDn() { return vvv.HTFJJMSDn(); }
const float &SumPtFJJMSDn() { return vvv.SumPtFJJMSDn(); }
const float &SumPtJJMSDn() { return vvv.SumPtJJMSDn(); }
const int &NFJJMRUp() { return vvv.NFJJMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JMRUp() { return vvv.FJ0JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JMRUp() { return vvv.FJ1JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JMRUp() { return vvv.FJ2JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JMRUp() { return vvv.FJ3JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JMRUp() { return vvv.FJ4JMRUp(); }
const float &VMD0JMRUp() { return vvv.VMD0JMRUp(); }
const float &VMD1JMRUp() { return vvv.VMD1JMRUp(); }
const float &VMD2JMRUp() { return vvv.VMD2JMRUp(); }
const float &VMD3JMRUp() { return vvv.VMD3JMRUp(); }
const float &VMD4JMRUp() { return vvv.VMD4JMRUp(); }
const float &WMD0JMRUp() { return vvv.WMD0JMRUp(); }
const float &WMD1JMRUp() { return vvv.WMD1JMRUp(); }
const float &WMD2JMRUp() { return vvv.WMD2JMRUp(); }
const float &WMD3JMRUp() { return vvv.WMD3JMRUp(); }
const float &WMD4JMRUp() { return vvv.WMD4JMRUp(); }
const int &NQGen0JMRUp() { return vvv.NQGen0JMRUp(); }
const int &NQGen1JMRUp() { return vvv.NQGen1JMRUp(); }
const int &NQGen2JMRUp() { return vvv.NQGen2JMRUp(); }
const int &NQGen3JMRUp() { return vvv.NQGen3JMRUp(); }
const int &NQGen4JMRUp() { return vvv.NQGen4JMRUp(); }
const int &NBGen0JMRUp() { return vvv.NBGen0JMRUp(); }
const int &NBGen1JMRUp() { return vvv.NBGen1JMRUp(); }
const int &NBGen2JMRUp() { return vvv.NBGen2JMRUp(); }
const int &NBGen3JMRUp() { return vvv.NBGen3JMRUp(); }
const int &NBGen4JMRUp() { return vvv.NBGen4JMRUp(); }
const int &NLGen0JMRUp() { return vvv.NLGen0JMRUp(); }
const int &NLGen1JMRUp() { return vvv.NLGen1JMRUp(); }
const int &NLGen2JMRUp() { return vvv.NLGen2JMRUp(); }
const int &NLGen3JMRUp() { return vvv.NLGen3JMRUp(); }
const int &NLGen4JMRUp() { return vvv.NLGen4JMRUp(); }
const int &NiFJJMRUp() { return vvv.NiFJJMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JMRUp() { return vvv.iFJ0JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JMRUp() { return vvv.iFJ1JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JMRUp() { return vvv.iFJ2JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JMRUp() { return vvv.iFJ3JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JMRUp() { return vvv.iFJ4JMRUp(); }
const float &iVMD0JMRUp() { return vvv.iVMD0JMRUp(); }
const float &iVMD1JMRUp() { return vvv.iVMD1JMRUp(); }
const float &iVMD2JMRUp() { return vvv.iVMD2JMRUp(); }
const float &iVMD3JMRUp() { return vvv.iVMD3JMRUp(); }
const float &iVMD4JMRUp() { return vvv.iVMD4JMRUp(); }
const float &iWMD0JMRUp() { return vvv.iWMD0JMRUp(); }
const float &iWMD1JMRUp() { return vvv.iWMD1JMRUp(); }
const float &iWMD2JMRUp() { return vvv.iWMD2JMRUp(); }
const float &iWMD3JMRUp() { return vvv.iWMD3JMRUp(); }
const float &iWMD4JMRUp() { return vvv.iWMD4JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJMRUp() { return vvv.METJMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJMRUp() { return vvv.NuJMRUp(); }
const int &NJJMRUp() { return vvv.NJJMRUp(); }
const int &NbLooseJMRUp() { return vvv.NbLooseJMRUp(); }
const int &NbMediumJMRUp() { return vvv.NbMediumJMRUp(); }
const int &NbTightJMRUp() { return vvv.NbTightJMRUp(); }
const int &NoORNbLooseJMRUp() { return vvv.NoORNbLooseJMRUp(); }
const int &NoORNbMediumJMRUp() { return vvv.NoORNbMediumJMRUp(); }
const int &NoORNbTightJMRUp() { return vvv.NoORNbTightJMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JMRUp() { return vvv.J0JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JMRUp() { return vvv.J1JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JMRUp() { return vvv.J2JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JMRUp() { return vvv.J3JMRUp(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JMRUp() { return vvv.J4JMRUp(); }
const float &MVVXJMRUp() { return vvv.MVVXJMRUp(); }
const float &PtVVXJMRUp() { return vvv.PtVVXJMRUp(); }
const float &HTJMRUp() { return vvv.HTJMRUp(); }
const float &HTJJMRUp() { return vvv.HTJJMRUp(); }
const float &HTFJJMRUp() { return vvv.HTFJJMRUp(); }
const float &SumPtFJJMRUp() { return vvv.SumPtFJJMRUp(); }
const float &SumPtJJMRUp() { return vvv.SumPtJJMRUp(); }
const int &NFJJMRDn() { return vvv.NFJJMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ0JMRDn() { return vvv.FJ0JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ1JMRDn() { return vvv.FJ1JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ2JMRDn() { return vvv.FJ2JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ3JMRDn() { return vvv.FJ3JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &FJ4JMRDn() { return vvv.FJ4JMRDn(); }
const float &VMD0JMRDn() { return vvv.VMD0JMRDn(); }
const float &VMD1JMRDn() { return vvv.VMD1JMRDn(); }
const float &VMD2JMRDn() { return vvv.VMD2JMRDn(); }
const float &VMD3JMRDn() { return vvv.VMD3JMRDn(); }
const float &VMD4JMRDn() { return vvv.VMD4JMRDn(); }
const float &WMD0JMRDn() { return vvv.WMD0JMRDn(); }
const float &WMD1JMRDn() { return vvv.WMD1JMRDn(); }
const float &WMD2JMRDn() { return vvv.WMD2JMRDn(); }
const float &WMD3JMRDn() { return vvv.WMD3JMRDn(); }
const float &WMD4JMRDn() { return vvv.WMD4JMRDn(); }
const int &NQGen0JMRDn() { return vvv.NQGen0JMRDn(); }
const int &NQGen1JMRDn() { return vvv.NQGen1JMRDn(); }
const int &NQGen2JMRDn() { return vvv.NQGen2JMRDn(); }
const int &NQGen3JMRDn() { return vvv.NQGen3JMRDn(); }
const int &NQGen4JMRDn() { return vvv.NQGen4JMRDn(); }
const int &NBGen0JMRDn() { return vvv.NBGen0JMRDn(); }
const int &NBGen1JMRDn() { return vvv.NBGen1JMRDn(); }
const int &NBGen2JMRDn() { return vvv.NBGen2JMRDn(); }
const int &NBGen3JMRDn() { return vvv.NBGen3JMRDn(); }
const int &NBGen4JMRDn() { return vvv.NBGen4JMRDn(); }
const int &NLGen0JMRDn() { return vvv.NLGen0JMRDn(); }
const int &NLGen1JMRDn() { return vvv.NLGen1JMRDn(); }
const int &NLGen2JMRDn() { return vvv.NLGen2JMRDn(); }
const int &NLGen3JMRDn() { return vvv.NLGen3JMRDn(); }
const int &NLGen4JMRDn() { return vvv.NLGen4JMRDn(); }
const int &NiFJJMRDn() { return vvv.NiFJJMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ0JMRDn() { return vvv.iFJ0JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ1JMRDn() { return vvv.iFJ1JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ2JMRDn() { return vvv.iFJ2JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ3JMRDn() { return vvv.iFJ3JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &iFJ4JMRDn() { return vvv.iFJ4JMRDn(); }
const float &iVMD0JMRDn() { return vvv.iVMD0JMRDn(); }
const float &iVMD1JMRDn() { return vvv.iVMD1JMRDn(); }
const float &iVMD2JMRDn() { return vvv.iVMD2JMRDn(); }
const float &iVMD3JMRDn() { return vvv.iVMD3JMRDn(); }
const float &iVMD4JMRDn() { return vvv.iVMD4JMRDn(); }
const float &iWMD0JMRDn() { return vvv.iWMD0JMRDn(); }
const float &iWMD1JMRDn() { return vvv.iWMD1JMRDn(); }
const float &iWMD2JMRDn() { return vvv.iWMD2JMRDn(); }
const float &iWMD3JMRDn() { return vvv.iWMD3JMRDn(); }
const float &iWMD4JMRDn() { return vvv.iWMD4JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &METJMRDn() { return vvv.METJMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &NuJMRDn() { return vvv.NuJMRDn(); }
const int &NJJMRDn() { return vvv.NJJMRDn(); }
const int &NbLooseJMRDn() { return vvv.NbLooseJMRDn(); }
const int &NbMediumJMRDn() { return vvv.NbMediumJMRDn(); }
const int &NbTightJMRDn() { return vvv.NbTightJMRDn(); }
const int &NoORNbLooseJMRDn() { return vvv.NoORNbLooseJMRDn(); }
const int &NoORNbMediumJMRDn() { return vvv.NoORNbMediumJMRDn(); }
const int &NoORNbTightJMRDn() { return vvv.NoORNbTightJMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J0JMRDn() { return vvv.J0JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J1JMRDn() { return vvv.J1JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J2JMRDn() { return vvv.J2JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J3JMRDn() { return vvv.J3JMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &J4JMRDn() { return vvv.J4JMRDn(); }
const float &MVVXJMRDn() { return vvv.MVVXJMRDn(); }
const float &PtVVXJMRDn() { return vvv.PtVVXJMRDn(); }
const float &HTJMRDn() { return vvv.HTJMRDn(); }
const float &HTJJMRDn() { return vvv.HTJJMRDn(); }
const float &HTFJJMRDn() { return vvv.HTFJJMRDn(); }
const float &SumPtFJJMRDn() { return vvv.SumPtFJJMRDn(); }
const float &SumPtJJMRDn() { return vvv.SumPtJJMRDn(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenV0() { return vvv.GenV0(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenV1() { return vvv.GenV1(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenV2() { return vvv.GenV2(); }
const int &isHad0() { return vvv.isHad0(); }
const int &isHad1() { return vvv.isHad1(); }
const int &isHad2() { return vvv.isHad2(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF00() { return vvv.GenF00(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF01() { return vvv.GenF01(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF10() { return vvv.GenF10(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF11() { return vvv.GenF11(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF20() { return vvv.GenF20(); }
const ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > &GenF21() { return vvv.GenF21(); }

}
