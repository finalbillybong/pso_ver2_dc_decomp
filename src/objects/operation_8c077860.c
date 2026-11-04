#include "src/include/classes/TItemWpnBlade.h"
extern void call_8c075398(void);
TItemWpnBlade *TItemWpnBlade_ctor_8c077860(TItemWpnBlade *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c26319c;
    o->tag = (int)(*(int *)0x8c2fd738);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 1;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
