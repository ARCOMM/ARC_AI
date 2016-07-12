#include "macros.hpp"

class CfgPatches {
    class arc_ai_client_launchers {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.54;
        author[] = {"Ed", "Kingsley"};
        authorUrl = "https://github.com/ARCOMM/ARC_AI";
        requiredAddons[] = {
            "CAweapons3_aks74pso",
            "CAWeapons3_ammocrates",
            "CAweapons3_ksvk",
            "CAweapons3_m107",
            "CAweapons3_m16a4_acg_gl",
            "CAweapons3_m16a4_acg",
            "CAweapons3_m16a4_gl",
            "CAweapons3_m16a4",
            "CAWeapons3",
            "DSHkM_Mini",
            "M2HD_Mini",
            "MK19_Tripod",
            "A3Data",
            "A3_Data_F_Exp_B",
            "rhsusf_marks_fix",
            "A3_Dubbing_Radio_F",
            "rhs_c_radio",
            "rhs_mtlb",
            "rhs_s_radio",
            "rhsusf_c_identity",
            "rhsusf_c_radio",
            "rhsusf_hemtt_a2",
            "rhsusf_hemtt_a4",
            "rhsusf_s_radio",
            "CAWeapons",
            "CAWeapons_Warfare_weapons",
            "CAWeapons_2b14_82mm_Mortar",
            "CAWeapons_AK",
            "CAWeapons_AmmoBoxes",
            "CAWeapons_BAF",
            "CAWeapons_bizon",
            "CAWeapons_Colt1911",
            "CAWeapons_DMR",
            "CAWeapons_E",
            "CAWeapons_E_AGS",
            "CAWeapons_E_AK",
            "CAWeapons_E_AmmoBoxes",
            "CAWeapons_E_Colt1911",
            "CAWeapons_E_D30",
            "CAWeapons_E_DSHKM",
            "CAWeapons_E_FIM92_static",
            "CAWeapons_E_fnfal",
            "CAWeapons_E_G36",
            "CAWeapons_E_GrenadeLauncher",
            "CAWeapons_E_Igla",
            "CAWeapons_E_Javelin",
            "CAWeapons_E_KORD",
            "CAWeapons_E_ksvk",
            "CAWeapons_E_LeeEnfield",
            "CAweapons_E_m107",
            "CAWeapons_E_M110",
            "CAWeapons_E_M119_Howitzer",
            "CAWeapons_E_M136",
            "CAWeapons_E_M14",
            "CAWeapons_E_M16",
            "CAWeapons_E_M240",
            "CAWeapons_E_M252_81mm_Mortar",
            "CAWeapons_E_M2StaticMG",
            "CAWeapons_E_M47",
            "CAWeapons_E_M9",
            "CAWeapons_E_MAAWS",
            "CAWeapons_E_Makarov",
            "CAWeapons_E_Metis",
            "CAWeapons_E_Mk19_MiniTriPod",
            "CAWeapons_E_PK",
            "CAWeapons_E_Podnos_2b14_82mm",
            "CAWeapons_E_RPG18",
            "CAWeapons_E_RPG7",
            "CAWeapons_E_scar",
            "CAWeapons_E_Searchlight",
            "CAWeapons_E_SPG9",
            "CAWeapons_E_STATIC",
            "CAWeapons_E_Stinger",
            "CAWeapons_E_Strela",
            "CAWeapons_E_TOW",
            "CAWeapons_E_ZU23",
            "CAWeapons_Kord",
            "CAweapons_ksvk",
            "CAWeapons_M1014",
            "CAweapons_m107",
            "CAWeapons_M252_81mm_Mortar",
            "CAWeapons_Metis_AT_13",
            "CAWeapons_PMC",
            "CAWeapons_PMC_AA_12",
            "CAWeapons_PMC_AS50",
            "CAWeapons_PMC_XM8",
            "CAWeapons_Saiga12K",
            "CAWeapons_SPG9",
            "CAWeapons_VSS_vintorez",
            "CAWeapons_ZU23",
            "CAWeapons2",
            "CAWeapons2_HuntingRifle",
            "CAWeapons2_RPG18",
            "CAWeapons2_SMAW",
            "A3_Data_F",
            "cba_ai",
            "A3_Weapons_F",
            "A3_Weapons_F_NATO",
            "A3_Weapons_F_CSAT",
            "A3_Weapons_F_AAF",
            "A3_weapons_F_FIA",
            "A3_Weapons_F_ItemHolders",
            "A3_Weapons_F_Headgear",
            "A3_Weapons_F_Uniforms",
            "A3_Weapons_F_Vests",
            "A3_Weapons_F_Ammoboxes",
            "A3_Weapons_F_DummyWeapons",
            "A3_Weapons_F_Explosives",
            "A3_Weapons_F_Items",
            "A3_Weapons_F_Launchers_NLAW",
            "A3_Weapons_F_Launchers_LAW",
            "A3_Weapons_F_Launchers_Titan",
            "A3_Weapons_F_EPA_LongRangeRifles_DMR_01",
            "A3_Weapons_F_EBR",
            "A3_Weapons_F_LongRangeRifles_GM6",
            "A3_Weapons_F_LongRangeRifles_M320",
            "A3_Weapons_F_Machineguns_M200",
            "A3_Weapons_F_Machineguns_Zafir",
            "A3_Weapons_F_Pistols_ACPC2",
            "A3_Weapons_F_Pistols_P07",
            "A3_Weapons_F_Pistols_Pistol_heavy_01",
            "A3_Weapons_F_Pistols_Pistol_heavy_02",
            "A3_Weapons_F_Pistols_Rook40",
            "A3_Weapons_F_Rifles_Khaybar",
            "A3_Weapons_F_Rifles_Mk20",
            "A3_Weapons_F_Rifles_MX",
            "A3_Weapons_F_EPB_Rifles_MX_Black",
            "A3_Weapons_F_Rifles_SDAR",
            "A3_Weapons_F_Rifles_TRG20",
            "A3_Weapons_F_Pistols_PDW2000",
            "A3_Weapons_F_Rifles_Vector",
            "a3_weapons_f_rifles_SMG_02",
            "A3_Weapons_F_beta",
            "A3_Weapons_F_Beta_Ammoboxes",
            "A3_Weapons_F_beta_EBR",
            "A3_Weapons_F_EPA_LongRangeRifles_GM6",
            "A3_Weapons_F_EPB_LongRangeRifles_M320",
            "A3_Weapons_F_beta_Rifles_Khaybar",
            "A3_Weapons_F_beta_Rifles_MX",
            "A3_Weapons_F_beta_Rifles_TRG20",
            "A3_Weapons_F_Bootcamp_LongRangeRifles_GM6",
            "A3_Weapons_F_Bootcamp_LongRangeRifles_M320",
            "A3_Weapons_F_EPB_LongRangeRifles_GM3",
            "A3_Weapons_F_gamma",
            "A3_Weapons_F_Gamma_Ammoboxes",
            "A3_Weapons_F_EPA_EBR",
            "A3_Weapons_F_EPA_Rifles_MX",
            "A3_Weapons_F_Kart_Pistols_Pistol_Signal_F",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_01",
            "A3_Weapons_F_Mark_EBR",
            "A3_Weapons_F_Mark_LongRangeRifles_GM6",
            "A3_Weapons_F_Mark_LongRangeRifles_GM6_camo",
            "A3_Weapons_F_Mark_LongRangeRifles_M320",
            "A3_Weapons_F_Mark_LongRangeRifles_M320_camo",
            "A3_Weapons_F_Mark_Machineguns_M200",
            "A3_Weapons_F_Mark_Machineguns_Zafir",
            "A3_Weapons_F_Mark_Rifles_Khaybar",
            "A3_Weapons_F_Mark_Rifles_Mk20",
            "A3_Weapons_F_Mark_Rifles_MX",
            "A3_Weapons_F_Mark_Rifles_SDAR",
            "A3_Weapons_F_Mark_Rifles_TRG20",
            "rhs_main",
            "rhs_optics",
            "rhsusf_c_uav",
            "rhsusf_main",
            "rhsusf_optics",
            "rhsusf_radio",
            "rhsusf_uav",
            "A3_Weapons_F_gamma_Items",
            "A3_Weapons_F_Acc",
            "A3_Weapons_F_Beta_Acc",
            "A3_Weapons_F_Bootcamp_Ammoboxes",
            "A3_Weapons_F_EPA",
            "A3_Weapons_F_EPA_Acc",
            "A3_Weapons_F_EPA_Ammoboxes",
            "A3_Weapons_F_EPB",
            "A3_Weapons_F_EPB_Acc",
            "A3_Weapons_F_EPB_Ammoboxes",
            "A3_Weapons_F_EPC",
            "A3_Weapons_F_gamma_Acc",
            "A3_Weapons_F_Kart",
            "A3_Weapons_F_Mark_Acc",
            "rhs_air",
            "rhs_airweapons",
            "rhs_aps",
            "rhs_c_airweapons",
            "rhs_c_heavyweapons",
            "rhs_c_identity",
            "rhs_c_radars",
            "rhs_c_weapons",
            "rhs_decals",
            "rhs_heavyweapons",
            "rhs_identity",
            "rhs_radars",
            "rhs_sounds",
            "rhs_weapons2",
            "rhs_weapons",
            "rhsusf_a2port_car",
            "rhsusf_airweapons",
            "rhsusf_c_a2port_car",
            "rhsusf_decals",
            "A3_Weapons_F_Bootcamp",
            "A3_Weapons_F_Mark",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_02",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_03",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_04",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_05",
            "A3_Weapons_F_Mark_LongRangeRifles_DMR_06",
            "A3_Weapons_F_Mark_Machineguns_MMG_01",
            "A3_Weapons_F_Mark_Machineguns_MMG_02",
            "rhs_c_cars",
            "rhs_c_troops",
            "rhs_infantry",
            "rhs_tigr",
            "rhsusf_c_hemtt_a2",
            "rhsusf_c_hemtt_a4",
            "rhs_c_2s3",
            "rhs_c_a2port_air",
            "RHS_A2_AirImport",
            "rhs_c_a2port_car",
            "RHS_A2_CarsImport",
            "rhs_c_a3retex",
            "rhs_c_air",
            "rhs_c_bmd",
            "rhs_c_bmp3",
            "rhs_c_bmp",
            "rhs_c_btr",
            "rhs_c_pts",
            "rhs_c_rva",
            "rhs_c_sprut",
            "rhs_c_t72",
            "rhs_c_tanks",
            "rhs_c_trucks",
            "rhs_gaz66",
            "rhs_infantry2",
            "rhs_pts",
            "rhs_sprut",
            "rhs_ss21",
            "rhs_t72",
            "rhs_t80",
            "rhs_t80u",
            "rhs_vehiclesounds",
            "rhsusf_c_heavyweapons",
            "rhsusf_c_weapons",
            "rhsusf_heavyweapons",
            "rhsusf_sounds",
            "rhsusf_weapons",
            "ace_main",
            "hlcweapons_core",
            "hlcweapons_aks",
            "hlcweapons_AUG",
            "hlcweapons_falpocalypse",
            "hlcweapons_G36",
            "hlcweapons_g3",
            "hlcweapons_m14",
            "hlcweapons_m60e4",
            "hlcweapons_mp5",
            "RH_acc",
            "RH_m4_cfg",
            "rhs_2s3",
            "rhs_a2port_air",
            "rhs_a2port_car",
            "rhs_a3retex",
            "rhs_bmd",
            "rhs_bmd_34",
            "rhs_bmp3",
            "rhs_bmp",
            "rhs_btr70",
            "rhs_btr80",
            "rhs_c_a2port_armor",
            "rhs_cti_insurgents",
            "rhs_servicemenu",
            "rhsusf_c_airweapons",
            "rhsusf_c_f22",
            "rhsusf_c_troops",
            "rhsusf_infantry2",
            "rhsusf_infantry",
            "rhsusf_weapons2",
            "ace_common",
            "rhs_a2port_armor",
            "RHS_US_A2_AirImport",
            "RHS_US_A2Port_Armor",
            "rhsusf_c_ch53",
            "rhsusf_c_fmtv",
            "rhsusf_vehicles",
            "rhsusf_c_hmmwv",
            "rhsusf_c_m109",
            "rhsusf_c_m113",
            "rhsusf_c_m1a1",
            "rhsusf_c_m1a2",
            "rhsusf_c_rg33",
            "rhsusf_c_statics",
            "rhsusf_cars",
            "rhsusf_ch53",
            "rhsusf_f22",
            "rhsusf_fmtv",
            "rhsusf_hmmwv",
            "rhsusf_m109",
            "rhsusf_m113",
            "rhsusf_m1a1",
            "rhsusf_m1a2",
            "rhsusf_rg33",
            "rhsusf_a2port_air2",
            "rhsusf_a2port_air",
            "rhsusf_a2port_armor"
        };
        ammo[] = {};
    };
};

