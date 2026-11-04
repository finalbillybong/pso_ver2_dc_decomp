#include "src/include/classes/TItemWpnLeaf.h"
extern void call_8c075398(void);
TItemWpnLeaf *TItemWpnLeaf_ctor_8c23e048(TItemWpnLeaf *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27af88;
    o->tag = (int)(*(int *)0x8c33a6e0);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
