#include "src/include/classes/TItemWpnRocketPunch.h"
extern void call_8c075398(void);
TItemWpnRocketPunch *TItemWpnRocketPunch_ctor_8c23f714(TItemWpnRocketPunch *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bfdc;
    o->f234 = 0;
    o->tag = (int)(*(int *)0x8c33a888);
    o->size = 0x250;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c23fb74;
    o->f230 = (void *)0x8c23fbb8;
    o->f22c = (void *)0x8c23fa00;
    o->f220 = 8.0f;
    o->f234 = 0;
    return o;
}
