#include "src/include/classes/TItemWpnRabbitCane.h"
extern void call_8c075398(void);
TItemWpnRabbitCane *TItemWpnRabbitCane_ctor_8c23ebe0(TItemWpnRabbitCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b81c;
    o->tag = (int)(*(int *)0x8c33a7c0);
    o->size = 0x238;
    o->f1fc |= 1;
    o->f234 = 0.0f;
    o->f1e0 = 0xb;
    o->f1e1 = 0xa;
    return o;
}
