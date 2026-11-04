#include "src/include/classes/TItemWpnYasumuraShiki.h"
extern void call_8c075398(void);
TItemWpnYasumuraShiki *TItemWpnYasumuraShiki_ctor_8c248a9c(TItemWpnYasumuraShiki *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27cf60;
    o->tag = (int)(*(int *)0x8c33b100);
    o->size = 0x244;
    o->f224 = 2;
    o->f22c = 0;
    o->f228 = (void *)0x8c1c6058;
    o->f220 = 20.0f;
    o->f23c = 0.0f;
    o->f238 = 0.0f;
    o->f234 = 0.0f;
    o->f240 = 0;
    return o;
}
