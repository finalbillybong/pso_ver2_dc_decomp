#include "src/include/classes/TItemObjTrapVision.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjTrapVision *TItemObjTrapVision_ctor_8c24d194(TItemObjTrapVision *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27dd54;
    o->tag = (int)(*(int *)0x8c33edc8);
    o->size = 0x148;
    return o;
}
