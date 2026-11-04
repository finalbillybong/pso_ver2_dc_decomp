#include "src/include/classes/TWindowEff.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
TWindowEff *TWindowEff_ctor_8c22b298(TWindowEff *o, Arg1 *a1, int a2, int a3)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c278db4;
    o->tag = (int)(*(int *)0x8c3381d0);
    o->size = 0x48;
    o->f24 = a1->f00;
    o->f34 = 0.0f;
    o->f20 = 2.5f;
    o->f38 = 0.125f;
    o->f3c = 10.0f;
    o->f40 = 10.0f;
    o->f44 = a2;
    return o;
}
