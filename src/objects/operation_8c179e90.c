#include "src/include/classes/TItemWpnHand.h"
extern void call_8c075398(void);
TItemWpnHand *TItemWpnHand_ctor_8c179e90(TItemWpnHand *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27157c;
    o->tag = (int)(*(int *)0x8c3196fc);
    o->size = 0x234;
    o->f1fc |= 0x241;
    return o;
}
