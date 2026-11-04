#include "src/include/classes/TItemWpnChacram.h"
extern void call_8c075398(void);
TItemWpnChacram *TItemWpnChacram_ctor_8c23aeac(TItemWpnChacram *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279dac;
    o->tag = (int)(*(int *)0x8c33a468);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
