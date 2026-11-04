#include "src/include/classes/TItemWpnDragonClaw.h"
extern void call_8c075398(void);
TItemWpnDragonClaw *TItemWpnDragonClaw_ctor_8c23c5a0(TItemWpnDragonClaw *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a588;
    o->tag = (int)(*(int *)0x8c33a578);
    o->size = 0x238;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1e2 = 4;
    o->f1e3 = 3;
    o->f1fc |= 0x23;
    o->f218 = 0xd;
    o->f234 = 0;
    return o;
}
