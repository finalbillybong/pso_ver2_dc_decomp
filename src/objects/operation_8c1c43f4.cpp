#include "src/include/object_vtable.h"
#include "src/include/classes/TObjRaderHideCol.h"
extern int g_8c328a94;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjRaderHideCol *);
extern "C" TObjRaderHideCol *TObjRaderHideCol_ctor_8c1c43f4(TObjRaderHideCol *o, int a1, int a2)
{
    TObjRaderHideCol **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c275c4c;
    o->tag = (int)(g_8c328a94);
    o->size = 0x9c;
    o->v6(a2);
    o->f94 = o->f6c;
    o->f98 = 0;
    o->f04 |= 0x10;
    return o;
}
