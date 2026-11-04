#include "src/include/classes/TItemWpnCane.h"
extern void call_8c075398(void);
TItemWpnCane *TItemWpnCane_ctor_8c077998(TItemWpnCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263290;
    o->tag = (int)(*(int *)0x8c2fd750);
    o->size = 0x234;
    return o;
}
