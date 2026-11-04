#include "src/include/classes/TItemWpnBearCane.h"
extern void call_8c075398(void);
TItemWpnBearCane *TItemWpnBearCane_ctor_8c239cf0(TItemWpnBearCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279424;
    o->tag = (int)(*(int *)0x8c33a378);
    o->size = 0x23c;
    o->f1fc |= 0x22;
    o->f234 = 0;
    o->f238 = 0;
    o->f218 = 0xa;
    return o;
}
