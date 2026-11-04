#include "src/include/classes/TItemObjMoonAtomizer.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjMoonAtomizer *TItemObjMoonAtomizer_ctor_8c24dc68(TItemObjMoonAtomizer *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e2f4;
    o->tag = (int)(*(int *)0x8c33eea8);
    o->size = 0x148;
    return o;
}
