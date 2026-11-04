#include "src/include/classes/TItemWpnBag.h"
extern void call_8c075398(void);
TItemWpnBag *TItemWpnBag_ctor_8c241038(TItemWpnBag *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27ca58;
    o->tag = (int)(*(int *)0x8c33a9b0);
    o->size = 0x234;
    return o;
}
