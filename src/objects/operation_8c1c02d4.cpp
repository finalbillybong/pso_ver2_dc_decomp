#include "src/include/classes/TOLightMachine01.h"
typedef struct S_g8c4e2c44 S_g8c4e2c44;
typedef struct S_g8c4e2c48 S_g8c4e2c48;
typedef struct TOLightMachine01_p28 TOLightMachine01_p28;
typedef struct TOLightMachine01_p38 TOLightMachine01_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOLightMachine01_p64 TOLightMachine01_p64;
typedef struct TOLightMachine01_pb0 TOLightMachine01_pb0;
struct TOLightMachine01_p38 {
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
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOLightMachine01_render_8c1c02d4(TOLightMachine01 *o)
{
    int t1;
    t1 = o->v11(o->f94, o->f98);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa702((void *)(o->f38->f04));
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, 0.0f, o->fa0, 0.0f);
        njRotateY_8c37df90(0, (void *)(o->fb0));
        call_8c3aa702((void *)(o->f38->f2c->f04));
        call_8c391c94();
        call_8c3827d8((void *)(*(S_g8c4e2c48 **)0x8c4e2c48));
        call_8c3aa716((void *)(*(S_g8c4e2c44 **)0x8c4e2c44));
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
    }
}
