#include "src/include/classes/TItemWpnBindGunA.h"
extern void call_8c075398(void);
TItemWpnBindGunA *TItemWpnBindGunA_ctor_8c23a414(TItemWpnBindGunA *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279700;
    o->tag = (int)(*(int *)0x8c33a3c0);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
