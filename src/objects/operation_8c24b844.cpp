#include "src/include/classes/TODoorVS2Door01.h"
typedef struct S_g8c510fa4 S_g8c510fa4;
typedef struct S_g8c510fa4_0 S_g8c510fa4_0;
typedef struct TODoorVS2Door01_p38 TODoorVS2Door01_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct TODoorVS2Door01_p64 TODoorVS2Door01_p64;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_2c S_vv3_2c;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_30 S_vv4_30;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x24];
    S_vv3_2c *f2c;
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
struct TODoorVS2Door01_p38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    int f30;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    char unknown8[0x28];
    S_vv6_30 *f30;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
};
extern S_g8c510fa4 *g_8c510fa4;
extern "C" int operation_8c24ba5c(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void call_8c3aa702(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void TODoorVS2Door01_render_8c24b844(TODoorVS2Door01 *o)
{
    int v1;
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv4 *v4;
    S_vv5 *v5;
    char *v8;
    S_vv6 *v6;
    S_vv7 *v7;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 == 0 || operation_8c24ba5c((void *)o, 30.0f) == 0) {
        return;
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    v1 = (int)(((o->f108 & 1)) != 0);
    call_8c3827d8((void *)(*(S_g8c510fa4_0 **)((char *)((char *)g_8c510fa4 + 0x0) + (v1 << 2))));
    v2 = (S_vv2 *)o->f38;
    translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, -o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v2->f04));
    njPopMatrixEx_8c38ad10();
    v3 = (S_vv3 *)v2->f2c;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v3->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    call_8c391c94();
    v4 = (S_vv4 *)v3->f2c;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v4->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    v5 = (S_vv5 *)v4->f30;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v5->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    v8 = (char *)o->f38->f2c->f30;
    v6 = (S_vv6 *)v8;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v6 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, -o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v6->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    v7 = (S_vv7 *)v6->f30;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v7 + 8));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, -o->f10c, 0.0f, 0.0f);
    call_8c3aa702((void *)(v7->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    call_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
