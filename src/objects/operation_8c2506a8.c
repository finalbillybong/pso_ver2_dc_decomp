#include "src/include/classes/TMemberCheck.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern int operation_8c02b9e4(void);
extern void call_8c2507a4(TMemberCheck *);
TMemberCheck *TMemberCheck_ctor_8c2506a8(TMemberCheck *o, int a1)
{
    TMemberCheck **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c27e9b4;
    o->tag = (int)(*(int *)0x8c33f830);
    o->size = 0x84;
    o->resource = 0;
    memset_8c12b880((void *)(((char *)o + 0x24)), 0, 0x60);
    t1 = operation_8c02b9e4();
    *(int *)0x8c511120 = (int)(t1);
    call_8c2507a4(o);
    return o;
}
