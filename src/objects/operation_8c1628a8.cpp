#include "src/include/classes/TOKeyMachine01.h"
typedef struct S_g8c4db224 S_g8c4db224;
typedef struct S_g8c4db224_0 S_g8c4db224_0;
typedef struct TOKey_p38 TOKey_p38;
typedef struct TOKey_p64 TOKey_p64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_2c S_vv4_2c;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
    char unknown8[0x24];
    S_vv4_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
};
extern int g_8c46f560;
extern S_g8c4db224 *g_8c4db224;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c391c94(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void TOKeyMachine01_render_8c1628a8(TOKeyMachine01 *o)
{
    S_vv1 *v1;
    S_vv4 *v4;
    S_vv5 *v5;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        call_8c3827d8(*(void **)((o->f10c << 2) + (int)g_8c4db224));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        v1 = (S_vv1 *)o->f38;
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        if (o->f10c != 1) {
            g_8c46f560 = g_8c575570;
            g_8c575570 |= 0x10;
            call_8c38c0f0((void *)(((char *)o + 0x11c)));
        }
        call_8c391c94();
        v4 = (S_vv4 *)v1->f2c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x6c)));
        translate_current_matrix_v_8c382a40((void *)(8 + (int)v4));
        call_8c3aa702((void *)(v4->f04));
        v5 = (S_vv5 *)v4->f2c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(8 + (int)v5));
        call_8c3aa702((void *)(v5->f04));
        njPopMatrixEx_8c38ad10();
        njPopMatrixEx_8c38ad10();
        call_8c391cc4();
        if (o->f10c != 1) {
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
        }
        njPopMatrixEx_8c38ad10();
    }
}
