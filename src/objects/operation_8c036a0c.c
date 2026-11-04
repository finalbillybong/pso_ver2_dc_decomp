#include "src/include/classes/TGameProtocol.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int g_8c2ed874;
extern int g_8c4627c0;
extern TGameProtocol *g_8c4627c4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
TGameProtocol *TGameProtocol_ctor_8c036a0c(TGameProtocol *o, int a1)
{
    TGameProtocol **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c2615b8;
    o->tag = (int)(g_8c2ed874);
    o->size = 0x24;
    g_8c4627c4 = o;
    o->f20 = 0;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        TObject_ctor_8c0330e4((void *)t1, (void *)o);
    }
    g_8c4627c0 = (int)(t1);
    return o;
}