class CfgAmmo {
    PROTO(RocketCore)
    PROTO(RocketBase)
    PROTO(MissileCore)
    PROTO(MissileBase)

    LAUNCHER(M_PG_AT, MissileBase)
    LAUNCHER(M_AT, MissileBase)
    LAUNCHER(Rocket_04_HE_F, MissileBase)
    LAUNCHER(M_Scalpel_AT, MissileBase)
    LAUNCHER(R_80mm_HE, RocketBase)
    LAUNCHER(M_NLAW_AT_F, MissileBase)
    LAUNCHER(R_PG32V_F, RocketBase)
    LAUNCHER(M_Titan_AA, MissileBase)
    LAUNCHER(M_Titan_AT, MissileBase)
    LAUNCHER(M_Air_AA, MissileBase)
    LAUNCHER(Missile_AA_04_F, MissileBase)
    LAUNCHER(Missile_AGM_02_F, MissileBase)
    LAUNCHER(M_Scalpel_AT_hidden, MissileBase)
    LAUNCHER(Bo_Air_LGB, MissileBase)
    LAUNCHER(Bo_Air_LGB_hidden, MissileBase)
    LAUNCHER(R_TBG32V_F, RocketBase)
    LAUNCHER(R_60mm_HE, RocketBase)
    LAUNCHER(M_Zephyr, MissileBase)
    LAUNCHER(M_Zephyr_Mi06, MissileBase)
    LAUNCHER(M_Titan_AA_long, MissileBase)
    LAUNCHER(M_Air_AA_MI02, MissileBase)
    LAUNCHER(M_Titan_AP, MissileBase)
    LAUNCHER(M_Air_AT, MissileBase)
    LAUNCHER(M_Zephyr_air, MissileBase)
    LAUNCHER(M_Titan_AA_static, MissileBase)
    LAUNCHER(M_Titan_AT_static, MissileBase)
    LAUNCHER(M_Mo_82mm_AT, MissileBase)
    LAUNCHER(M_Mo_82mm_AT_LG, MissileBase)
    LAUNCHER(M_Mo_120mm_AT, MissileBase)
    LAUNCHER(M_Mo_155mm_AT, MissileBase)
    LAUNCHER(M_Mo_120mm_AT_LG, MissileBase)
    LAUNCHER(M_Mo_155mm_AT_LG, MissileBase)
    LAUNCHER(Rocket_04_AP_F, MissileBase)
    LAUNCHER(Missile_AA_03_F, MissileBase)
    LAUNCHER(Missile_AGM_01_F, MissileBase)
    LAUNCHER(Rocket_03_HE_F, MissileBase)
    LAUNCHER(Rocket_03_AP_F, MissileBase)
    LAUNCHER(rhs_ammo_atgmCore_base, MissileBase)
    LAUNCHER(rhs_ammo_atgmBase_base, MissileBase)
    LAUNCHER(rhs_ammo_s8, RocketBase)
    LAUNCHER(rhs_ammo_s8DF, RocketBase)
    LAUNCHER(rhs_ammo_s8t, RocketBase)
    LAUNCHER(rhs_ammo_s5_ub16, RocketBase)
    LAUNCHER(rhs_ammo_s5_ub32, RocketBase)
    LAUNCHER(rhs_ammo_b8v20a_pod, MissileBase)
    LAUNCHER(rhs_ammo_b8m1_pod, MissileBase)
    LAUNCHER(rhs_ammo_ub32_pod, MissileBase)
    LAUNCHER(rhs_ammo_ub16_pod, MissileBase)
    LAUNCHER(rhs_ammo_falanga_pod, MissileBase)
    LAUNCHER(rhs_ammo_ataka_tube, MissileBase)
    LAUNCHER(rhs_ammo_ataka_tube_2, MissileBase)
    LAUNCHER(rhs_ammo_upk23_pod, MissileBase)
    LAUNCHER(rhs_ammo_9k114, MissileBase)
    LAUNCHER(rhs_ammo_9m120, MissileBase)
    LAUNCHER(rhs_ammo_9m127m, MissileBase)
    LAUNCHER(rhs_ammo_r73, MissileBase)
    LAUNCHER(rhs_ammo_r74m2, MissileBase)
    LAUNCHER(rhs_ammo_r77m, MissileBase)
    LAUNCHER(rhs_ammo_ch29, MissileBase)
    LAUNCHER(rhs_ammo_9m14m, MissileBase)
    LAUNCHER(rhs_ammo_9m112, MissileBase)
    LAUNCHER(rhs_ammo_9m112m, MissileBase)
    LAUNCHER(rhs_ammo_9m113, MissileBase)
    LAUNCHER(rhs_ammo_9m117, MissileBase)
    LAUNCHER(rhs_ammo_9m118, MissileBase)
    LAUNCHER(rhs_ammo_9m119, MissileBase)
    LAUNCHER(rhs_ammo_9m119m, MissileBase)
    LAUNCHER(rhs_ammo_9m128, MissileBase)
    LAUNCHER(rhs_ammo_9m115, MissileBase)
    LAUNCHER(rhs_ammo_9m131, MissileBase)
    LAUNCHER(rhs_ammo_9m131m, MissileBase)
    LAUNCHER(rhs_ammo_9m131f, MissileBase)
    LAUNCHER(rhs_ammo_9m133, MissileBase)
    LAUNCHER(rhs_ammo_3m7, MissileBase)
    LAUNCHER(rhs_proxy_ags30_mag, MissileBase)
    LAUNCHER(rhs_proxy_pkm_mag, MissileBase)
    LAUNCHER(rhs_ammo_rpgShell_base, RocketBase)
    LAUNCHER(rhs_ammo_og9v, RocketBase)
    LAUNCHER(rhs_ammo_og9vm, RocketBase)
    LAUNCHER(rhs_ammo_pg9v, RocketBase)
    LAUNCHER(rhs_ammo_pg9n, RocketBase)
    LAUNCHER(rhs_ammo_pg9vnt, RocketBase)
    LAUNCHER(rhs_rpg26_rocket, RocketBase)
    LAUNCHER(rhs_rpg18_rocket, RocketBase)
    LAUNCHER(rhs_rpg7v2_pg7vl, RocketBase)
    LAUNCHER(rhs_rpg7v2_pg7vr, RocketBase)
    LAUNCHER(rhs_rpg7v2_tbg7v, RocketBase)
    LAUNCHER(rhs_rpg7v2_og7v, RocketBase)
    LAUNCHER(rhs_rshg2_rocket, RocketBase)
    LAUNCHER(rhs_ammo_9k32, MissileBase)
    LAUNCHER(rhs_ammo_9k38, MissileBase)
    LAUNCHER(M151_Ammo_MELB, MissileBase)
    LAUNCHER(MELB_AGM_114K, MissileBase)
    LAUNCHER(DAGR_Ammo_MELB, MissileBase)
    LAUNCHER(tf47_m3maaws_HEAT, RocketBase)
    LAUNCHER(tf47_m3maaws_HEDP, RocketBase)
    LAUNCHER(tf47_m3maaws_HE, RocketBase)
    LAUNCHER(tf47_m3maaws_SMOKE, RocketBase)
    LAUNCHER(tf47_m3maaws_ILLUM, RocketBase)
    LAUNCHER(tf47_m3maaws_AreaDefense, RocketBase)
    LAUNCHER(RHS_9M79_1_F, MissileBase)
    LAUNCHER(RHS_9N123F, MissileBase)
    LAUNCHER(RHS_9M79B, MissileBase)
    LAUNCHER(RHS_9M79_1_K, MissileBase)
    LAUNCHER(RHS_9N123K, MissileBase)
    LAUNCHER(rhs_ammo_TOW_AT, MissileBase)
    LAUNCHER(rhs_ammo_TOW2_AT, MissileBase)
    LAUNCHER(rhs_ammo_TOW2_AT_static, MissileBase)
    LAUNCHER(rhs_ammo_M136_rocket, RocketBase)
    LAUNCHER(rhs_ammo_M136_hp_rocket, RocketBase)
    LAUNCHER(rhs_ammo_M136_hedp_rocket, RocketBase)
    LAUNCHER(rhsammo_fim92_missile, MissileBase)
    LAUNCHER(rhs_ammo_M_fgm148_AT, MissileBase)
    LAUNCHER(rhs_ammo_smaw_HEAA, RocketBase)
    LAUNCHER(rhs_ammo_smaw_HEDP, RocketBase)
    LAUNCHER(rhs_ammo_smaw_SR, RocketBase)
    LAUNCHER(rhs_ammo_empty, MissileBase)
    LAUNCHER(rhs_ammo_Sidewinder_AA, MissileBase)
    LAUNCHER(rhs_ammo_aim120, MissileBase)
    LAUNCHER(rhs_ammo_Sidewinder_AA_heli, MissileBase)
    LAUNCHER(rhs_ammo_Hellfire_AT, MissileBase)
    LAUNCHER(rhs_ammo_agm65, MissileBase)
    LAUNCHER(rhs_ammo_Hydra_HE, MissileBase)
    LAUNCHER(rhs_ammo_Stinger_AA, MissileBase)
    LAUNCHER(rhs_ammo_ANALQ131, MissileBase)
    LAUNCHER(rhs_pod_hellfire, MissileBase)
    LAUNCHER(rhs_pod_FFAR, MissileBase)
    LAUNCHER(rhs_pod_FFAR_green, MissileBase)
    LAUNCHER(rhs_pod_hellfire_green, MissileBase)
    LAUNCHER(R_Hydra_HE, RocketBase)
    LAUNCHER(M_Hellfire_AT, MissileBase)
    LAUNCHER(ACE_Hydra70_DAGR, MissileBase)
    LAUNCHER(ACE_Hellfire_AGM114K, MissileBase)
    LAUNCHER(ACE_Javelin_FGM148, MissileBase)
    LAUNCHER(ACE_Javelin_FGM148_static, MissileBase)
    LAUNCHER(RHS_ammo_BGM109, MissileBase)
    LAUNCHER(rhs_ammo_m72a7_rocket, rhs_ammo_M136_hedp_rocket)
    LAUNCHER(R_PG7_F, RocketBase)
};
