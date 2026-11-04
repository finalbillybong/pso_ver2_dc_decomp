#include "src/include/classes/TItemWpnSealNodachi.h"
extern void call_8c075398(void);
TItemWpnSealNodachi *TItemWpnSealNodachi_ctor_8c23fe7c(TItemWpnSealNodachi *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27c1c4;
    o->tag = (int)(*(int *)0x8c33a8d8);
    o->size = 0x234;
    return o;
}
