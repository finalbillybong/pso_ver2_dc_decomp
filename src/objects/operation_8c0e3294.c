#include "src/include/classes/TWindowSimpleStatus.h"
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
extern int g_8c307768;
extern S_g8c4e2ba4 *g_8c4e2ba4;
extern void operation_8c0db20c(void *, int, int);
TWindowSimpleStatus *TWindowSimpleStatus_ctor_8c0e3294(TWindowSimpleStatus *o, int a1)
{
    int v1;
    operation_8c0db20c((void *)o, (int)((void *)0x8c307824), (int)g_8c4e2ba4);
    o->dispatch = (void *)0x8c2677dc;
    o->tag = (int)(g_8c307768);
    o->size = 0x84;
    o->f7c = a1;
    o->f80 = 0;
    o->f60 = -1.0f;
    v1 = (int)0;
    while (5 > v1) {
        *(int *)((char *)((char *)o + 0x68) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
