#include "src/include/classes/TeneFakeTecThunderEff.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c08ab24(TeneFakeTecThunderEff *);
TeneFakeTecThunderEff *TeneFakeTecThunderEff_ctor_8c08a590(TeneFakeTecThunderEff *o, int a1, int a2, int a3, int a4)
{
    TeneFakeTecThunderEff **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c26526c;
    o->tag = (int)(*(int *)0x8c3001d8);
    o->size = 0x34c;
    o->f33c = a2;
    o->f340 = a3;
    o->f334 = 0;
    o->f338 = 0;
    o->f348 = a4;
    call_8c08ab24(o);
    o->f32c = 0;
    o->f330 = -0x1000000;
    o->f344 = 0;
    return o;
}
