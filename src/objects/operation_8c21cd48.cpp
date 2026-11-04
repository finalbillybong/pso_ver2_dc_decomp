#include "src/include/classes/TWindowShortCut.h"
typedef struct TWindowShortCut_p68 TWindowShortCut_p68;
extern "C" void call_8c199b80(void *, int);
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowShortCut *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowShortCut_render_8c21cd48(TWindowShortCut *o)
{
    int t1;
    t1 = o->v5();
    call_8c199b80((void *)(o->f68), t1);
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
