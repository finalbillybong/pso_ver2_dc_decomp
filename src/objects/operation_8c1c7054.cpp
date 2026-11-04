#include "src/include/classes/TOHangerMachine01.h"
typedef struct TOHangerMachine01_p28 TOHangerMachine01_p28;
typedef struct TOHangerMachine01_p38 TOHangerMachine01_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_38_2c_30_30_30 Arg0_38_2c_30_30_30;
typedef struct Arg0_38_2c_30_30_30_30 Arg0_38_2c_30_30_30_30;
typedef struct TOHangerMachine01_p64 TOHangerMachine01_p64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_14 S_vv10_14;
typedef struct S_vv10_1c S_vv10_1c;
typedef struct S_vv10_4 S_vv10_4;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_4 S_vv11_4;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_2c S_vv7_2c;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_14 S_vv8_14;
typedef struct S_vv8_1c S_vv8_1c;
typedef struct S_vv8_4 S_vv8_4;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_2c S_vv9_2c;
typedef struct S_vv9_4 S_vv9_4;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x28];
    S_vv2_30 *f30;
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
    char unknown8[0x24];
    S_vv7_2c *f2c;
};
struct S_vv8 {
    char unknown0[0x4];
    S_vv8_4 *f04;
    char unknown8[0xc];
    S_vv8_14 *f14;
    int f18;
    S_vv8_1c *f1c;
};
struct TOHangerMachine01_p38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30 *f30;
};
struct Arg0_38_2c_30_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30_30 *f30;
};
struct S_vv9 {
    char unknown0[0x4];
    S_vv9_4 *f04;
    char unknown8[0x24];
    S_vv9_2c *f2c;
};
struct S_vv10 {
    char unknown0[0x4];
    S_vv10_4 *f04;
    char unknown8[0xc];
    S_vv10_14 *f14;
    int f18;
    S_vv10_1c *f1c;
};
struct Arg0_38_2c_30_30_30 {
    char unknown0[0x30];
    Arg0_38_2c_30_30_30_30 *f30;
};
struct S_vv11 {
    char unknown0[0x4];
    S_vv11_4 *f04;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOHangerMachine01_render_8c1c7054(TOHangerMachine01 *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    S_vv6 *v6;
    S_vv7 *v7;
    S_vv8 *v8;
    S_vv9 *v9;
    S_vv10 *v10;
    S_vv11 *v11;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 == 0) {
        return;
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3827d8((void *)(o->f28));
    v1 = (S_vv1 *)o->f38;
    translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
    call_8c3aa702((void *)(v1->f04));
    v2 = (S_vv2 *)v1->f2c;
    if (o->f70 > 0.0f) {
        translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
        call_8c3aa702((void *)(v2->f04));
    }
    v6 = (S_vv6 *)v2->f30;
    translate_current_matrix_v_8c382a40((void *)((int)v6 + 8));
    call_8c3aa702((void *)(v6->f04));
    v7 = (S_vv7 *)v6->f30;
    translate_current_matrix_v_8c382a40((void *)((int)v7 + 8));
    call_8c3aa702((void *)(v7->f04));
    v8 = (S_vv8 *)v7->f2c;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v8 + 8));
    njRotateZ_8c37e02c(0, (void *)(v8->f1c));
    njRotateX_8c37dd28(0, (void *)(v8->f14));
    njRotateY_8c37df90(0, (void *)((int)o->f100 + v8->f18));
    call_8c391c94();
    call_8c3aa702((void *)(v8->f04));
    call_8c391cc4();
    njPopMatrixEx_8c38ad10();
    v9 = (S_vv9 *)o->f38->f2c->f30->f30->f30;
    translate_current_matrix_v_8c382a40((void *)((int)v9 + 8));
    call_8c3aa702((void *)(v9->f04));
    v10 = (S_vv10 *)v9->f2c;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)((int)v10 + 8));
    njRotateZ_8c37e02c(0, (void *)(v10->f1c));
    njRotateX_8c37dd28(0, (void *)(v10->f14));
    njRotateY_8c37df90(0, (void *)(v10->f18 + (int)o->f100));
    call_8c391c94();
    call_8c3aa702((void *)(v10->f04));
    call_8c391cc4();
    njPopMatrixEx_8c38ad10();
    v11 = (S_vv11 *)o->f38->f2c->f30->f30->f30->f30;
    if (o->f6c > 0.0f) {
        translate_current_matrix_v_8c382a40((void *)((int)v11 + 8));
        call_8c3aa702((void *)(v11->f04));
    }
    njPopMatrixEx_8c38ad10();
}
