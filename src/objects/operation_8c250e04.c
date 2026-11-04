#include "src/include/classes/TItemWpnOnClaw.h"
extern void operation_8c241158(void *);
TItemWpnOnClaw *TItemWpnOnClaw_ctor_8c250e04(TItemWpnOnClaw *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27ebc0;
    o->tag = (int)(*(int *)0x8c33f888);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 4;
    o->f1fc |= 1;
    return o;
}
