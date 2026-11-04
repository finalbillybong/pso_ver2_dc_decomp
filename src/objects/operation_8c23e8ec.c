#include "src/include/classes/TItemWpnPickel.h"
extern void call_8c075398(void);
TItemWpnPickel *TItemWpnPickel_ctor_8c23e8ec(TItemWpnPickel *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b634;
    o->tag = (int)(*(int *)0x8c33a788);
    o->size = 0x238;
    o->f1e0 = 2;
    o->f1e1 = 3;
    o->f234 = 0;
    return o;
}
