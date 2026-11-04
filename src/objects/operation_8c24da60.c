#include "src/include/classes/TItemObjSolAtomizer.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjSolAtomizer *TItemObjSolAtomizer_ctor_8c24da60(TItemObjSolAtomizer *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e18c;
    o->tag = (int)(*(int *)0x8c33ee78);
    o->size = 0x148;
    return o;
}
