#include "src/include/classes/TItemObjWpnPowerUp.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjWpnPowerUp *TItemObjWpnPowerUp_ctor_8c24d084(TItemObjWpnPowerUp *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27dc84;
    o->tag = (int)(*(int *)0x8c33edb0);
    o->size = 0x148;
    return o;
}
