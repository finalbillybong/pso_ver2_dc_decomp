#include "src/include/classes/TBoss2Fin.h"
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern int g_8c324ef8;
extern void TObjEZRopeBase_ctor_8c0bbb5c(TBoss2Fin *);
extern void call_8c1aacac(TBoss2Fin *);
extern void call_8c0bbbf0(TBoss2Fin *, void *, void *, void *);
TBoss2Fin *TBoss2Fin_ctor_8c1aabb4(TBoss2Fin *o, int a1, int a2, int a3)
{
    TBoss2Fin **home = &o;
    S_vv2 *v2;
    int v1;
    (void)home;
    TObjEZRopeBase_ctor_8c0bbb5c(o);
    o->dispatch = (void *)0x8c274774;
    o->tag = (int)(g_8c324ef8);
    o->size = 0x8c;
    o->f84 = a2;
    o->f88 = a3;
    v1 = (int)0;
    v2 = (S_vv2 *)((char *)o + 0x54);
    while (2 > v1) {
        v2->f00 = 10.0f;
        v2->f04 = 0.0f;
        v2->f08 = 0.0f;
        v2->f0c = 0.0f;
        v2 = (S_vv2 *)((char *)v2 + 16);
        v1 = (int)(v1 + 1);
    }
    v2->f00 = -1.0f;
    call_8c1aacac(o);
    call_8c0bbbf0(o, (void *)((void *)0x8c4e1a80), (void *)(((char *)o + 0x34)), (void *)(((char *)o + 0x54)));
    return o;
}
