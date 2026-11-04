#include "src/include/classes/TItemWpnUnknownSlicer.h"
extern void call_8c075398(void);
TItemWpnUnknownSlicer *TItemWpnUnknownSlicer_ctor_8c2546d4(TItemWpnUnknownSlicer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280b2c;
    o->tag = (int)(*(int *)0x8c33fca8);
    o->size = 0x234;
    o->f1fc |= 2;
    return o;
}
