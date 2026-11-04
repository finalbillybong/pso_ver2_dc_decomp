#include "src/include/classes/TItemWpnTwinGun.h"
extern void call_8c075398(void);
TItemWpnTwinGun *TItemWpnTwinGun_ctor_8c240aa4(TItemWpnTwinGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27c77c;
    o->tag = (int)(*(int *)0x8c33a968);
    o->size = 0x24c;
    o->f1fc |= 0x223;
    return o;
}
