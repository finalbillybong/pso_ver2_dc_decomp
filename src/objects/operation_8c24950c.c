#include "src/include/classes/TItemWpnSRed.h"
extern void call_8c075398(void);
TItemWpnSRed *TItemWpnSRed_ctor_8c24950c(TItemWpnSRed *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d444;
    o->tag = (int)(*(int *)0x8c33b198);
    o->size = 0x238;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 2;
    o->f234 = 0x2aaa;
    o->f1fc |= 0x223;
    o->f218 = 2;
    return o;
}
