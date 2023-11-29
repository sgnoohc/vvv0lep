#include "variable.h"
#include "histvariable.h"

//***************************************************************************************************************************************************************
//
// One lepton SF derivation region
//
//***************************************************************************************************************************************************************

//===============================================================================================================================================================
// Variable to categorize the fat-jet truth matching top v. w v. qb v. q v. b v. other
// This is for one lepton region for scale factor computation
auto fjcateg = [&]()
{
    if (NLGen0() == 2 and NBGen0() == 1)// qqb (top)
    {
        return 0;
    }
    else if (NLGen0() == 2 and NBGen0() == 0)// qq (W)
    {
        return 1;
    }
    else if (NLGen0() == 1 and NBGen0() == 1)// qb
    {
        return 2;
    }
    else if (NLGen0() == 1 and NBGen0() == 0)// q
    {
        return 3;
    }
    else if (NLGen0() == 0 and NBGen0() == 1)// b
    {
        return 4;
    }
    else
    {
        return 5;
    }
};




// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================






//***************************************************************************************************************************************************************
//
// Common functions
//
//***************************************************************************************************************************************************************

auto VWP = [&, year]()
{
    if (year == 2006) return 0.85f;
    else if (year == 2016) return 0.85f;
    else if (year == 2017) return 0.85f;
    else if (year == 2018) return 0.85f;
    else return 999.f;
};

auto VWP3FJ = [&, year]()
{
    if (year == 2006) return 0.65f;
    else if (year == 2016) return 0.65f;
    else if (year == 2017) return 0.65f;
    else if (year == 2018) return 0.65f;
    else return 999.f;
};

auto WWP = [&, year](std::string WP)
{
    if( WP == "loose"){
        if (year == 2006 or year == 2016) return 0.506f;
        else if (year == 2017) return 0.506f;
        else if (year == 2018) return 0.479f;
        else return 999.f;
    }
    if( WP == "tight"){
        if (year == 2006 or year == 2016) return 0.828f;
        else if (year == 2017) return 0.838f;
        else if (year == 2018) return 0.806f;
        else return 999.f;
    }
};

auto BLIND = [&, is_data]()
{
    if (is_data)
        return 0.f;
    else
        return 1.f;
};

auto signalMSD = [&](LorentzVector fj)
{
    return (fj.mass() > 65 && fj.mass() < 105);
};

auto lowMSD = [&](LorentzVector fj)
{
    return (fj.mass() > 20 && fj.mass() < 65);
};

auto highMSD = [&](LorentzVector fj)
{
    return (fj.mass() > 105 && fj.mass() < 150);
};

auto WMD_TIGHT = [&](float wmd)
{
    return (wmd > WWP("tight"));
};


auto WMD_LOOSE = [&](float wmd)
{
    return (wmd > WWP("loose"));
};


// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================






//***************************************************************************************************************************************************************
//
// 2 FJ analysis variables
//
//***************************************************************************************************************************************************************

//===============================================================================================================================================================
// Distance in 2d space of FJi.mass from a provided center (x, x) where x is all same e.g. (85 GeV, 85 GeV)
auto dist_2d = [&] (float center, TString syst_name="Nominal")
{
    if (NFJ(syst_name) < 2)
        return -999.f;
    else
        return float(sqrt(pow(FJ0(syst_name).mass() - center, 2) + pow(FJ1(syst_name).mass() - center, 2)));
};

//===============================================================================================================================================================
// Distance in 2d space of FJi.mass from a provided center (x, x) where x is all same e.g. (85 GeV, 85 GeV)
auto scaled_dist_2d = [&] (float center)
{
    if (NFJ() < 2)
        return -999.f;
    else
        return float(sqrt(pow((FJ0().mass() - center - 2)/(0.08 * FJ0().mass()), 2) + pow((FJ1().mass() - center)/(0.10 * FJ1().mass()), 2)));
};

//===============================================================================================================================================================
// In, out, shell of the sphere
auto is_inside_2d = [&] (TString syst_name="Nominal") { return dist_2d(85, syst_name) < 17.5; };
auto is_outside_2d = [&] (TString syst_name="Nominal") { return dist_2d(85, syst_name) > 50; };
auto is_shell_2d = [&] (TString syst_name="Nominal") { return dist_2d(85, syst_name) >= 17.5 and dist_2d(85, syst_name) <= 50; };

//===============================================================================================================================================================
// In, out, shell of the sphere
auto is_inside_scaled_2d = [&] () { return scaled_dist_2d(82.5) < 2.5; };
auto is_outside_scaled_2d = [&] () { return scaled_dist_2d(82.5) > 4.0; };
auto is_shell_scaled_2d = [&] () { return scaled_dist_2d(82.5) >= 2.5 and scaled_dist_2d(82.5) < 4; };

//===============================================================================================================================================================
// Based on the score cut define 8 regions region 8 == all pass region 1 == all fail and 5 - 7 is when two passes 2 - 4 is when only one pass
// This is to define side-bands
auto vmd_reg_2d = [&](TString syst_name="Nominal")
{
    if (NFJ(syst_name) != 2)
    {
        return 0;
    }
    else
    {
        bool pass0 = VMD0(syst_name) > VWP();
        bool pass1 = VMD1(syst_name) > VWP();
        if (pass0 and pass1)
        {
            return 4;
        }
        else if (pass0 and not pass1)
        {
            return 3;
        }
        else if (not pass0 and pass1)
        {
            return 2;
        }
        else if (not pass0 and not pass1)
        {
            return 1;
        }
        else
        {
            return 0; // technically should never be here
        }
    }
};





// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================
// -------------------====================-------------------====================-------------------====================-------------------====================






//***************************************************************************************************************************************************************
//
// 3 FJ analysis variables
//
//***************************************************************************************************************************************************************

//===============================================================================================================================================================
// Distance in 3d space of FJi.mass from a provided center (x, x, x) where x is all same e.g. (85 GeV, 85 GeV, 85 GeV)
auto dist_3d = [&] (float center, TString syst_name="Nominal")
{
    if (NFJ(syst_name) < 3)
        return -999.f;
    else
        return float(sqrt(pow(FJ0(syst_name).mass() - center, 2) + pow(FJ1(syst_name).mass() - center, 2) + pow(FJ2(syst_name).mass() - center, 2)));
};

//===============================================================================================================================================================
// Distance in 3d space of FJi.mass from a provided center (x, x, x) where x is all same e.g. (85 GeV, 85 GeV, 85 GeV)
auto scaled_dist_3d = [&] (float center, TString syst_name="Nominal")
{
    if (NFJ(syst_name) < 3)
        return -999.f;
    else
    {
        const float smudge0 = 0.1;
        const float hi_smudge1 = 0.1;
        const float hi_smudge2 = 0.1;
        const float lo_smudge1 = 0.11;
        const float lo_smudge2 = 0.13;
        return float(
            sqrt(
                pow((FJ0(syst_name).mass() - center) / (smudge0 * FJ0(syst_name).mass()), 2)
              + pow((FJ1(syst_name).mass() - center) / ( (FJ1(syst_name).mass() - center) < 0 ? ((150 * lo_smudge1) - lo_smudge1 * FJ1(syst_name).mass()) : (hi_smudge1 * FJ1(syst_name).mass())  ), 2)
              + pow((FJ2(syst_name).mass() - center) / ( (FJ2(syst_name).mass() - center) < 0 ? ((150 * lo_smudge2) - lo_smudge2 * FJ2(syst_name).mass()) : (hi_smudge2 * FJ2(syst_name).mass())  ), 2)
              )
            );
    }
};

//===============================================================================================================================================================
// Minimum distance to the center for any of the FJ
auto min_dist_3d = [&] (float center, TString syst_name="Nominal")
{
    if (NFJ(syst_name) < 3)
    {
        return -999.f;
    }
    else
    {
        float dtop0 = FJ0(syst_name).mass() - center;
        float dtop1 = FJ1(syst_name).mass() - center;
        float dtop2 = 10000;
        return min(min(abs(dtop0), abs(dtop1)), abs(dtop2));
    }
};

//===============================================================================================================================================================
// In, out, shell of the sphere
auto is_inside_3d  = [&](TString syst_name="Nominal") { return dist_3d(85, syst_name) < 35; };
auto is_outside_3d = [&](TString syst_name="Nominal") { return dist_3d(85, syst_name) > 50; };
auto is_shell_3d   = [&](TString syst_name="Nominal") { return dist_3d(85, syst_name) >= 35 and dist_3d(85, syst_name) <= 50; };
auto is_atleast_onetop_3d  = [&](TString syst_name="Nominal") { return min_dist_3d(175, syst_name) < 35; };

auto is_inside_scaled_3d  = [&](TString syst_name="Nominal") { return scaled_dist_3d(85, syst_name) < 2.5; };
auto is_outside_scaled_3d = [&](TString syst_name="Nominal") { return scaled_dist_3d(85, syst_name) > 4.0; };
auto is_shell_scaled_3d   = [&](TString syst_name="Nominal") { return scaled_dist_3d(85, syst_name) >= 2.5 and scaled_dist_3d(85, syst_name) <= 4.0; };

//============================================================================================================================85===============================
// Based on the score cut define 8 regions region 8 == all pass region 1 == all fail and 5 - 7 is when two passes 2 - 4 is when only one pass
// This is to define side-bands
auto vmd_reg_3d = [&](TString syst_name="Nominal")
{
    if (NFJ(syst_name) < 3)
    {
        return 0;
    }
    else
    {
        bool pass0 = VMD0(syst_name) > VWP3FJ();
        bool pass1 = VMD1(syst_name) > VWP3FJ();
        bool pass2 = VMD2(syst_name) > VWP3FJ();
        if (pass0 and pass1 and pass2)
        {
            return 8;
        }
        else if (pass0 and pass1 and not pass2)
        {
            return 7;
        }
        else if (pass0 and not pass1 and pass2)
        {
            return 6;
        }
        else if (not pass0 and pass1 and pass2)
        {
            return 5;
        }
        else if (pass0 and not pass1 and not pass2)
        {
            return 4;
        }
        else if (not pass0 and pass1 and not pass2)
        {
            return 3;
        }
        else if (not pass0 and not pass1 and pass2)
        {
            return 2;
        }
        else if (not pass0 and not pass1 and not pass2)
        {
            return 1;
        }
        else
        {
            return 0; // technically should never be here
        }
    }
};
