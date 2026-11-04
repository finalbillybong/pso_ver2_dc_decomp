#include "src/include/classes/TObjDFUsoTower.h"
typedef struct S_g8c4e2f40 S_g8c4e2f40;
typedef struct S_g8c4e2f40_42c S_g8c4e2f40_42c;
struct S_g8c4e2f40 {
    char unknown0[0x42c];
    S_g8c4e2f40_42c *f42c;
};
struct S_g8c4e2f40_42c {
    char unknown0[0x58];
    int f58;
    int f5c;
};
extern void TObjectShared_ctor_8c01d1ec(TObjDFUsoTower *);
TObjDFUsoTower *TObjDFUsoTower_ctor_8c21a844(TObjDFUsoTower *o)
{
    TObjectShared_ctor_8c01d1ec(o);
    o->dispatch = (void *)0x8c278590;
    o->tag = (int)(*(int *)0x8c3363f0);
    o->size = 0x9c;
    o->f38 = (int)((*(S_g8c4e2f40 **)0x8c4e2f40)->f42c->f58);
    o->f28 = (int)((*(S_g8c4e2f40 **)0x8c4e2f40)->f42c->f5c);
    *(Vector3 *)&o->f3c = *(Vector3 *)&*(Vector3 *)0x8c3363f4;
    o->f98 = 0.0f;
    o->f94 = 0;
    return o;
}
