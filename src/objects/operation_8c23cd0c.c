#include "src/include/classes/TItemWpnFireWand.h"
extern void call_8c075398(void);
TItemWpnFireWand *TItemWpnFireWand_ctor_8c23cd0c(TItemWpnFireWand *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a7ac;
    o->tag = (int)(*(int *)0x8c33a5b8);
    o->size = 0x238;
    o->f1fc |= 0x22;
    o->f218 = 0xa;
    o->f234 = -1;
    return o;
}
