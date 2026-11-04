#include "src/include/classes/TMedicalCenterMes.h"
extern void TObject_ctor_8c0330e4(void *, void *);
TMedicalCenterMes *TMedicalCenterMes_ctor_8c10ae08(TMedicalCenterMes *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c269a54;
    o->tag = (int)(*(int *)0x8c30bc6c);
    o->size = 0x24;
    o->f20 = 0;
    *(int *)0x8c4d7c84 = 1;
    return o;
}
