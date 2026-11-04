#include "src/include/classes/TItemEquipBase.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c073288(TItemEquipBase *);
extern void call_8c20a108(TItemEquipBase *);
extern void *heap_alloc_8c122700(void *, int);
extern void TObject_ctor_8c0330e4(void *, TItemEquipBase *);
TItemEquipBase *TItemEquipBase_ctor_8c20989c(TItemEquipBase *o)
{
    TItemEquipBase **home = &o;
    void *t1;
    (void)home;
    call_8c073288(o);
    o->dispatch = (void *)0x8c278154;
    o->f1c0 = 0;
    o->tag = *(int *)0x8c335e28;
    o->size = 0x1d8;
    o->f140 = 0;
    o->f142 = 0;
    call_8c20a108(o);
    o->f1c4 = -1;
    o->fec |= 4;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, 0x20);
    if (t1 != 0) {
        TObject_ctor_8c0330e4(t1, o);
    }
    o->f1bc = t1;
    o->f1c8 = 0;
    o->f1d4 = 0;
    o->f1cc = 0;
    o->f1d0 = 0;
    return o;
}
