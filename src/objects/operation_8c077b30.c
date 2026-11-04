#include "src/include/classes/TItemWpnHandGunSilent.h"
extern void call_8c075398(void);
TItemWpnHandGunSilent *TItemWpnHandGunSilent_ctor_8c077b30(TItemWpnHandGunSilent *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263478;
    o->tag = (int)(*(int *)0x8c2fd76c);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
