#include "src/include/classes/TTecPlayerInfluence.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TTecPlayerInfluence_p20 TTecPlayerInfluence_p20;
typedef struct TTecPlayerInfluence_pf8 TTecPlayerInfluence_pf8;
typedef struct Arg2 Arg2;
struct Arg2 {
    Vector3 f00;
};
struct TTecPlayerInfluence_p20 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
extern void TEffect_ctor_8c0a0058(TTecPlayerInfluence *);
extern int heap_alloc_8c122700(void *, int);
extern void call_8c051eb8(int, TTecPlayerInfluence *);
extern void copy_actor_records(void *, void *, int);
TTecPlayerInfluence *TTecPlayerInfluence_ctor_8c0b6a74(TTecPlayerInfluence *o, int a1, Arg2 *a2, int a3)
{
    TTecPlayerInfluence **home = &o;
    int t1;
    (void)home;
    TEffect_ctor_8c0a0058(o);
    o->dispatch = (void *)0x8c266114;
    o->tag = *(int *)0x8c305290;
    o->size = 0xfc;
    o->fc4 = 0xffff;
    o->f24 = a2->f00;
    o->fbe = a3;
    if (o->fbe < 0) {
        o->fbe = 0;
    } else {
        if (o->fbe >= 0x1e) {
            o->fbe = 0x1e;
        } else {
            o->fbe = a3;
        }
    }
    if (a3 < 0) {
        o->fbc = 0;
    } else {
        if (a3 >= 0xf) {
            o->fbc = 0xe;
        } else {
            o->fbc = a3;
        }
    }
    o->fc0 = 0;
    o->f68 = 3.0f;
    o->f74 = 90.0f;
    o->f40 = 1.0f;
    o->f44 = 1.0f;
    o->f48 = 1.0f;
    o->f20 = (TTecPlayerInfluence_p20 *)a1;
    o->f30 = 0.2f;
    o->f34 = 1.0f;
    o->f38 = 1.0f;
    o->f3c = 1.0f;
    o->fb8 = 0;
    o->fcc = 0.0f;
    o->fd0 = 0.0f;
    o->fd4 = 0.0f;
    o->fd8 = 10.0f;
    o->fdc = 1.0f;
    o->fe0 = 0;
    o->fe4 = 0x80207;
    t1 = heap_alloc_8c122700(*(S_g8c4d97e0 **)0x8c4d97e0, 0xe4);
    if (t1 != 0) {
        call_8c051eb8(t1, o);
    }
    o->resource = (TTecPlayerInfluence_pf8 *)t1;
    if (o->resource != 0) {
        copy_actor_records(o->resource, &o->fcc, 1);
    }
    o->fc8 = 1;
    if (o->f20 != 0) {
        if ((unsigned int)4 > (unsigned int)o->f20->f20) {
            if (((o->f20->f34 & 0x2000000)) != 0) {
                o->fc8 = 0;
            }
        }
    }
    return o;
}
