#include "src/include/classes/TObjBoss2Dust.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    Vector3 f00;
};
extern void TObject_ctor_8c0330e4(void *, void *);
TObjBoss2Dust *TObjBoss2Dust_ctor_8c1b09e8(TObjBoss2Dust *o, int a1, Arg2 *a2)
{
    char *v1;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c274be4;
    o->tag = (int)(*(int *)0x8c326114);
    o->size = 0x34;
    *(Vector3 *)&o->f28 = *(Vector3 *)&a2->f00;
    o->f20 = 0;
    v1 = (char *)*(int *)0x8c4e23a0;
    if (++*(int *)0x8c4e23a0 >= 0xa) {
        *(int *)0x8c4e23a0 = 0;
    }
    o->f24 = (int)(v1);
    return o;
}
