#include "src/include/classes/TWindowSubItem.h"
typedef struct TWindowSubItem_p24 TWindowSubItem_p24;
struct TWindowSubItem_p24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern int TWindowSubItemList_ctor_8c1a2838(int, int);
TWindowSubItem *TWindowSubItem_ctor_8c1a2db4(TWindowSubItem *o, int a1)
{
    TWindowSubItem **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c273770;
    o->tag = *(int *)0x8c31db18;
    o->size = 0x40;
    t1 = TWindowSubItemList_ctor_8c1a2838((int)((void *)0x8c287bb0), (int)((void *)0x8c287bb8));
    o->f24 = (TWindowSubItem_p24 *)t1;
    o->f24->f80 = (o->f24->f80 & 0xffff) | 0x10;
    o->f34 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f3c = -1;
    o->f38 = 0;
    o->f20 = 0;
    return o;
}
