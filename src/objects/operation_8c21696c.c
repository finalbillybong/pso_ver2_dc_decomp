#include "src/include/classes/TWindowSubShortMail.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TWindowSubShortMail *TWindowSubShortMail_ctor_8c21696c(TWindowSubShortMail *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2782b8;
    o->tag = *(int *)0x8c3360a0;
    o->size = 0x58;
    o->f2c = 0;
    o->f3c = 0;
    o->f40 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f30 = 0;
    o->f44 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f48 = -1;
    o->f4c = -1;
    o->f50 = 0;
    o->f54 = 0;
    o->f20 = 0;
    return o;
}
