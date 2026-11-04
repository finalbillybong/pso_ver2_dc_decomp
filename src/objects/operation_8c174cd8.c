#include "src/include/classes/TBoss2Joint.h"
extern int g_8c319288;
extern void TObjEneDD_ctor_8c059bc0(void *);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c174d68(TBoss2Joint *);
TBoss2Joint *TBoss2Joint_ctor_8c174cd8(TBoss2Joint *o, int a1, int a2, int a3, int a4, int a5, int a6)
{
    TBoss2Joint **home = &o;
    (void)home;
    TObjEneDD_ctor_8c059bc0((void *)o);
    o->dispatch = (void *)0x8c2702dc;
    o->tag = (int)(g_8c319288);
    o->size = 0x3d8;
    operation_8c05a0b4((void *)o, (void *)a1);
    o->f20 = a2;
    o->f30 = a3;
    o->f3ac = a4;
    o->f3b4 = a5;
    o->f3b8 = a6;
    call_8c174d68(o);
    return o;
}
