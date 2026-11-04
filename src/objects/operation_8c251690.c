#include "src/include/classes/TItemWpnOnRifle.h"
extern void operation_8c241158(void *);
TItemWpnOnRifle *TItemWpnOnRifle_ctor_8c251690(TItemWpnOnRifle *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f380;
    o->tag = (int)(*(int *)0x8c33f958);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
