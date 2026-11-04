#include "src/include/classes/TItemWpnOnBlade.h"
extern int g_8c33f858;
extern void operation_8c241158(void *);
TItemWpnOnBlade *TItemWpnOnBlade_ctor_8c250aac(TItemWpnOnBlade *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27e9d0;
    o->tag = (int)(g_8c33f858);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 1;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
