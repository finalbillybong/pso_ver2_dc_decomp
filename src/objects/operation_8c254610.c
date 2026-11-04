#include "src/include/classes/TItemWpnUnknownSaber.h"
extern void call_8c075398(void);
TItemWpnUnknownSaber *TItemWpnUnknownSaber_ctor_8c254610(TItemWpnUnknownSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280a38;
    o->tag = (int)(*(int *)0x8c33fc88);
    o->size = 0x234;
    return o;
}
