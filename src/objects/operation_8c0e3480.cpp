#include "src/include/classes/TWindowSimpleStatus.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c0e34b8(int, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowSimpleStatus_render_8c0e3480(TWindowSimpleStatus *o)
{
    int t1;
    t1 = o->v5();
    call_8c0e34b8((int)(o), t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
