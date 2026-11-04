#include "src/include/object_vtable.h"
#include "src/include/classes/TObjSinBoard.h"
extern int g_8c338130;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjSinBoard *);
extern "C" TObjSinBoard *TObjSinBoard_ctor_8c22a930(TObjSinBoard *o, int a1, int a2)
{
    TObjSinBoard **home = &o;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c278d58;
    o->tag = (int)(g_8c338130);
    o->size = 0x94;
    o->v6(a2);
    return o;
}
