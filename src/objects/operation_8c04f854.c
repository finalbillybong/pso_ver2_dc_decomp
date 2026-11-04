#include "src/include/classes/TObjGrassWeb.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
extern void TObjectShared_ctor_8c01d1ec(TObjGrassWeb *);
extern int create_effect_769c(void *, int);
TObjGrassWeb *TObjGrassWeb_ctor_8c04f854(TObjGrassWeb *o, int a1, Arg2 *a2)
{
    TObjGrassWeb **home = &o;
    int t1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c261e94;
    if (a2 != 0) {
        o->tag = (int)(*(int *)0x8c2f2cd4);
        o->size = 0xb0;
        o->f3c = a2->f3c;
        o->f94 = 0;
        o->fac = a2->f20;
        o->f88 = 0xb4;
        t1 = create_effect_769c((void *)(&o->f3c), 0x12f);
        o->resource = (int)(t1);
    } else {
        o->f04 |= 1;
    }
    return o;
}
