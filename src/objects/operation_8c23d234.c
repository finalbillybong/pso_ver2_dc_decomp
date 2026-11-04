#include "src/include/classes/TItemWpnFork.h"
extern void call_8c075398(void);
TItemWpnFork *TItemWpnFork_ctor_8c23d234(TItemWpnFork *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a994;
    o->tag = (int)(*(int *)0x8c33a600);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
