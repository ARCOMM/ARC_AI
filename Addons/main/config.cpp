#include "macros.hpp"

class CfgPatches
{
	class arc_ai_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		author[] = {"Ed", "Kingsley"};
		authorUrl = "https://github.com/jameslkingsley/";
		version = "1.0.0.0";
		versionStr = "1.0.0.0";
		versionAr[] = {1,0,0,0};
		requiredAddons[] = {
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_Weapons_F_beta",
			"A3_Weapons_F_Acc",
			"rhs_c_heavyweapons",
			"rhs_c_weapons",
			"asdg_jointrails",
			"hlcweapons_core",
			"hlcweapons_aks",
			"ace_ai"
		};
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

class CfgAISkill
{
	aimingAccuracy[] = {0,0.25,1,0.5};
	aimingShake[] = {0,0.25,1,0.5};
	aimingSpeed[] = {0,0.1,1,0.5};
	commanding[] = {0,1,1,1};
	courage[] = {0,1,1,1};
	endurance[] = {0,1,1,1};
	general[] = {0,1,1,1};
	spotDistance[] = {0,0.5,1,0.75};
	spotTime[] = {0,0.5,1,0.75};
};

PROTO(Mode_SemiAuto)
PROTO(Mode_Burst)
PROTO(Mode_FullAuto)

class CfgAmmo
{
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

class CfgWeapons
{
	PROTO(RifleCore)
	PROTO(Weapon_Base_F)
	PROTO(rhs_pkp_base)
	PROTO(UGL_F)
	PROTO(LMG_Mk200_F)
	PROTO(rhs_weap_ak74m)

	RIFLE(rhs_weapon_base, Weapon_Base_F)
	RIFLE(Rifle, RifleCore)
	RIFLE(Rifle_Base_F, Rifle)
	RIFLE(Rifle_Long_Base_F, Rifle_Base_F)
	RIFLE(arifle_MX_Base_F, Rifle_Base_F)
	RIFLE(arifle_Katiba_Base_F, Rifle_Base_F)
	RIFLE(mk20_base_F, Rifle_Base_F)
	RIFLE(Tavor_base_F, Rifle_Base_F)
	RIFLE(rhs_weap_m4_Base, arifle_MX_Base_F)
	RIFLE(hlc_ak_base, Rifle_Base_F)
	RIFLE(hlc_rifle_ak74, hlc_ak_base)
	RIFLE(rhs_weap_ak74m_Base_F, Rifle_Base_F)
	RIFLE(rhs_weap_akm, rhs_weap_ak74m)
	RIFLE(rhs_weap_akms, rhs_weap_akm)
	RIFLE(rhs_weap_akms_gp25, rhs_weap_akm)
	RIFLE(rhs_weap_ak103_base, rhs_weap_akm)
	RIFLE(rhs_weap_ak74, rhs_weap_ak74m)
	RIFLE(rhs_weap_aks74, rhs_weap_ak74)
	RIFLE(rhs_weap_aks74u, rhs_weap_aks74)

	SMG(SDAR_base_F, Rifle_Base_F)
	SMG(pdw2000_base_F, Rifle_Base_F)
	SMG(SMG_01_Base, Rifle_Base_F)
	SMG(SMG_02_base_F, Rifle_Base_F)

	DMR(DMR_03_base_F, Rifle_Long_Base_F)
	DMR(DMR_05_base_F, Rifle_Long_Base_F)
	DMR(DMR_06_base_F, Rifle_Long_Base_F)

	MG(MMG_01_base_F, Rifle_Long_Base_F)
	MG(MMG_02_base_F, Rifle_Long_Base_F)
	MG(rhs_weap_M249_base, LMG_Mk200_F)
	MG(rhs_weap_m240_base, rhs_weap_M249_base)
	MG(rhs_weap_pkp, rhs_pkp_base)
	MG(rhs_weap_pkm, rhs_weap_pkp)
	MG(rhs_weap_rpk74m, rhs_weap_pkp)
	MG(rhs_weap_rpk74, rhs_weap_rpk74m)

	GL(GP25_Base, UGL_F)
};
