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
        ammo[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

#include "classes.hpp"
