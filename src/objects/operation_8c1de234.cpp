#include "src/include/classes/TWindowKeyBoardSoft.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c1de27c(int, int);
extern "C" void call_8c1de51c(int, int);
extern "C" void call_8c1de630(int, int);
extern "C" void TWindowKeyBoardSoft_render_8c1de234(TWindowKeyBoardSoft *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c1de27c((int)(o), t1);
    call_8c1de51c((int)(o), t1);
    call_8c1de630((int)(o), t1);
}
