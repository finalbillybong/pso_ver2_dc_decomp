#include "src/include/classes/TItemWpnRikoMechGun.h"
extern void call_8c075398(void);
TItemWpnRikoMechGun *TItemWpnRikoMechGun_ctor_8c23f0ac(TItemWpnRikoMechGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27baf8;
    o->tag = (int)(*(int *)0x8c33a808);
    o->size = 0x24c;
    o->f224 = 1;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
