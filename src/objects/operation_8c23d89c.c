#include "src/include/classes/TItemEffFreezeBeam.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TItemEffFreezeBeam *TItemEffFreezeBeam_ctor_8c23d89c(TItemEffFreezeBeam *o, int a1, int a2, int a3, int a4, unsigned short a5)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27aaa8;
    o->tag = (int)(*(int *)0x8c33a638);
    o->size = 0x2c;
    o->f04 |= 0x10;
    o->f20 = a5;
    o->f22 = a2;
    o->f24 = a3;
    o->f28 = a4;
    return o;
}
