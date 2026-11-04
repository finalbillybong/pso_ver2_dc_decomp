#include "src/include/classes/TItemWpnGuiter.h"
extern void call_8c075398(void);
TItemWpnGuiter *TItemWpnGuiter_ctor_8c23db8c(TItemWpnGuiter *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27abb8;
    o->tag = (int)(*(int *)0x8c33a680);
    o->size = 0x234;
    return o;
}
