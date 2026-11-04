#include "src/include/classes/TItemWpnOnTwinGun.h"
extern void operation_8c241158(void *);
extern void operation_1ac120();
TItemWpnOnTwinGun *TItemWpnOnTwinGun_ctor_8c252ce4(TItemWpnOnTwinGun *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fe48;
    o->tag = (int)(*(int *)0x8c33faa8);
    o->size = 0x24c;
    o->f1fc |= 0x223;
    o->f22c = operation_1ac120;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
