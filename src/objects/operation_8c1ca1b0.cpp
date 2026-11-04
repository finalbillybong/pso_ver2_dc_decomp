#include "src/include/classes/TWindowQuantity.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c1ca1e8(void *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowQuantity_render_8c1ca1b0(TWindowQuantity *o)
{
    int t1;
    t1 = o->v5();
    operation_8c1ca1e8((void *)o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
