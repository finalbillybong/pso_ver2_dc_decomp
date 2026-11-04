#include "src/include/classes/TItemWpnChaoBranch.h"
extern void call_8c075398(void);
TItemWpnChaoBranch *TItemWpnChaoBranch_ctor_8c248ff0(TItemWpnChaoBranch *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d168;
    o->tag = (int)(*(int *)0x8c33b150);
    o->size = 0x234;
    return o;
}
