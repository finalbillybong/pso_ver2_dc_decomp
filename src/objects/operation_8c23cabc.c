#include "src/include/classes/TItemShootFast.h"
extern void TItemShootModel_ctor_8c1abe00(void *, void *, void *, void *);
TItemShootFast *TItemShootFast_ctor_8c23cabc(TItemShootFast *o, int a1, int a2, int a3)
{
    TItemShootModel_ctor_8c1abe00((void *)o, (void *)a1, (void *)a2, (void *)a3);
    o->vtable = (void *)0x8c27a67c;
    o->tag = (int)(*(int *)0x8c33a594);
    o->size = 0x68;
    o->f64 = 0;
    return o;
}
