#include "src/include/classes/TItemWpnBindGunB.h"
extern void call_8c075398(void);
TItemWpnBindGunB *TItemWpnBindGunB_ctor_8c23a4f0(TItemWpnBindGunB *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2797f4;
    o->tag = (int)(*(int *)0x8c33a3d8);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
