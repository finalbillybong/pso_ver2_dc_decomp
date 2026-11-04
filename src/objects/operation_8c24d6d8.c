#include "src/include/classes/TItemObjStatusUp.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjStatusUp *TItemObjStatusUp_ctor_8c24d6d8(TItemObjStatusUp *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27e024;
    o->tag = (int)(*(int *)0x8c33ee40);
    o->size = 0x148;
    return o;
}
