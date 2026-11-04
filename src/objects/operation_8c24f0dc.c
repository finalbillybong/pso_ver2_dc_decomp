#include "src/include/classes/TItemWpnNaganoClaw.h"
extern void call_8c075398(void);
TItemWpnNaganoClaw *TItemWpnNaganoClaw_ctor_8c24f0dc(TItemWpnNaganoClaw *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27e4f0;
    o->tag = (int)(*(int *)0x8c33f6e0);
    o->size = 0x23c;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 4;
    o->f1fc |= 0x201;
    o->f234 = 0;
    o->f238 = 0;
    return o;
}
