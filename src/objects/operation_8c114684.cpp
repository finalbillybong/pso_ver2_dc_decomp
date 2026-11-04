#include "src/include/classes/TOKeyAncient01.h"
typedef struct TOKey_p28 TOKey_p28;
typedef struct TOKey_p38 TOKey_p38;
typedef struct Arg0_38_14 Arg0_38_14;
typedef struct Arg0_38_18 Arg0_38_18;
typedef struct Arg0_38_1c Arg0_38_1c;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct TOKey_p64 TOKey_p64;
typedef struct TOKey_pf4 TOKey_pf4;
struct TOKey_p38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
    char unknown8[0xc];
    Arg0_38_14 *f14;
    Arg0_38_18 *f18;
    Arg0_38_1c *f1c;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(TOKey_p38 *, void *, float);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOKeyAncient01_render_8c114684(TOKeyAncient01 *o)
{
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        if (o->f10c != 1) {
            call_8c3addea((TOKey_p38 *)(o->f38), (void *)(o->ff4), o->fe8);
        } else {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o->f38 + 0x8)));
            njRotateZ_8c37e02c(0, (void *)(o->f38->f1c));
            njRotateX_8c37dd28(0, (void *)(o->f38->f14));
            njRotateY_8c37df90(0, (void *)(o->f38->f18));
            call_8c3aa702((void *)(o->f38->f04));
            njPopMatrixEx_8c38ad10();
        }
        njPopMatrixEx_8c38ad10();
    }
}
