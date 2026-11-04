#include "src/include/classes/TItemDropSub.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TItemDropSub *TItemDropSub_ctor_8c259638(TItemDropSub *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281af4;
    o->tag = (int)(*(int *)0x8c340328);
    o->size = 0x24;
    *(TItemDropSub **)0x8c5133a0 = o;
    o->f20 = 0xa;
    return o;
}
