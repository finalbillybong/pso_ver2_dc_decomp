#include "src/include/classes/TWindowSubSymbolChatFaceType.h"
typedef struct TWindowSubSymbolChatFaceType_p70 TWindowSubSymbolChatFaceType_p70;
extern "C" void call_8c220130(TWindowSubSymbolChatFaceType *);
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowSubSymbolChatFaceType *, int);
extern "C" void call_8c22016c(TWindowSubSymbolChatFaceType *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowSubSymbolChatFaceType_render_8c2200c8(TWindowSubSymbolChatFaceType *o)
{
    int t1;
    t1 = o->v5();
    call_8c220130(o);
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c22016c(o, t1);
    call_8c199b80((void *)(o->child), t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
