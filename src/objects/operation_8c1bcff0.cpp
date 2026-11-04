#include "src/include/classes/TWindowMeseta.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c1bd028(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowMeseta_render_8c1bcff0(TWindowMeseta *o)
{
    int t1;
    t1 = o->v5();
    operation_8c1bd028((void *)o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
