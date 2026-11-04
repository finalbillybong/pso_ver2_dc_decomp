#include "src/include/classes/TEffClitical.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    Vector3 f00;
};
extern void TEffect_ctor_8c0a0058(void);
TEffClitical *TEffClitical_ctor_8c09fd7c(TEffClitical *o, Arg1 *a1)
{
    TEffect_ctor_8c0a0058();
    o->dispatch = (void *)0x8c2659bc;
    o->tag = (int)(*(int *)0x8c3021b4);
    o->size = 0x7c;
    o->f24 = a1->f00;
    o->f74 = 0;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f78 = 0;
    return o;
}
