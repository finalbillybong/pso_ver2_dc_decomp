#include "src/include/classes/TItemObjTecBook.h"
extern void TItemObject_ctor_8c0e71c8(void *, int, void *);
TItemObjTecBook *TItemObjTecBook_ctor_8c24d5e8(TItemObjTecBook *o, int a1, int a2)
{
    TItemObject_ctor_8c0e71c8((void *)o, a1, (void *)a2);
    o->dispatch = (void *)0x8c27df70;
    o->tag = (int)(*(int *)0x8c33ee28);
    o->size = 0x148;
    return o;
}
