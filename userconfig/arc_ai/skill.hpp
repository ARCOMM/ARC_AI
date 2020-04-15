class CfgAISkill {
	// Values of 0 causes AI to shoot at their feet
	// 0.1 seems like a good value, not too easy, not too hard. They shoot like they're out of breath and injured
	// 0.05 is the value that people tend to like, it's super inaccurate - takes a while for AI groups to kill each other
    aimingAccuracy[] = {0, 0.06, 1, 0.13};
	
	// Everything below should stay the same
    aimingShake[] = {0, 0.2, 1, 0.4};
    aimingSpeed[] = {0, 0.7, 1, 0.9};
    commanding[] = {0, 0.85, 1, 1};
    courage[] = {0, 0.6, 1, 0.85};
    endurance[] = {0, 1, 1, 1};
    general[] = {0, 1, 1, 1};
    reloadSpeed[] = {0, 0.2, 1, 0.8};
    spotDistance[] = {0, 1, 1, 1};
    spotTime[] = {0, 1, 1, 1};
};
