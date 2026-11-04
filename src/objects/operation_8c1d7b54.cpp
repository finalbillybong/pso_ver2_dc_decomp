#include "src/include/classes/TWindowSubAreaMapDisp.h"
typedef struct TWindowSubAreaMapDisp_p78 TWindowSubAreaMapDisp_p78;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowSubAreaMapDisp *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c1d7bb8(TWindowSubAreaMapDisp *, int);
extern "C" void call_8c1d7c80(TWindowSubAreaMapDisp *, int);
extern "C" void TWindowSubAreaMapDisp_render_8c1d7b54(TWindowSubAreaMapDisp *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c199b80((void *)(o->f78), t1);
    if (o->f74 != 0) {
        call_8c1d7bb8(o, t1);
        call_8c1d7c80(o, t1);
    }
}
