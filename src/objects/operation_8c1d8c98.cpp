#include "src/include/classes/TObjCity_Season_HalloweenPumpkin.h"
typedef struct S_L8c4e2edc S_L8c4e2edc;
typedef struct S_L8c4e2edc_c S_L8c4e2edc_c;
typedef struct S_L8c4e2ef4 S_L8c4e2ef4;
typedef struct S_L8c4e2ef4_c S_L8c4e2ef4_c;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_8 S_vv1_42c_8;
struct S_L8c4e2edc {
    char unknown0[0xc];
    S_L8c4e2edc_c *f0c;
};
struct S_L8c4e2ef4 {
    char unknown0[0xc];
    S_L8c4e2ef4_c *f0c;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
};
struct S_vv1_42c {
    char unknown0[0x8];
    S_vv1_42c_8 *f08;
};
extern S_L8c4e2edc g_8c4e2edc;
extern S_L8c4e2ef4 g_8c4e2ef4;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCity_Season_HalloweenPumpkin_render_8c1d8c98(TObjCity_Season_HalloweenPumpkin *o)
{
    S_vv1 *v1;
    int t1;
    if ((&g_8c4e2edc)->f0c != 0) {
        v1 = (S_vv1 *)(&g_8c4e2edc)->f0c;
        t1 = o->v11(800.0f, 80.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)((&g_8c4e2ef4)->f0c));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            call_8c3aa716((void *)(v1->f42c->f08));
            njPopMatrixEx_8c38ad10();
        }
    }
}
