#include "src/include/classes/TItemWpnDevilCane.h"
extern void call_8c075398(void);
TItemWpnDevilCane *TItemWpnDevilCane_ctor_8c23b608(TItemWpnDevilCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a28c;
    o->tag = (int)(*(int *)0x8c33a4f0);
    o->size = 0x244;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x23;
    o->f218 = 0xc;
    o->f234 = 0;
    o->f23c = 0;
    o->f240 = -1;
    return o;
}
