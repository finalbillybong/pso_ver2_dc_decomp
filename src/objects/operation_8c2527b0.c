#include "src/include/classes/TItemWpnOnSpreadGunB.h"
extern void operation_8c241158(void *);
TItemWpnOnSpreadGunB *TItemWpnOnSpreadGunB_ctor_8c2527b0(TItemWpnOnSpreadGunB *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fb60;
    o->tag = (int)(*(int *)0x8c33fa50);
    o->size = 0x23c;
    o->f234 = 0.0f;
    o->f224 = 3;
    o->f228 = (void *)0x8c1c5a08;
    o->f238 = 0;
    o->f230 = (void *)0x8c1c53c4;
    o->f22c = (void *)0x8c1ab95c;
    o->f220 = 15.0f;
    return o;
}
