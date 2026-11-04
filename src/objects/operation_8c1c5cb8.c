#include "src/include/classes/TItemEffHeaven.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TItemEffHeaven *TItemEffHeaven_ctor_8c1c5cb8(TItemEffHeaven *o, int a1, int a2, int a3, int a4)
{
    int v1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276684;
    o->tag = *(int *)0x8c328c98;
    o->size = 0x50;
    o->f20 = a3;
    o->f24 = 0;
    o->f40 = a2;
    o->f28 = a4;
    o->f4c = 0.0f;
    o->f48 = 0.0f;
    o->f44 = 0.0f;
    o->f2c = 0;
    v1 = (int)0;
    while (v1 != 3) {
        *(int *)((char *)((char *)o + 0x30) + (v1 << 2)) = 0;
        v1 = (int)(v1 + 1);
    }
    o->f04 |= 0x10;
    return o;
}
