#include "src/include/classes/TItemObjTpRecover.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjTpRecover *TItemObjTpRecover_ctor_8c24d3b0(TItemObjTpRecover *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27de08;
    o->tag = (int)(*(int *)0x8c33edf8);
    o->size = 0x148;
    return o;
}
