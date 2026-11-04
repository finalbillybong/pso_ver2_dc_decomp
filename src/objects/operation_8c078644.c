#include "src/include/classes/TItemWpnSword.h"
extern void call_8c075398(void);
TItemWpnSword *TItemWpnSword_ctor_8c078644(TItemWpnSword *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c263c18;
    o->tag = (int)(*(int *)0x8c2fd850);
    o->size = 0x234;
    o->f1e0 = 4;
    o->f1e1 = 3;
    return o;
}
