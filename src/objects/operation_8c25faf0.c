#include "src/include/classes/TObjTailsTailsMove.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjTailsTailsMove *TObjTailsTailsMove_ctor_8c25faf0(TObjTailsTailsMove *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281dfc;
    o->tag = (int)(*(int *)0x8c3406d8);
    o->size = 0x30;
    o->f20 = a1;
    o->f28 = 0;
    return o;
}
