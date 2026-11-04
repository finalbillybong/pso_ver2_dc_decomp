#include "src/include/object_vtable.h"
#include "src/include/classes/TObjInfoCol.h"
extern int g_8c31d488;
extern "C" void operation_8c051eb8(void *);
extern "C" TObjInfoCol *TObjInfoCol_ctor_8c1a16f0(TObjInfoCol *o, int a1, int a2)
{
    TObjInfoCol **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c272ec8;
    o->tag = (int)(g_8c31d488);
    o->size = 0xe8;
    o->v6(a2);
    o->fe4 = o->f6c;
    return o;
}
