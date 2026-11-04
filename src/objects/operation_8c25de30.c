#include "src/include/classes/TDLGraph.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TDLGraph *TDLGraph_ctor_8c25de30(TDLGraph *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281ce4;
    o->tag = (int)(*(int *)0x8c340598);
    o->size = 0x40;
    o->f20 = 0;
    o->f24 = 0.0f;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f28 = -1;
    o->f2c = -1;
    o->f30 = 0;
    *(TDLGraph **)0x8c513460 = o;
    return o;
}
