#define PROTO(CNAME) \
	class ##CNAME##;

#define GRENADE(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiAmmoUsageFlags = 32; \
		allowAgainstInfantry = 0; \
		cost = 1000000; \
	};

#define GL(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiRateOfFireDistance = 2000; \
		maxRange = 2000; \
		maxRangeProbab = 0; \
		midRange = 2000; \
		midRangeProbab = 0; \
		minRange = 2000; \
		minRangeProbab = 0; \
		modes[] = {"Single"}; \
		class Single: Mode_SemiAuto \
		{ \
			aiRateOfFireDistance = 2000; \
			maxRange = 2000; \
			maxRangeProbab = 0; \
			midRange = 2000; \
			midRangeProbab = 0; \
			minRange = 2000; \
			minRangeProbab = 0; \
		}; \
	};

#define RIFLE(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiDispersionCoefX = 35; \
		aiDispersionCoefY = 30; \
		modes[] = {"ARC_AI_FullAuto", "ARC_AI_Burst"}; \
		class ARC_AI_FullAuto: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 35; \
			aiDispersionCoefY = 30; \
			aiRateOfFire = 0.1; \
			aiRateOfFireDistance = 250; \
			minRange = 0; \
			minRangeProbab = 1; \
			midRange = 150; \
			midRangeProbab = 0.75; \
			maxRange = 250; \
			maxRangeProbab = 0.5; \
			burst = "12 + round random 9"; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
		class ARC_AI_Burst: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 35; \
			aiDispersionCoefY = 30; \
			burst = "3 + round random 3"; \
			aiRateOfFire = 0.1; \
			aiRateOfFireDistance = 600; \
			minRange = 251; \
			minRangeProbab = 0.5; \
			midRange = 400; \
			midRangeProbab = 0.75; \
			maxRange = 600; \
			maxRangeProbab = 1; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
	};

#define SMG(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiDispersionCoefX = 38; \
		aiDispersionCoefY = 30; \
		modes[] = {"ARC_AI_FullAuto", "ARC_AI_Burst"}; \
		class ARC_AI_FullAuto: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 38; \
			aiDispersionCoefY = 30; \
			aiRateOfFire = 0.1; \
			aiRateOfFireDistance = 250; \
			minRange = 0; \
			minRangeProbab = 1; \
			midRange = 150; \
			midRangeProbab = 0.75; \
			maxRange = 250; \
			maxRangeProbab = 0.5; \
			burst = "12 + round random 9"; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
		class ARC_AI_Burst: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 36; \
			aiDispersionCoefY = 30; \
			burst = "3 + round random 3"; \
			aiRateOfFire = 0.1; \
			aiRateOfFireDistance = 600; \
			minRange = 251; \
			minRangeProbab = 0.5; \
			midRange = 400; \
			midRangeProbab = 0.75; \
			maxRange = 600; \
			maxRangeProbab = 1; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
	};

#define DMR(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiDispersionCoefX = 32; \
		aiDispersionCoefY = 28; \
		modes[] = {"ARC_AI_FullAuto", "ARC_AI_Burst"}; \
		class ARC_AI_FullAuto: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 32; \
			aiDispersionCoefY = 28; \
			aiRateOfFire = 1; \
			aiRateOfFireDistance = 250; \
			minRange = 0; \
			minRangeProbab = 0.89999998; \
			midRange = 150; \
			midRangeProbab = 0.80000001; \
			maxRange = 250; \
			maxRangeProbab = 0.30000001; \
			burst = "12 + round random 9"; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
		class ARC_AI_Burst: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 32; \
			aiDispersionCoefY = 28; \
			burst = "3 + round random 3"; \
			aiRateOfFire = 1; \
			aiRateOfFireDistance = 600; \
			minRange = 251; \
			minRangeProbab = 0.80000001; \
			midRange = 400; \
			midRangeProbab = 0.69999999; \
			maxRange = 600; \
			maxRangeProbab = 0.4; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
	};

#define MG(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		aiDispersionCoefX = 35; \
		aiDispersionCoefY = 35; \
		modes[] = {"ARC_AI_MGBurst"}; \
		class ARC_AI_MGBurst: Mode_FullAuto \
		{ \
			aiDispersionCoefX = 35; \
			aiDispersionCoefY = 35; \
			aiRateOfFire = 0.1; \
			aiRateOfFireDistance = 400; \
			minRange = 0; \
			minRangeProbab = 1; \
			midRange = 400; \
			midRangeProbab = 1; \
			maxRange = 800; \
			maxRangeProbab = 1; \
			burst = "18 + round random 9"; \
			dispersion = 0.002; \
			class BaseSoundModeType; \
			class StandardSound: BaseSoundModeType {}; \
			class SilencedSound: BaseSoundModeType {}; \
		}; \
	};

#define DANGER(CNAME, PNAME) \
	class ##CNAME##: ##PNAME## \
	{ \
		fsmDanger = "\@arc_ai\behaviour\danger.fsm"; \
	};
