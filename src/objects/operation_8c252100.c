#include "src/include/classes/TItemWpnOnShuriken.h"
extern void operation_8c241158(void *);
TItemWpnOnShuriken *TItemWpnOnShuriken_ctor_8c252100(TItemWpnOnShuriken *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f878;
    o->tag = (int)(*(int *)0x8c33f9f0);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
