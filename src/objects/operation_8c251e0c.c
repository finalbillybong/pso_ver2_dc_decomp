#include "src/include/classes/TItemWpnOnSaber.h"
extern void operation_8c241158(void *);
TItemWpnOnSaber *TItemWpnOnSaber_ctor_8c251e0c(TItemWpnOnSaber *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f688;
    o->tag = (int)(*(int *)0x8c33f9c0);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    return o;
}
