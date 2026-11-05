#include "src/include/classes/TWindowDeposit.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void TWindowDeposit_render_part_8c22f164(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowDeposit_render_8c22f12c(TWindowDeposit *o)
{
    int t1;
    t1 = o->v5();
    TWindowDeposit_render_part_8c22f164((void *)o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
