#include "src/include/classes/TItemWpnSlicer.h"
extern void call_8c075398(void);
TItemWpnSlicer *TItemWpnSlicer_ctor_8c0781e8(TItemWpnSlicer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263a30;
    o->tag = (int)(*(int *)0x8c2fd808);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
