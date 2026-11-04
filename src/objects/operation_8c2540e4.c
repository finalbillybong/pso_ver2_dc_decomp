#include "src/include/classes/TItemWpnUnknownHandGun.h"
extern void call_8c075398(void);
TItemWpnUnknownHandGun *TItemWpnUnknownHandGun_ctor_8c2540e4(TItemWpnUnknownHandGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280574;
    o->tag = (int)(*(int *)0x8c33fbf0);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
