#include "src/include/classes/TODoorAncient03.h"
typedef struct S_g8c4704c4 S_g8c4704c4;
typedef struct S_g8c4704c4_0 S_g8c4704c4_0;
typedef struct TODoorAncient03_p38 TODoorAncient03_p38;
typedef struct TODoorAncient03_p64 TODoorAncient03_p64;
typedef struct TODoorAncient03_pf4 TODoorAncient03_pf4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_30 S_vv4_30;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x28];
    S_vv3_30 *f30;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x28];
    S_vv4_30 *f30;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
extern S_g8c4704c4 *g_8c4704c4;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void TODoorAncient03_render_8c0ef96c(TODoorAncient03 *o)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    int t2;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        t2 = operation_8c0eeb00((void *)o, 30.0f);
        if (t2 != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(o->f64));
            v1 = (int)(((o->f108 & 1)) != 0);
            call_8c3827d8((void *)(*(S_g8c4704c4_0 **)((char *)((char *)g_8c4704c4 + 0x0) + (v1 << 2))));
            if (o->fe4 == 0) {
                v2 = (S_vv2 *)o->f38;
                translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
                call_8c3aa702((void *)(v2->f04));
                v3 = (S_vv3 *)v2->f2c;
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
                call_8c3aa702((void *)(v3->f04));
                njPopMatrixEx_8c38ad10();
                call_8c391c94();
                v4 = (S_vv4 *)v3->f30;
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
                call_8c3aa702((void *)(v4->f04));
                njPopMatrixEx_8c38ad10();
                v5 = (S_vv5 *)v4->f30;
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
                call_8c3aa702((void *)(v5->f04));
                njPopMatrixEx_8c38ad10();
                call_8c391cc4();
            } else {
                call_8c3addea((void *)(o->f38), (void *)(o->ff4), o->fe8);
            }
            njPopMatrixEx_8c38ad10();
        }
    }
}
