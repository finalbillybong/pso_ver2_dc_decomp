#include "src/include/classes/TItemWpnHalbert.h"
extern void call_8c075398(void);
TItemWpnHalbert *TItemWpnHalbert_ctor_8c23dc50(TItemWpnHalbert *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27acac;
    o->tag = (int)(*(int *)0x8c33a698);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
