#include "src/include/classes/TItemWpnRikoSword.h"
extern void call_8c075398(void);
TItemWpnRikoSword *TItemWpnRikoSword_ctor_8c23f63c(TItemWpnRikoSword *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bec8;
    o->tag = (int)(*(int *)0x8c33a870);
    o->size = 0x234;
    o->f1e0 = 4;
    o->f1e1 = 3;
    return o;
}
