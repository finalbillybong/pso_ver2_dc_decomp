#include "src/include/classes/TItemTimerEvent.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TItemTimerEvent *TItemTimerEvent_ctor_8c2236d0(TItemTimerEvent *o, int a1, int a2, int a3)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278aa8;
    o->tag = (int)(*(int *)0x8c3374d0);
    o->size = 0x30;
    o->f20 = a2;
    o->f2c = 0;
    o->f24 = a3;
    o->f28 = 0;
    o->f04 |= 0x10;
    return o;
}
