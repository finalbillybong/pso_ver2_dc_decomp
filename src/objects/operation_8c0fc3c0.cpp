#include "src/include/classes/TWindowLockOn.h"
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowLockOn *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowLockOn_render_8c0fc3c0(TWindowLockOn *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    if (o->f38 == o->f48 && o->f3c == o->f4c && o->f40 == o->f50 && o->f44 == o->f54) {
        draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    }
}
