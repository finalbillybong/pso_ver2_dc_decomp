#include "src/include/classes/TItemWpnUnknownCane.h"
extern void call_8c075398(void);
TItemWpnUnknownCane *TItemWpnUnknownCane_ctor_8c253efc(TItemWpnUnknownCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c28038c;
    o->tag = (int)(*(int *)0x8c33fbc0);
    o->size = 0x234;
    return o;
}
