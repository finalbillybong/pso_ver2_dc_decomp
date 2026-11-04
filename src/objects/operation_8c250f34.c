#include "src/include/classes/TItemWpnOnHandGun.h"
extern void operation_8c241158(void *);
TItemWpnOnHandGun *TItemWpnOnHandGun_ctor_8c250f34(TItemWpnOnHandGun *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27ecb8;
    o->tag = (int)(*(int *)0x8c33f8a0);
    o->size = 0x234;
    o->f224 = 2;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
