#include "src/include/classes/TItemWpnOnMachineGun.h"
extern void operation_8c241158(void *);
TItemWpnOnMachineGun *TItemWpnOnMachineGun_ctor_8c251234(TItemWpnOnMachineGun *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27efa0;
    o->tag = (int)(*(int *)0x8c33f8e8);
    o->size = 0x24c;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
