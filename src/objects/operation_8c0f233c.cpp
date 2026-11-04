#include "src/include/classes/TOKeyAncient01.h"
typedef struct TOKey_p28 TOKey_p28;
typedef struct TOKey_p38 TOKey_p38;
typedef struct TOKey_p64 TOKey_p64;
typedef struct TOKey_pf4 TOKey_pf4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_18 S_vv1_18;
typedef struct S_vv1_1c S_vv1_1c;
typedef struct S_vv1_4 S_vv1_4;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0xc];
    S_vv1_14 *f14;
    S_vv1_18 *f18;
    S_vv1_1c *f1c;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void scale_current_matrix_v_8c37e390(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0f233c(TOKeyAncient01 *o)
{
    S_vv1 *v1;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        if (o->f108 == 0) {
            call_8c3ac53a((void *)(o->f38), (void *)(o->ff4), o->fe8);
        } else {
            v1 = (S_vv1 *)o->f38;
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
            njRotateZ_8c37e02c(0, (void *)(v1->f1c));
            njRotateX_8c37dd28(0, (void *)(v1->f14));
            njRotateY_8c37df90(0, (void *)(v1->f18));
            scale_current_matrix_v_8c37e390((void *)((int)v1 + 0x20));
            call_8c3aa702((void *)(v1->f04));
            njPopMatrixEx_8c38ad10();
        }
        njPopMatrixEx_8c38ad10();
    }
}
