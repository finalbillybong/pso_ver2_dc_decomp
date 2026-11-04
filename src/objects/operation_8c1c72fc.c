#include "src/include/classes/TItemEffShield.h"
extern void TObject_ctor_8c0330e4(TItemEffShield *, int);
TItemEffShield *TItemEffShield_ctor_8c1c72fc(TItemEffShield *o, int a1, int a2, int a3)
{
    TObject_ctor_8c0330e4(o, a1);
    o->dispatch = (void *)0x8c2767fc;
    o->tag = *(int *)0x8c328e88;
    o->size = 0x50;
    o->f28 = a3;
    o->f24 = a2;
    o->f2c = 0;
    o->f30 = 0;
    o->f4c = 0x24;
    o->f20 = 0;
    o->f04 |= 0x10;
    return o;
}
