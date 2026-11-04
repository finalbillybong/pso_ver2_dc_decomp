#include "src/include/classes/TBoss2LaserLight.h"
typedef struct TBoss2LaserLight_p44 TBoss2LaserLight_p44;
extern int g_8c319a68;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int call_8c014d00(int);
extern void operation_8c014f28(void *);
extern void call_8c014f34(void *, void *);
extern void copy_pair_8c014f10(void *, void *);
TBoss2LaserLight *TBoss2LaserLight_ctor_8c185ab8(TBoss2LaserLight *o, int a1, int a2)
{
    TBoss2LaserLight **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c272090;
    o->tag = (int)(g_8c319a68);
    o->size = 0x48;
    o->f20 = a2;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 1.0f;
    o->f30 = 1.0f;
    o->f34 = 0.2f;
    o->f38 = 2.0f;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    t1 = call_8c014d00(0);
    o->f44 = (TBoss2LaserLight_p44 *)t1;
    if (o->f44 == 0) {
        o->f04 |= 1;
        return o;
    }
    operation_8c014f28((void *)(o->f44));
    call_8c014f34((void *)(o->f44), (void *)(&o->f2c));
    copy_pair_8c014f10((void *)(o->f44), (void *)(&o->f3c));
    return o;
}
