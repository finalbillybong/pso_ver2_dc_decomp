#include "src/include/classes/TItemWpnOnWand.h"
extern void operation_8c241158(void *);
TItemWpnOnWand *TItemWpnOnWand_ctor_8c252fa0(TItemWpnOnWand *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c280038;
    o->tag = (int)(*(int *)0x8c33fad8);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    return o;
}
