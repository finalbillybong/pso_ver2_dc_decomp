#include "src/include/classes/TObjEZRopeBase.h"
extern int g_8c305948;
extern void TObject_ctor_8c0330e4(void *, void *);
TObjEZRopeBase *TObjEZRopeBase_ctor_8c0bbb5c(TObjEZRopeBase *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c266314;
    o->tag = (int)(g_8c305948);
    o->size = 0x34;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->resource = 0;
    return o;
}
