#include "src/include/classes/TItemWpnHandGun.h"
extern void call_8c075398(void);
TItemWpnHandGun *TItemWpnHandGun_ctor_8c077a98(TItemWpnHandGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263384;
    o->tag = *(int *)0x8c2fd768;
    o->size = 0x234;
    o->f224 = 2;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
