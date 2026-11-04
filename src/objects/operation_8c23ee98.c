#include "src/include/classes/TItemWpnRikoBlade.h"
extern void call_8c075398(void);
TItemWpnRikoBlade *TItemWpnRikoBlade_ctor_8c23ee98(TItemWpnRikoBlade *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b910;
    o->tag = (int)(*(int *)0x8c33a7d8);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
