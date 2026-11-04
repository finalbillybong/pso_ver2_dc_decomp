#include "src/include/classes/TItemWpnOnSlicer.h"
extern int g_8c33fa08;
extern void operation_8c241158(void *);
TItemWpnOnSlicer *TItemWpnOnSlicer_ctor_8c252330(TItemWpnOnSlicer *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f970;
    o->tag = (int)(g_8c33fa08);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1fc |= 2;
    return o;
}
