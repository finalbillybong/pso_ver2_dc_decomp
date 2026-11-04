#include "src/include/classes/TItemLoad.h"
extern void TObject_ctor_8c0330e4(TItemLoad *, int);
TItemLoad *TItemLoad_ctor_8c1930a0(TItemLoad *o, int a1)
{
    TObject_ctor_8c0330e4(o, a1);
    o->dispatch = (void *)0x8c27282c;
    o->tag = *(int *)0x8c31a32c;
    o->size = 0x20;
    o->f04 |= 0x10;
    return o;
}
