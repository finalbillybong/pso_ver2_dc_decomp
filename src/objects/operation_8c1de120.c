#include "src/include/classes/TWindowKeyBoardSoft.h"
extern void initialize_base_8c0db1d0(void *, int);
extern void operation_8c1deb8c(void *);
TWindowKeyBoardSoft *TWindowKeyBoardSoft_ctor_8c1de120(TWindowKeyBoardSoft *o, int a1)
{
    TWindowKeyBoardSoft **home = &o;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32b00c));
    o->dispatch = (void *)0x8c277434;
    o->tag = (int)(*(int *)0x8c32b008);
    o->size = 0x74;
    o->f68 = 0;
    o->f6c = 0;
    o->f6d = 0;
    o->f6e = 0;
    o->f6f = 1;
    o->f70 = a1;
    operation_8c1deb8c((void *)o);
    return o;
}
