#include "src/include/classes/TItemWpnUnknownBlade.h"
extern void call_8c075398(void);
TItemWpnUnknownBlade *TItemWpnUnknownBlade_ctor_8c254c2c(TItemWpnUnknownBlade *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280efc;
    o->tag = (int)(*(int *)0x8c33fd40);
    o->size = 0x234;
    o->f1fc |= 0x201;
    return o;
}
