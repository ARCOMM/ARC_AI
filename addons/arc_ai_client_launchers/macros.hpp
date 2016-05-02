#define PROTO(CNAME) \
    class ##CNAME##;

#define LAUNCHER(CNAME, PNAME) \
    class ##CNAME##: ##PNAME## {\
        airLock = 1;\
        allowAgainstInfantry = 1;\
        soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};\
        whistleDist = 24;\
        cost = 10;\
    };
