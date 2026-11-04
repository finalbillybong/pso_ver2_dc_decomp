#include "src/include/classes/TItemList.h"
extern void TObject_ctor_8c0330e4(TItemList *, void *);
TItemList *TItemList_ctor_8c1694cc(TItemList *o, void *parent)
{
    TObject_ctor_8c0330e4(o, parent);
    o->dispatch = (void *)0x8c2701cc;
    o->tag = *(int *)0x8c317ab0;
    o->size = 0x24;
    o->value = 0;
    o->flags |= 0x10;
    return o;
}
