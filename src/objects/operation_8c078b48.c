#include "src/include/classes/TObjBoss1Floor.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjBoss1Floor *TObjBoss1Floor_ctor_8c078b48(TObjBoss1Floor *o, int a1)
{
    int v1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c263e1c;
    o->tag = (int)(*(int *)0x8c2fd9a8);
    o->size = 0x3c;
    o->f20 = 0.0f;
    o->f24 = 0.0f;
    o->f28 = 0.0f;
    v1 = (int)0;
    while (4 > v1) {
        *(int *)((char *)((char *)o + 0x2c) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    return o;
}
