#include "src/include/classes/TItemWpnUnknownClaw.h"
extern void call_8c075398(void);
TItemWpnUnknownClaw *TItemWpnUnknownClaw_ctor_8c253ffc(TItemWpnUnknownClaw *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280480;
    o->tag = (int)(*(int *)0x8c33fbd8);
    o->size = 0x234;
    o->f1fc |= 1;
    return o;
}
