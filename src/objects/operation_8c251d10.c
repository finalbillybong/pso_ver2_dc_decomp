#include "src/include/classes/TItemWpnOnRod.h"
extern void call_8c241158(int);
extern void call_8c251d54(TItemWpnOnRod *);
TItemWpnOnRod *TItemWpnOnRod_ctor_8c251d10(TItemWpnOnRod *o)
{
    TItemWpnOnRod **home = &o;
    (void)home;
    call_8c241158((int)o);
    o->dispatch = (void *)0x8c27f590;
    o->tag = *(int *)0x8c33f9a8;
    o->size = 0x234;
    call_8c251d54(o);
    return o;
}
