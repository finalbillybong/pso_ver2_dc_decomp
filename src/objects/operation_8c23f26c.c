#include "src/include/classes/TItemWpnRikoPartisan.h"
extern void call_8c075398(void);
TItemWpnRikoPartisan *TItemWpnRikoPartisan_ctor_8c23f26c(TItemWpnRikoPartisan *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bbec;
    o->tag = (int)(*(int *)0x8c33a820);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 3;
    return o;
}
