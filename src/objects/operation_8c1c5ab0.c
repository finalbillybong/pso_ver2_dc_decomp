#include "src/include/classes/TItemEffFlame.h"
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int create_effect_769c(void *, int);
TItemEffFlame *TItemEffFlame_ctor_8c1c5ab0(TItemEffFlame *o, int a1, int a2, int a3)
{
    TItemEffFlame **home = &o;
    S_c8c053d84 *t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276668;
    o->tag = (int)(*(int *)0x8c328c80);
    o->size = 0x2c;
    o->f24 = a2;
    o->f28 = a3;
    t1 = lookup_object_by_id((unsigned short)(o->f24));
    if (t1 != 0) {
        t2 = create_effect_769c((void *)(t1->fdc + o->f28 * 0x2c + 0x1c), 0x1bb);
        o->resource = (int)(t2);
    }
    o->f04 |= 0x10;
    return o;
}
