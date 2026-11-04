#include "src/include/classes/TWindowSetLevelUp.h"
typedef struct SBlock26 {
    short halves[13];
} SBlock26;
typedef struct Arg2 Arg2;
struct Arg2 {
    char f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
TWindowSetLevelUp *TWindowSetLevelUp_ctor_8c2268ac(TWindowSetLevelUp *o, int a1, Arg2 *a2)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278b68;
    o->f2e = 0;
    o->f2c = 0;
    o->f2a = 0;
    o->f28 = 0;
    o->f26 = 0;
    o->f24 = 0;
    o->f38 = 0;
    o->f36 = 0;
    o->f34 = 0;
    o->f32 = 0;
    o->f30 = 0;
    o->f3c = 0;
    o->f3a = 0;
    o->tag = (int)(*(int *)0x8c3376f8);
    o->size = 0x40;
    *(SBlock26 *)&*(char *)((char *)o + 0x24) = *(SBlock26 *)&a2->f00;
    o->f22 = 0;
    o->f20 = 0;
    return o;
}
