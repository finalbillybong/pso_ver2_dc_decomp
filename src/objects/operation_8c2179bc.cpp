#include "src/include/classes/TWindowBreakIn.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowBreakIn_render_8c2179bc(TWindowBreakIn *o)
{
    int t1;
    t1 = o->v5();
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
