#include "src/include/classes/TItemWpnUnknownRod.h"
extern void call_8c075398(int);
extern void call_8c25456c(TItemWpnUnknownRod *);
TItemWpnUnknownRod *TItemWpnUnknownRod_ctor_8c254528(TItemWpnUnknownRod *o)
{
    TItemWpnUnknownRod **home = &o;
    (void)home;
    call_8c075398((int)o);
    o->dispatch = (void *)0x8c280944;
    o->tag = *(int *)0x8c33fc70;
    o->size = 0x234;
    call_8c25456c(o);
    return o;
}
