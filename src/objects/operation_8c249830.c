#include "src/include/classes/TObjBagWarnWin.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjBagWarnWin *TObjBagWarnWin_ctor_8c249830(TObjBagWarnWin *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c27d62c;
    o->tag = (int)(*(int *)0x8c33b1c8);
    o->size = 0xa8;
    o->f20 = 0;
    o->fa4 = 0;
    return o;
}
