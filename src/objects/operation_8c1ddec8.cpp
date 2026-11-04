#include "src/include/object_vtable.h"
#include "src/include/classes/TOButterflyDF.h"
typedef struct S_g8c4e3060 S_g8c4e3060;
typedef struct S_g8c4e3064 S_g8c4e3064;
typedef struct TODragonfly_pf4 TODragonfly_pf4;
struct S_g8c4e3060 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct TODragonfly_pf4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c32afa8;
extern S_g8c4e3060 *g_8c4e3060;
extern S_g8c4e3064 *g_8c4e3064;
extern "C" void TODragonfly_ctor_8c1318a4(TOButterflyDF *);
extern "C" TOButterflyDF *TOButterflyDF_ctor_8c1ddec8(TOButterflyDF *o, int a1)
{
    TOButterflyDF **home = &o;
    (void)home;
    TODragonfly_ctor_8c1318a4(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2773ec;
    o->tag = (int)(g_8c32afa8);
    o->size = 0x138;
    o->v6(a1);
    o->f38 = (int)(g_8c4e3060->f04);
    if (!(o->f90 >= 0)) {
        o->f90 = 0;
    } else {
        if (o->f90 >= 2) {
            o->f90 = 2;
        }
    }
    o->f28 = (int)(*(int *)((char *)((char *)g_8c4e3064 + 0x0) + (o->f90 << 2)));
    o->ff4 = (TODragonfly_pf4 *)g_8c4e3060->f08;
    o->fec = (float)(unsigned int)o->ff4->f04 - 1.0f;
    o->ff0 = 1.0f;
    o->ff8 = 500.0f;
    o->ffc = 10.0f;
    o->fe4 = 0;
    return o;
}
