#include "src/include/classes/TItemWpnRod.h"
extern void call_8c075398(int);
extern void call_8c078034(TItemWpnRod *);
TItemWpnRod *TItemWpnRod_ctor_8c077ff0(TItemWpnRod *o)
{
    TItemWpnRod **home = &o;
    (void)home;
    call_8c075398((int)o);
    o->dispatch = (void *)0x8c263848;
    o->tag = *(int *)0x8c2fd7e0;
    o->size = 0x234;
    call_8c078034(o);
    return o;
}
