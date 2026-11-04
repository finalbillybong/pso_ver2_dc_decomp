#include "src/include/classes/TItemWpnOnMoonCane.h"
extern void operation_8c241158(void *);
TItemWpnOnMoonCane *TItemWpnOnMoonCane_ctor_8c2513f8(TItemWpnOnMoonCane *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f098;
    o->tag = (int)(*(int *)0x8c33f908);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    return o;
}
