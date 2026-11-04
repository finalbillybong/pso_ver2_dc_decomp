#include "src/include/classes/TWindowSubComCard.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TWindowSubComCard *operation_8c21a07c(TWindowSubComCard *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27836c;
    o->tag = *(int *)0x8c3363d8;
    o->size = 0x80;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f20 = 0;
    return o;
}
