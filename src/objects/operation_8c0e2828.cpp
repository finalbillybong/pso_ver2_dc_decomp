#include "src/include/classes/TWindowStatus.h"
typedef struct TWindowStatus_p30 TWindowStatus_p30;
typedef struct Arg0_30_30 Arg0_30_30;
typedef struct S_vv1 S_vv1;
struct TWindowStatus_p30 {
    char unknown0[0x30];
    Arg0_30_30 *f30;
};
struct S_vv1 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x4];
    float f10;
};
extern "C" void call_8c0e1f40(S_vv1 *);
extern "C" void call_8c0e288c(TWindowStatus *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowStatus_render_8c0e2828(TWindowStatus *o)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)o->f30->f30;
    call_8c0e1f40(v1);
    v1->f08 = v1->f10 * 0.5f + 62.0f;
    t1 = o->v5();
    call_8c0e288c(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
