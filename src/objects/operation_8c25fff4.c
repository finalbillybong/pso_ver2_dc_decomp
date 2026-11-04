#include "src/include/classes/TObjDeadListWin.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjDeadListWin *TObjDeadListWin_ctor_8c25fff4(TObjDeadListWin *o, int a1)
{
    int v1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281e18;
    o->tag = (int)(*(int *)0x8c340788);
    o->size = 0x6c;
    o->f24 = 0;
    o->f28 = 0x12c;
    v1 = (int)0;
    while (4 > v1) {
        *(char *)((char *)((char *)o + 0x2c) + (v1 << 4)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f20 = 0;
    return o;
}
