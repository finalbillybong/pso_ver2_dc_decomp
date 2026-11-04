#include "src/include/classes/TItemWpnRikoSlicer.h"
extern void call_8c075398(void);
TItemWpnRikoSlicer *TItemWpnRikoSlicer_ctor_8c23f41c(TItemWpnRikoSlicer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bdd4;
    o->tag = (int)(*(int *)0x8c33a858);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
