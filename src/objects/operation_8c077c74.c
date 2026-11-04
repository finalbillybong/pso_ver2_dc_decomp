#include "src/include/classes/TItemWpnMachineGun.h"
extern void call_8c075398(void);
TItemWpnMachineGun *TItemWpnMachineGun_ctor_8c077c74(TItemWpnMachineGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c26356c;
    o->tag = (int)(*(int *)0x8c2fd798);
    o->size = 0x24c;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
