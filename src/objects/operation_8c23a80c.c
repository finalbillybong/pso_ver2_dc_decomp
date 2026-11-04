#include "src/include/classes/TItemWpnBlueCane.h"
extern void call_8c075398(void);
TItemWpnBlueCane *TItemWpnBlueCane_ctor_8c23a80c(TItemWpnBlueCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2799dc;
    o->tag = (int)(*(int *)0x8c33a408);
    o->size = 0x23c;
    o->f1fc |= 0x22;
    o->f234 = 0;
    o->f238 = 0;
    o->f218 = 0xa;
    return o;
}
