#include "src/include/object_vtable.h"
#include "src/include/classes/TObjRoomId.h"
extern int g_8c3199f0;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjRoomId *);
extern "C" TObjRoomId *TObjRoomId_ctor_8c1853d8(TObjRoomId *o, int a1, int a2)
{
    TObjRoomId **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272018;
    o->tag = (int)(g_8c3199f0);
    o->size = 0xa0;
    o->v6(a2);
    o->f94 = 0.0f;
    o->f98 = 0.0f;
    o->f9c = 0.0f;
    return o;
}
