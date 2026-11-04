#include "src/include/classes/TObjComputer.h"
typedef struct S_g8c469ca0 S_g8c469ca0;
typedef struct S_g8c469ca0_42c S_g8c469ca0_42c;
struct S_g8c469ca0 {
    char unknown0[0x42c];
    S_g8c469ca0_42c *f42c;
};
extern void TObjMesBase_ctor_8c1ab100(void *, int, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
TObjComputer *TObjComputer_ctor_8c085d00(TObjComputer *o, int a1, int a2)
{
    TObjComputer **home = &o;
    (void)home;
    TObjMesBase_ctor_8c1ab100((void *)o, a1, a2);
    o->dispatch = (void *)0x8c264e88;
    o->tag = (int)(*(int *)0x8c2ffa9c);
    o->size = 0xf0;
    if (!(o->f8c >= 0)) {
        o->f8c = 0;
    }
    if (o->f8c > 1) {
        o->f8c = 1;
    }
    if (*(int *)0x8c469ca0 != 0) {
        o->f38 = (int)(*(int *)((char *)((char *)(*(S_g8c469ca0 **)0x8c469ca0)->f42c + 0x8) + (*(short *)((char *)0x8c284f78 + (o->f8c << 1)) << 4)));
    } else {
        o->f04 |= 1;
        return o;
    }
    copy_actor_records((void *)o, (void *)((void *)0x8c2ffa70), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    o->fd8 = 3;
    return o;
}
