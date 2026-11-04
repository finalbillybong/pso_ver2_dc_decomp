#include "src/include/classes/TWindowKeyBoardHard.h"
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c1dfee8(TWindowKeyBoardHard *, int);
extern "C" void TWindowKeyBoardHard_render_8c1dfe9c(TWindowKeyBoardHard *o)
{
    int t1;
    if (o->f70 > 0 && ((o->f68 & 0x200)) == 0) {
        t1 = o->v5();
        draw_view_transition_if_active((void *)o);
        call_8c1dfee8(o, t1);
    }
}
