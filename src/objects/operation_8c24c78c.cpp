#include "src/include/classes/TOVS2Wall01.h"
typedef struct TOVS2Wall01_p28 TOVS2Wall01_p28;
typedef struct TOVS2Wall01_p38 TOVS2Wall01_p38;
typedef struct TOVS2Wall01_p64 TOVS2Wall01_p64;
class Arg0_s35c;
class Arg0_s35c {
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
typedef struct Arg0_s35cData {

} Arg0_s35cData;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void update_context_blend(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOVS2Wall01_render_8c24c78c(TOVS2Wall01 *o)
{
    int t1;
    int t2;
    int t3;
    update_context_blend((void *)(((char *)o + 0x35c)));
    t1 = o->v11(o->f350, o->f354);
    o->f378 = (int)t1;
    if (o->f378 == 1) {
        t2 = update_depth_mode((void *)(((char *)o + 0x35c)), (void *)(((char *)o + 0x3c)));
        if (t2 == 1) {
            g_8c46f560 = (int)(g_8c575570);
            g_8c46f574 = (int)(g_8c5755a4);
            g_8c46f578 = (int)(g_8c5755a8);
            ((Arg0_s35c *)((char *)o + 0x35c))->v6();
        }
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3827d8((void *)(o->f28));
        call_8c3aa716((void *)(o->f38));
        njPopMatrixEx_8c38ad10();
        t3 = update_depth_mode((void *)(((char *)o + 0x35c)), (void *)(((char *)o + 0x3c)));
        if (t3 == 1) {
            ((Arg0_s35c *)((char *)o + 0x35c))->v7();
            g_8c5755a4 = (int)(g_8c46f574);
            g_8c5755a8 = (int)(g_8c46f578);
            g_8c575570 = (int)(g_8c46f560);
        }
    }
}
