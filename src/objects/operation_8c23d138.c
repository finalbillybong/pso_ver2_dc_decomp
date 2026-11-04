#include "src/include/classes/TItemWpnFlowerCane.h"
extern void call_8c075398(void);
TItemWpnFlowerCane *TItemWpnFlowerCane_ctor_8c23d138(TItemWpnFlowerCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a8a0;
    o->tag = (int)(*(int *)0x8c33a5e8);
    o->size = 0x234;
    return o;
}
