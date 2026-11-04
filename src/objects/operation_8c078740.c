#include "src/include/classes/TItemWpnWand.h"
extern void call_8c075398(void);
TItemWpnWand *TItemWpnWand_ctor_8c078740(TItemWpnWand *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263d0c;
    o->tag = (int)(*(int *)0x8c2fd868);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    return o;
}
