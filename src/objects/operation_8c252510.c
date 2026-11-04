#include "src/include/classes/TItemWpnOnSpreadGun.h"
extern void operation_8c241158(void *);
extern void operation_1ac120();
TItemWpnOnSpreadGun *TItemWpnOnSpreadGun_ctor_8c252510(TItemWpnOnSpreadGun *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fa68;
    o->tag = (int)(*(int *)0x8c33fa20);
    o->size = 0x23c;
    o->f238 = 0x2000;
    o->f1fc |= 2;
    o->f22c = operation_1ac120;
    o->f220 = 15.0f;
    return o;
}
