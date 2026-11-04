#include "src/include/classes/TItemObjMagChanger.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjMagChanger *TItemObjMagChanger_ctor_8c24dda8(TItemObjMagChanger *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e3a8;
    o->tag = (int)(*(int *)0x8c33eec8);
    o->size = 0x148;
    return o;
}
