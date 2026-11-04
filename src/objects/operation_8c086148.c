#include "src/include/classes/TButterfly.h"
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
extern int g_8c2ffb10;
extern void TObjectShared_ctor_8c01d1ec(TButterfly *);
extern void operation_8c0869d4(void *);
TButterfly *TButterfly_ctor_8c086148(TButterfly *o, int a1, Arg2 *a2)
{
    TButterfly **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c264ed4;
    o->tag = (int)(g_8c2ffb10);
    o->size = 0xc0;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    o->f60 = a2->f18;
    o->f6c = a2->f24;
    operation_8c0869d4((void *)o);
    return o;
}
