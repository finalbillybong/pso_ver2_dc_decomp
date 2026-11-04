#include "src/include/classes/TWindowCtrlMainKiller.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
TWindowCtrlMainKiller *TWindowCtrlMainKiller_ctor_8c1bee70(TWindowCtrlMainKiller *o, int a1)
{
    TWindowCtrlMainKiller **home = &o;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c275620;
    o->tag = (int)(*(int *)0x8c328424);
    o->size = 0x20;
    if (*(int *)0x8c4e2ba0 == 0) {
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
        if (t1 != 0) {
            TObject_ctor_8c0330e4((void *)t1, (void *)0);
        }
        *(int *)0x8c4e2ba0 = (int)(t1);
    }
    if (*(int *)0x8c4e2ba4 == 0) {
        t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x20);
        if (t2 != 0) {
            TObject_ctor_8c0330e4((void *)t2, (void *)0);
        }
        *(int *)0x8c4e2ba4 = (int)(t2);
    }
    return o;
}
