#include "src/include/classes/TObjNewFloorWin.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjNewFloorWin *TObjNewFloorWin_ctor_8c253164(TObjNewFloorWin *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c280228;
    o->tag = (int)(*(int *)0x8c33fb08);
    o->size = 0x3c;
    o->f24 = 0;
    o->f28 = 0x1c2;
    o->f2c = 0x96;
    o->f20 = 0;
    return o;
}
