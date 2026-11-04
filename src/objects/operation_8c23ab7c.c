#include "src/include/classes/TItemWpnBroom.h"
extern void call_8c075398(void);
TItemWpnBroom *TItemWpnBroom_ctor_8c23ab7c(TItemWpnBroom *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279bc4;
    o->tag = (int)(*(int *)0x8c33a438);
    o->size = 0x234;
    return o;
}
