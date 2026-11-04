#include "src/include/classes/TItemWpnChainSaw.h"
extern void call_8c075398(void);
TItemWpnChainSaw *TItemWpnChainSaw_ctor_8c17be04(TItemWpnChainSaw *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271df8;
    o->tag = (int)(*(int *)0x8c319848);
    o->size = 0x238;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f234 = 2;
    return o;
}
