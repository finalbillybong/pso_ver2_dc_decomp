#include "src/include/classes/TWindowSubComCard.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void process_entries_8c2534e0(int);
TWindowSubComCard *TWindowSubComCard_ctor_8c1d24bc(TWindowSubComCard *o, int a1)
{
    TWindowSubComCard **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276e0c;
    o->tag = *(int *)0x8c3299b8;
    o->size = 0x84;
    o->f24 = 0;
    o->f28 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f44 = 0;
    o->f48 = 0;
    o->f40 = 0;
    o->f80 = 0;
    o->f21 = 0;
    o->f4c = -1;
    process_entries_8c2534e0((int)(((char *)o + 0x58)));
    o->f20 = 0;
    return o;
}
