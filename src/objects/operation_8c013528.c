#include "src/include/classes/TFog.h"
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
struct Arg2 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
TFog *TFog_ctor_8c013528(TFog *o, int a1, Arg2 *a2)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c261160;
    o->tag = (int)(*(int *)0x8c2e2e28);
    o->size = 0x20;
    *(Vector3 *)&*(Vector3 *)0x8c418020 = *(Vector3 *)&a2->f00;
    return o;
}
