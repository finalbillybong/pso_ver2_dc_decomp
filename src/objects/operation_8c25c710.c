#include "src/include/classes/TItemReverseTechCtrl.h"
extern void TObject_ctor_8c0330e4(TItemReverseTechCtrl *, int);
TItemReverseTechCtrl *TItemReverseTechCtrl_ctor_8c25c710(TItemReverseTechCtrl *o, int a1)
{
    TObject_ctor_8c0330e4(o, a1);
    o->dispatch = (void *)0x8c281bfc;
    o->tag = *(int *)0x8c340448;
    o->size = 0x24;
    o->f04 |= 0x10;
    o->f20 = 0;
    return o;
}
