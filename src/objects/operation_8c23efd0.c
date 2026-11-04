#include "src/include/classes/TItemWpnRikoGun.h"
extern void call_8c075398(void);
TItemWpnRikoGun *TItemWpnRikoGun_ctor_8c23efd0(TItemWpnRikoGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27ba04;
    o->tag = (int)(*(int *)0x8c33a7f0);
    o->size = 0x234;
    o->f224 = 2;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
