#include "src/include/classes/TItemWpnMoonCane.h"
extern void call_8c075398(void);
TItemWpnMoonCane *TItemWpnMoonCane_ctor_8c23e444(TItemWpnMoonCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b264;
    o->tag = (int)(*(int *)0x8c33a728);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    return o;
}
