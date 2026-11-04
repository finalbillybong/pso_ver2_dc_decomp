#include "src/include/classes/TObject.h"
extern int g_8c32ae50;
extern int g_8c4e2f80;
extern int g_8c4e2f84;
extern int g_8c4e2f88;
extern TObject *g_8c4e2f8c;
extern void TObject_ctor_8c0330e4(void *, void *);
TObject *operation_8c1dbb54(TObject *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c277318;
    o->tag = (int)(g_8c32ae50);
    o->size = 0x20;
    g_8c4e2f80 = 0;
    g_8c4e2f84 = 0;
    g_8c4e2f88 = 0;
    g_8c4e2f8c = o;
    return o;
}
