#include "src/include/classes/TOMonumentAncient01.h"
typedef struct TOMonumentAncient01_p28 TOMonumentAncient01_p28;
typedef struct TOMonumentAncient01_p38 TOMonumentAncient01_p38;
typedef struct TOMonumentAncient01_p64 TOMonumentAncient01_p64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x24];
    S_vv1_2c *f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
};
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3a9436(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c391cc4(void);
extern "C" void TOMonumentAncient01_render_8c0f17a0(TOMonumentAncient01 *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    t1 = o->v11(o->ff8, o->ffc);
    o->f118 = (int)t1;
    if (o->f118 == 1) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        v1 = (S_vv1 *)o->f38;
        translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
        call_8c3aa702((void *)(v1->f04));
        call_8c391c94();
        v2 = (S_vv2 *)v1->f2c;
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
        call_8c3a9436((void *)(v2->f04));
        njPopMatrixEx_8c38ad10();
        call_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
