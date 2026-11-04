#include "src/include/classes/TItemWpnOnPikoPikoHammer.h"
extern void operation_8c241158(void *);
TItemWpnOnPikoPikoHammer *TItemWpnOnPikoPikoHammer_ctor_8c2515b8(TItemWpnOnPikoPikoHammer *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f288;
    o->tag = (int)(*(int *)0x8c33f938);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 1;
    return o;
}
