#include "\userconfig\arc_ai\macros.hpp"
#include "macros.hpp"

class CfgPatches {
    class arc_ai_firemodes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.54;
        author[] = {"Ed", "Kingsley"};
        authorUrl = "https://github.com/ARCOMM/ARC_AI";
        requiredAddons[] = {"arc_ai_main"};
        ammo[] = {
            "Default",
            "GrenadeHand",
            "GrenadeCore",
            "Grenade",
            "rhs_ammo_rgd5",
            "rhs_ammo_rgn_base",
            "rhs_ammo_rgn",
            "rhs_ammo_rgn_sub",
            "rhs_ammo_rgn_exp",
            "rhs_ammo_rgo_base",
            "rhs_ammo_rgo",
            "rhs_ammo_rgo_sub",
            "rhs_ammo_rgo_exp"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgAmmo {
    PROTO(Default)
    PROTO(GrenadeHand)
    
    GRENADE(GrenadeCore, Default)
    GRENADE(Grenade, Default)
    GRENADE(rhs_ammo_rgd5, GrenadeHand)
    GRENADE(rhs_ammo_rgn_base, rhs_ammo_rgd5)
    GRENADE(rhs_ammo_rgn, rhs_ammo_rgn_base)
    GRENADE(rhs_ammo_rgn_sub, rhs_ammo_rgn_base)
    GRENADE(rhs_ammo_rgn_exp, rhs_ammo_rgn_base)
    GRENADE(rhs_ammo_rgo_base, rhs_ammo_rgd5)
    GRENADE(rhs_ammo_rgo, rhs_ammo_rgo_base)
    GRENADE(rhs_ammo_rgo_sub, rhs_ammo_rgo_base)
    GRENADE(rhs_ammo_rgo_exp, rhs_ammo_rgo_base)
};

class CfgWeapons {
    #include "rifles.hpp"
    #include "smg.hpp"
    #include "dmr.hpp"
    #include "mg.hpp"
    
    PROTO(Default)
    
    GL(GrenadeLauncher, Default)
    GL(UGL_F, GrenadeLauncher)
    GL(GP25_Base, UGL_F)
};