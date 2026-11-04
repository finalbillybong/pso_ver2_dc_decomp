#include "src/include/classes/TItemWpnBouquet.h"
extern void call_8c075398(void);
TItemWpnBouquet *TItemWpnBouquet_ctor_8c255d78(TItemWpnBouquet *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c281430;
    o->tag = (int)(*(int *)0x8c33fe40);
    o->size = 0x234;
    return o;
}
