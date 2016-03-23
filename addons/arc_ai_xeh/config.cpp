class CfgPatches {
    class arc_ai_xeh {
        ammo[] = {};
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.54;
        author[] = {"Ed", "Kingsley"};
        authorUrl = "https://github.com/ARCOMM/ARC_AI";
        requiredAddons[] = {"arc_ai_main"};
    };
};

class CfgFunctions {
	class ARC_AI {
		class xeh {
			file = "\arc_ai_xeh\functions";
			class init {};
		};
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ARC_AI_XEH_Init {
            init = "_this spawn ARC_AI_fnc_init";
        };
    };
};