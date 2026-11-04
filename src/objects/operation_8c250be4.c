#include "src/include/classes/TItemWpnOnWindCane.h"
extern void operation_8c241158(void *);
TItemWpnOnWindCane *TItemWpnOnWindCane_ctor_8c250be4(TItemWpnOnWindCane *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27eac8;
    o->tag = (int)(*(int *)0x8c33f870);
    o->size = 0x250;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x23;
    o->f224 = 4;
    o->f234 = 0;
    o->f238 = 0xccc;
    o->f23c = 0;
    o->f240 = 1;
    return o;
}
