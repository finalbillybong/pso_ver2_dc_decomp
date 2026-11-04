#include "src/include/classes/TItemWpnUnknownMachineGun.h"
extern void call_8c075398(void);
TItemWpnUnknownMachineGun *TItemWpnUnknownMachineGun_ctor_8c2541c0(TItemWpnUnknownMachineGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280668;
    o->tag = (int)(*(int *)0x8c33fc10);
    o->size = 0x24c;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
