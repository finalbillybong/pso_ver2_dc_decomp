#include "src/include/object_vtable.h"
#include "src/include/classes/TObjRaderCol.h"
extern int g_8c328a90;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjRaderCol *);
extern "C" TObjRaderCol *TObjRaderCol_ctor_8c1c41cc(TObjRaderCol *o, int a1, int a2)
{
    TObjRaderCol **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275c8c;
    o->tag = (int)(g_8c328a90);
    o->size = 0xa4;
    o->v6(a2);
    o->f94 = o->f6c;
    o->f98 = (int)(o->f88);
    o->f9c = 0;
    o->fa0 = 3;
    o->f04 |= 0x10;
    return o;
}
