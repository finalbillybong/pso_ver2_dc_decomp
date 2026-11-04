#include "src/include/classes/TObjTank.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0xc];
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
extern int g_8c2febe4;
extern void operation_8c051eb8(void *);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
TObjTank *TObjTank_ctor_8c0800ec(TObjTank *o, int a1, Arg2 *a2)
{
    TObjTank **home = &o;
    (void)home;
    operation_8c051eb8((void *)o);
    o->dispatch = (void *)0x8c264304;
    o->tag = (int)(g_8c2febe4);
    o->size = 0xe4;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a2->f0c;
    *(Vector3 *)&o->f60 = *(Vector3 *)&a2->f18;
    *(Vector3 *)&o->f6c = *(Vector3 *)&a2->f24;
    copy_actor_records((void *)o, (void *)((void *)0x8c2febb8), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    return o;
}
