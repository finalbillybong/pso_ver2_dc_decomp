#include "src/include/classes/TObjRaderCol.h"
extern "C" void operation_8c0c5478(void *, void *, float);
extern "C" void TObjRaderCol_render_shadow_8c1c43a4(TObjRaderCol *o)
{
    int t1;
    t1 = o->v11(200.0f, 10.0f);
    if (t1 != 0) {
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306018), o->f94 * 2.0f);
    }
}
