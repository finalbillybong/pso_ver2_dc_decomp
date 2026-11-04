#include "src/include/classes/TCineCtrl.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TCineCtrl *TCineCtrl_ctor_8c1af9c0(TCineCtrl *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c274b68;
    o->tag = (int)(*(int *)0x8c325fe8);
    o->size = 0x34;
    o->f20 = 0.0f;
    o->f24 = 0.0f;
    o->f28 = 0;
    o->f2c = 0;
    *(TCineCtrl **)0x8c4e2340 = o;
    return o;
}
