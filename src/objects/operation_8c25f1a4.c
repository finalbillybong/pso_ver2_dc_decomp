#include "src/include/classes/TObjSoloPlayWin.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjSoloPlayWin *TObjSoloPlayWin_ctor_8c25f1a4(TObjSoloPlayWin *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281d8c;
    o->tag = (int)(*(int *)0x8c340668);
    o->size = 0x2c;
    o->f24 = 0;
    o->f20 = 0;
    return o;
}
