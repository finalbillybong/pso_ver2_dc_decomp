#include "src/include/classes/TItemWpnAnoRifle.h"
extern void call_8c075398(void);
TItemWpnAnoRifle *TItemWpnAnoRifle_ctor_8c249764(TItemWpnAnoRifle *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d538;
    o->tag = (int)(*(int *)0x8c33b1b0);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
