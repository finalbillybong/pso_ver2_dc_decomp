#include "src/include/object_vtable.h"
#include "src/include/classes/TShopGenerator.h"
typedef struct S_g8c44be98 S_g8c44be98;
extern int g_8c30bd3c;
extern S_g8c44be98 *g_8c44be98;
extern "C" void TObjectShared_ctor_8c01d1ec(TShopGenerator *, void *);
extern "C" TShopGenerator *TShopGenerator_ctor_8c10b2b4(TShopGenerator *o, int a1)
{
    TShopGenerator **home = &o;
    int v1;
    (void)home;
    TObjectShared_ctor_8c01d1ec(o, g_8c44be98);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269a98;
    o->tag = (int)(g_8c30bd3c);
    o->size = 0x9c;
    o->v6(a1);
    o->f94 = 0;
    o->f98 = 5;
    v1 = (int)o->f88;
    if (!(v1 >= 0)) {
        o->f04 |= 1;
        return o;
    }
    if (v1 > 6) {
        o->f04 |= 1;
        return o;
    }
    return o;
}
