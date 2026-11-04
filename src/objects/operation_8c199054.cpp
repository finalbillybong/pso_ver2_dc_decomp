#include "src/include/classes/TWindowSubCustomSelect.h"
typedef struct TWindowSubCustomSelect_p88 TWindowSubCustomSelect_p88;
typedef struct TWindowSubCustomSelect_p8c TWindowSubCustomSelect_p8c;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowSubCustomSelect *, int);
extern "C" void call_8c1990c4(TWindowSubCustomSelect *, int);
extern "C" void call_8c199244(TWindowSubCustomSelect *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c199bc8(void *, int, void *);
extern "C" void TWindowSubCustomSelect_render_8c199054(TWindowSubCustomSelect *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c1990c4(o, t1);
    call_8c199244(o, t1);
    call_8c199b80((void *)(o->second), t1);
    call_8c199bc8((void *)(o->first), t1, (void *)(((char *)o + 0x78)));
}
