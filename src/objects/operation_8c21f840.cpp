#include "src/include/classes/TWindowSubSymbolChatHelp.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(int, int);
extern "C" void call_8c21f91c(int, int);
extern "C" void TWindowSubSymbolChatHelp_render_8c21f840(TWindowSubSymbolChatHelp *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4((int)(o), t1);
    call_8c21f91c((int)(o), t1);
}
