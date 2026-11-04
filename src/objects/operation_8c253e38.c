#include "src/include/classes/TItemWpnUnknownWand.h"
extern void call_8c075398(void);
TItemWpnUnknownWand *TItemWpnUnknownWand_ctor_8c253e38(TItemWpnUnknownWand *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280298;
    o->tag = (int)(*(int *)0x8c33fba8);
    o->size = 0x234;
    return o;
}
