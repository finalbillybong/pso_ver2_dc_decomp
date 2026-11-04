#include "src/include/classes/TItemWpnMagicSaber.h"
extern void call_8c075398(void);
TItemWpnMagicSaber *TItemWpnMagicSaber_ctor_8c23e2dc(TItemWpnMagicSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b170;
    o->tag = (int)(*(int *)0x8c33a710);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1fc |= 0x22;
    return o;
}
