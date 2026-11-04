#include "src/include/classes/TItemWpnOnScythe.h"
extern void operation_8c241158(void *);
TItemWpnOnScythe *TItemWpnOnScythe_ctor_8c251ee4(TItemWpnOnScythe *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f780;
    o->tag = (int)(*(int *)0x8c33f9d8);
    o->size = 0x238;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f234 = 0;
    return o;
}
