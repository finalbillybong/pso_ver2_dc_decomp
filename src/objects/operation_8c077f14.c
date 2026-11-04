#include "src/include/classes/TItemWpnRifle.h"
extern void call_8c075398(void);
TItemWpnRifle *TItemWpnRifle_ctor_8c077f14(TItemWpnRifle *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263754;
    o->tag = (int)(*(int *)0x8c2fd7c8);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
