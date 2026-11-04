#include "src/include/classes/TBoss2Mine.h"
extern int g_8c3174d4;
extern void TObjEneDD_ctor_8c059bc0(void *);
extern int operation_8c143048(void);
extern void operation_8c05a0b4(void *, void *);
extern void call_8c1656bc(TBoss2Mine *, int);
TBoss2Mine *TBoss2Mine_ctor_8c16606c(TBoss2Mine *o, int a1, int a2, int a3)
{
    int t1;
    {
        TBoss2Mine *self = o;
        TBoss2Mine **home = &self;
        (void)home;
        TObjEneDD_ctor_8c059bc0((void *)o);
        self->dispatch = (void *)0x8c26fcec;
        self->tag = (int)(g_8c3174d4);
        self->size = 0x40c;
        t1 = operation_8c143048();
        if (t1 != 0) {
            operation_8c05a0b4((void *)self, (void *)t1);
        }
        self->f20 = a2;
        self->f30 = a3;
        call_8c1656bc(self, 0);
    }
    o->dispatch = (void *)0x8c26fb14;
    return o;
}
