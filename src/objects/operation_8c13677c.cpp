#include "src/include/object_vtable.h"
#include "src/include/classes/TObjFogCollision.h"
extern int g_8c312e50;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjFogCollision *);
extern "C" TObjFogCollision *TObjFogCollision_ctor_8c13677c(TObjFogCollision *o, int a1, int a2)
{
    TObjFogCollision **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26d03c;
    o->tag = (int)(g_8c312e50);
    o->size = 0x9c;
    o->v6(a2);
    o->f94 = 0;
    o->f98 = 0;
    o->v14();
    o->f04 |= 0x10;
    return o;
}
