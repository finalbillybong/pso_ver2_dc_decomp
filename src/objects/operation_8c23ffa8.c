#include "src/include/classes/TItemWpnShuriken.h"
extern int g_8c33a8f0;
extern void call_8c075398(TItemWpnShuriken *, int, int);
TItemWpnShuriken *TItemWpnShuriken_ctor_8c23ffa8(TItemWpnShuriken *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c2b8;
    o->tag = (int)(g_8c33a8f0);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
