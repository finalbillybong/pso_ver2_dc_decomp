#include "src/include/classes/TOAirconCave01.h"
typedef struct TOAirconCave01_p28 TOAirconCave01_p28;
typedef struct TOAirconCave01_p38 TOAirconCave01_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOAirconCave01_p60 TOAirconCave01_p60;
typedef struct TOAirconCave01_p64 TOAirconCave01_p64;
struct TOAirconCave01_p38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
    char unknown8[0x24];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOAirconCave01_render_8c0ffa10(TOAirconCave01 *o)
{
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        o->f60 = (TOAirconCave01_p60 *)((int)o->f60 + 0x106);
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa702((void *)(o->f38->f04));
        njRotateY_8c37df90(0, (void *)(o->f60));
        call_8c391c94();
        call_8c3aa702((void *)(o->f38->f2c->f04));
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
