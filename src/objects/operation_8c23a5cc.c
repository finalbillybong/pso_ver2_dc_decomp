#include "src/include/classes/TItemWpnBindMechGun.h"
extern void call_8c075398(void);
TItemWpnBindMechGun *TItemWpnBindMechGun_ctor_8c23a5cc(TItemWpnBindMechGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2798e8;
    o->tag = (int)(*(int *)0x8c33a3f0);
    o->size = 0x24c;
    o->f224 = 2;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
