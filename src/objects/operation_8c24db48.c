#include "src/include/classes/TItemObjRecovery.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjRecovery *TItemObjRecovery_ctor_8c24db48(TItemObjRecovery *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e240;
    o->tag = (int)(*(int *)0x8c33ee90);
    o->size = 0x148;
    return o;
}
