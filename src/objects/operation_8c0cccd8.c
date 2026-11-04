#include "src/include/classes/TObjBoss1MokoHill_SoloM.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    Vector3 f00;
};
extern int g_8c3069ac;
extern Arg2 *g_8c46fa68;
extern int g_8c46fa6c;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c05bbf8(void);
TObjBoss1MokoHill_SoloM *TObjBoss1MokoHill_SoloM_ctor_8c0cccd8(TObjBoss1MokoHill_SoloM *o, int a1, Arg2 *a2, int a3)
{
    TObjBoss1MokoHill_SoloM **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c266d20;
    o->tag = (int)(g_8c3069ac);
    o->size = 0x44;
    o->f20 = 0;
    g_8c46fa68 = a2;
    g_8c46fa6c = a3;
    *(Vector3 *)&o->f24 = *(Vector3 *)&a2->f00;
    o->f30 = 0.0f;
    o->f34 = -30.0f;
    o->f38 = -30.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        o->f3c = 1;
    } else {
        o->f3c = 0;
    }
    o->f40 = 0;
    return o;
}
