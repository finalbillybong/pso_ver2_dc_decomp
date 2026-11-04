#include "src/include/object_vtable.h"
#include "src/include/classes/TOSoulDF.h"
typedef struct S_g8c44be98 S_g8c44be98;
extern int g_8c32adf8;
extern S_g8c44be98 *g_8c44be98;
extern int g_8c4e2f60;
extern "C" void TObjectShared_ctor_8c01d1ec(TOSoulDF *, void *);
extern "C" TOSoulDF *TOSoulDF_ctor_8c1db340(TOSoulDF *o, int a1)
{
    TOSoulDF **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2772c4;
    o->tag = (int)(g_8c32adf8);
    o->size = 0xd4;
    o->v6(a1);
    o->f28 = (int)(g_8c4e2f60);
    o->f34 |= 0x40000000;
    o->fac = (int)(g_8c4e2f60);
    if (!(o->f88 >= 0)) {
        o->fb0 = (void *)(void *)0x8c32ad08;
    } else {
        o->fb0 = (void *)(void *)0x8c32ac18;
    }
    o->f94 = 0.0f;
    o->f98 = 0.0f;
    o->f9c = 0.0f;
    o->fa8 = 0;
    o->fa0 = 0.0f;
    o->fa4 = 0.0f;
    o->fbc = 0.0f;
    o->fb8 = 0.0f;
    o->fb4 = 0.0f;
    o->fc8 = 0;
    o->fc4 = 0;
    o->fc0 = 0;
    o->fcc = 0;
    o->fd0 = 0;
    return o;
}
