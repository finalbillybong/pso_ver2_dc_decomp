#include "src/include/object_vtable.h"
#include "src/include/classes/TObjBgmCol.h"
typedef struct TObjBgmCol_p88 TObjBgmCol_p88;
extern "C" void TObjectShared_ctor_8c01d1ec(TObjBgmCol *);
extern "C" int call_8c18e8a0(void *, int);
extern "C" TObjBgmCol *TObjBgmCol_ctor_8c1a9c84(TObjBgmCol *o, int a1, int a2)
{
    TObjBgmCol **home = &o;
    int t1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274690;
    o->tag = (int)(*(int *)0x8c324d7c);
    o->size = 0xa4;
    o->v6(a2);
    o->f94 = 1;
    o->f9c = o->f6c;
    {
        TObjBgmCol *base = o;
        t1 = call_8c18e8a0((void *)(((TObjBgmCol *)base)->f88), 5);
        ((TObjBgmCol *)base)->fa0 = (int)t1;
    }
    if (!(o->fa0 >= 0)) {
        o->fa0 = 0;
    }
    return o;
}
