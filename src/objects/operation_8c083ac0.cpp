#include "src/include/classes/TObjContainerIdo.h"
typedef struct S_g8c469c60 S_g8c469c60;
typedef struct S_g8c469c60_4 S_g8c469c60_4;
typedef struct S_g8c469c60_8 S_g8c469c60_8;
typedef struct TObjContainerIdo_p28 TObjContainerIdo_p28;
typedef struct TObjContainerIdo_p60 TObjContainerIdo_p60;
typedef struct TObjContainerIdo_p64 TObjContainerIdo_p64;
class Arg0_s128;
struct S_g8c469c60 {
    char unknown0[0x4];
    S_g8c469c60_4 *f04;
    S_g8c469c60_8 *f08;
};
class Arg0_s128 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_s128Data {

} Arg0_s128Data;
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjContainerIdo_render_8c083ac0(TObjContainerIdo *o)
{
    int t1;
    int t2;
    t1 = o->v11(400.0f, 100.0f);
    if (t1 != 0) {
        t2 = update_depth_mode((void *)(((char *)o + 0x128)), (void *)(((char *)o + 0x3c)));
        if (t2 != 0) {
            ((Arg0_s128 *)((char *)o + 0x128))->v6();
        }
        call_8c3827d8((void *)(o->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xf8)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        njRotateX_8c37dd28(0, (void *)(o->f60));
        call_8c3a944a((void *)((*(S_g8c469c60 **)0x8c469c60)->f08));
        njPopMatrixEx_8c38ad10();
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        njRotateX_8c37dd28(0, (void *)(o->f60));
        call_8c3a944a((void *)((*(S_g8c469c60 **)0x8c469c60)->f04));
        njPopMatrixEx_8c38ad10();
        if (t2 != 0) {
            ((Arg0_s128 *)((char *)o + 0x128))->v7();
        }
    }
}
