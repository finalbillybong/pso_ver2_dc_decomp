#include "src/include/classes/TBoss1DragonEffBullet.h"
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float normalize_vector_checked(void *);
extern void play_se_8c05fbf8(int, void *, int, int);
TBoss1DragonEffBullet *TBoss1DragonEffBullet_ctor_8c07bdc8(TBoss1DragonEffBullet *o, int a1, Arg2 *a2, Arg3 *a3)
{
    TBoss1DragonEffBullet **home = &o;
    float t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c26412c;
    o->tag = (int)(*(int *)0x8c2fe7d0);
    o->size = 0x4c;
    o->f20 = a2->f00;
    o->f2c = a3->f00;
    vector_sub_in_place_8c37f6f0((void *)(&o->f2c), (void *)(&o->f20));
    t1 = normalize_vector_checked((void *)(&o->f2c));
    o->f44 = t1;
    o->f40 = 0.0f;
    o->f38 = 0;
    o->f3c = 0;
    o->f48 = 0;
    play_se_8c05fbf8(0x3000b, (void *)(&o->f20), 0, 0);
    return o;
}
