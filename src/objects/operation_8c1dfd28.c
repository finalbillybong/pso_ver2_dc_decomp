#include "src/include/classes/TWindowKeyBoardHard.h"
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c1e0000(void *);
TWindowKeyBoardHard *TWindowKeyBoardHard_ctor_8c1dfd28(TWindowKeyBoardHard *o, int a1)
{
    TWindowKeyBoardHard **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32b23c));
    o->dispatch = (void *)0x8c277454;
    o->tag = (int)(*(int *)0x8c32b238);
    o->size = 0x80;
    o->f68 = 0;
    o->f7c = a1;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = 7;
    o->f78 = 3;
    operation_8c1e0000((void *)o);
    return o;
}
