#include "src/include/classes/TItemObjStarAtomizer.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjStarAtomizer *TItemObjStarAtomizer_ctor_8c24d8f8(TItemObjStarAtomizer *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e0d8;
    o->tag = (int)(*(int *)0x8c33ee58);
    o->size = 0x148;
    return o;
}
