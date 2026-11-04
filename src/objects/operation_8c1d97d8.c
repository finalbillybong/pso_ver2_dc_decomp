#include "src/include/classes/TObjCity_Season_FireWork.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
TObjCity_Season_FireWork *TObjCity_Season_FireWork_ctor_8c1d97d8(TObjCity_Season_FireWork *o, int a1, Arg2 *a2, float f0)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c276ef4;
    o->tag = (int)(*(int *)0x8c32a314);
    o->size = 0x44;
    o->f20 = a2->f00;
    o->f2c = 0;
    o->child = 0;
    o->f34 = f0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0.0f;
    return o;
}
