#include "src/include/classes/TItemWpnUnknownRifle.h"
extern void call_8c075398(void);
TItemWpnUnknownRifle *TItemWpnUnknownRifle_ctor_8c25444c(TItemWpnUnknownRifle *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280850;
    o->tag = (int)(*(int *)0x8c33fc50);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
