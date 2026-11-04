#include "src/include/classes/TObjControl.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TObjControl *TObjControl_ctor_8c0130ac(TObjControl *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c260fbc;
    o->tag = (int)(*(int *)0x8c2e2c1c);
    o->size = 0x24;
    o->f20 = 2;
    o->f22 = 0;
    return o;
}
