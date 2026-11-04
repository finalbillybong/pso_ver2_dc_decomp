#include "src/include/classes/TItemWpnMuramasa.h"
extern void call_8c075398(void);
TItemWpnMuramasa *TItemWpnMuramasa_ctor_8c23e51c(TItemWpnMuramasa *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b358;
    o->tag = (int)(*(int *)0x8c33a740);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
