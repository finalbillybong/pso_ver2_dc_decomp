#include "src/include/classes/TObjEnemy.h"
typedef struct S_x2576 S_x2576;
struct S_x2576 {
    float f00;
};
extern void call_8c043418(TObjEnemy *);
TObjEnemy *TObjEnemy_ctor_8c012008(TObjEnemy *o)
{
    int v1;
    int v4;
    call_8c043418(o);
    o->dispatch = (void *)0x8c260fd8;
    o->tag = (int)(*(int *)0x8c2e2c18);
    o->size = 0x390;
    o->f354 = 0xffff;
    o->f384 = 0;
    o->f388 = 0;
    o->f38c = 0;
    o->f350 = 0;
    o->f35c = 0;
    o->f360 = 0;
    o->f364 = 0;
    o->f368 = 0;
    o->f36c = 0;
    o->f356 = 0;
    o->f358 = 0;
    o->f35a = o->f330;
    v4 = (int)0;
    goto L_8c012078;
    v1 = (int)0;
L_8c01206c:;
    ((S_x2576 *)((char *)(int *)((char *)o + 0x370) + (v1 << 2)))->f00 = 0.0f;
    v4 = (int)(v1 + 1);
L_8c012078:;
    v1 = (int)v4;
    if (5 > v4) {
        goto L_8c01206c;
    }
    o->f34 |= 0x20000000;
    o->fe8 |= 1;
    return o;
}
