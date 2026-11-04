#include "src/include/classes/TObject.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TObject *operation_8c24d504(TObject *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->vtable = (void *)0x8c27debc;
    o->tag = (int)(*(int *)0x8c33ee10);
    o->size = 0x148;
    return o;
}
