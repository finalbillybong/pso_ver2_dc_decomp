#include "src/include/classes/TItemLockCountCtrl.h"
typedef struct TItemLockCountCtrl_p24 TItemLockCountCtrl_p24;
TItemLockCountCtrl *TItemLockCountCtrl_ctor_8c2232f8(TItemLockCountCtrl *o, int a1, int a2, int a3, int a4)
{
    TItemLockCountCtrl **home = &o;
    int v1;
    int t1;
    (void)home;
    ((void (*)(TItemLockCountCtrl *, int))0x8c0330e4)(o, a1);
    o->dispatch = (void *)0x8c278948;
    o->tag = (int)(*(int *)0x8c3374b8);
    o->size = 0x30;
    o->f20 = a2;
    v1 = (int)(a2 << 2);
    t1 = ((int (*)(int))0x8c18de4c)(v1);
    o->resource = (TItemLockCountCtrl_p24 *)t1;
    o->f28 = a3;
    o->f2c = a4;
    ((void (*)(void *, int, int))0x8c12b880)(o->resource, 0, v1);
    return o;
}
