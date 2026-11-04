#include "src/include/classes/TItemTimer.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TItemTimer *TItemTimer_ctor_8c1ab01c(TItemTimer *o, int a1, int a2, int a3)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274790;
    o->f24 = 0;
    o->f28 = 0;
    o->tag = (int)(*(int *)0x8c324f18);
    o->size = 0x2c;
    o->f20 = a3 + -1;
    if (1 > o->f20) {
        o->f20 = 1;
    }
    o->f24 = a1;
    o->f28 = a2;
    o->f04 |= 0x10;
    return o;
}
