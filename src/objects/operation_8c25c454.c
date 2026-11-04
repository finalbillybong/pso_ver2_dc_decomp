#include "src/include/classes/TObjWarnChime.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjWarnChime *TObjWarnChime_ctor_8c25c454(TObjWarnChime *o, int a1)
{
    int v1;
    int v2;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c281be0;
    o->tag = (int)(*(int *)0x8c340430);
    o->size = 0x3c;
    o->f24 = -1;
    o->f28 = 0;
    v1 = (int)((char *)o + 0x2c);
    v2 = (int)0;
    while (4 > v2) {
        *(float *)((char *)((char *)v1 + 0x0) + (v2 << 2)) = 1.0f;
        v2 = (int)(v2 + 1);
    }
    o->f20 = 0;
    return o;
}
