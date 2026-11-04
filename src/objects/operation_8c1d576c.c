#include "src/include/classes/TWindowSubAreaMap.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowSubAreaMapDisp_ctor_8c1d7940(int);
TWindowSubAreaMap *TWindowSubAreaMap_ctor_8c1d576c(TWindowSubAreaMap *o, int a1)
{
    TWindowSubAreaMap **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276e84;
    o->tag = (int)(*(int *)0x8c329a30);
    o->size = 0x24;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x80);
    if (t1 != 0) {
        TWindowSubAreaMapDisp_ctor_8c1d7940(t1);
    }
    o->resource = (int)(t1);
    return o;
}
