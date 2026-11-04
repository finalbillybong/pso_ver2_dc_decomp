#include "src/include/classes/TItemWpnOnTwinSaber.h"
extern void operation_8c241158(void *);
TItemWpnOnTwinSaber *TItemWpnOnTwinSaber_ctor_8c252eb4(TItemWpnOnTwinSaber *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27ff40;
    o->tag = (int)(*(int *)0x8c33fac0);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 4;
    return o;
}
