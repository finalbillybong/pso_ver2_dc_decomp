#include "src/include/object_vtable.h"
#include "src/include/classes/TOSparkMachine01.h"
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2de0 S_g8c4e2de0;
typedef struct S_g8c4e2de0_42c S_g8c4e2de0_42c;
typedef struct S_x2192 S_x2192;
struct S_g8c4e2de0 {
    char unknown0[0x42c];
    S_g8c4e2de0_42c *f42c;
};
struct S_g8c4e2de0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_x2192 {
    float f00;
};
extern "C" void TObjectShared_ctor_8c01d1ec(TOSparkMachine01 *, void *);
extern "C" TOSparkMachine01 *TOSparkMachine01_ctor_8c1c6ac8(TOSparkMachine01 *o, int a1)
{
    TOSparkMachine01 **home = &o;
    int v1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, (void *)(*(S_g8c44be98 **)0x8c44be98));
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c276758;
    o->tag = (int)(*(int *)0x8c328d54);
    o->size = 0xb4;
    o->v6(a1);
    o->f38 = (int)((*(S_g8c4e2de0 **)0x8c4e2de0)->f42c->f08);
    o->f28 = (int)((*(S_g8c4e2de0 **)0x8c4e2de0)->f42c->f0c);
    o->fac = 500.0f;
    o->fb0 = 40.0f;
    o->f34 |= 0x40000000;
    v1 = (int)0;
    while (4 > v1) {
        ((S_x2192 *)((char *)(int *)((char *)o + 0x94) + (v1 << 2)))->f00 = 0.0f;
        *(char *)((char *)((char *)o + 0xa4) + (v1)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->fa8 = o->f6c + -0.98f;
    return o;
}
