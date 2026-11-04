#include "src/include/classes/TOCakeshopCave01.h"
typedef struct TOCakeshopCave01_p28 TOCakeshopCave01_p28;
typedef struct TOCakeshopCave01_p38 TOCakeshopCave01_p38;
typedef struct TOCakeshopCave01_p64 TOCakeshopCave01_p64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_30 S_vv5_30;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_x4576 S_x4576;
typedef struct S_x70752 S_x70752;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    int f2c;
};
struct S_x4576 {
    float f00;
};
struct S_x70752 {
    float f00;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x28];
    S_vv5_30 *f30;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void TOCakeshopCave01_render_8c1bf758(TOCakeshopCave01 *o)
{
    S_vv1 *v1;
    char *v2;
    int v4;
    int v3;
    int v6;
    S_vv5 *v5;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        v1 = (S_vv1 *)o->f38;
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        v2 = (char *)v1->f2c;
        call_8c391c94();
        v3 = (int)0x104;
        v4 = (int)0;
        v5 = (S_vv5 *)v2;
        while (8 > v4) {
            v6 = (int)(v4 << 2);
            if (0.0f > ((S_x4576 *)((int)o + v3 + v6))->f00) {
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
                njScale_8c37e2e4(0, 1.0f - ((S_x70752 *)((int)o + v3 + v6))->f00, 1.0f - ((S_x70752 *)((int)o + v3 + v6))->f00, 0.0f);
                call_8c3aa702((void *)(v5->f04));
                njPopMatrixEx_8c38ad10();
            }
            v4 = (int)(v4 + 1);
            v5 = (S_vv5 *)v5->f30;
        }
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
