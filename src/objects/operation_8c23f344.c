#include "src/include/classes/TItemWpnRikoSaber.h"
extern void call_8c075398(void);
TItemWpnRikoSaber *TItemWpnRikoSaber_ctor_8c23f344(TItemWpnRikoSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27bce0;
    o->tag = (int)(*(int *)0x8c33a840);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
