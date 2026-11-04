#include "src/include/classes/TWindowSubQuestBoardSelect.h"
typedef struct TWindowSubQuestBoardSelect_p6c TWindowSubQuestBoardSelect_p6c;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(TWindowSubQuestBoardSelect *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c21e9a0(TWindowSubQuestBoardSelect *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowSubQuestBoardSelect_render_8c21e7b4(TWindowSubQuestBoardSelect *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    call_8c199b80((void *)(o->f6c), t1);
    call_8c21e9a0(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
