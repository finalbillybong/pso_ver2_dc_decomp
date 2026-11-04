#include "src/include/classes/TItemObjHpRecover.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjHpRecover *TItemObjHpRecover_ctor_8c24cf30(TItemObjHpRecover *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27dbd0;
    o->tag = (int)(*(int *)0x8c33ed98);
    o->size = 0x148;
    return o;
}
