#include "src/include/classes/TItemEffLavis.h"
extern void TItemShootModel_ctor_8c1abe00(void *, void *, void *, void *);
extern void operation_193300(int, void *);
extern void operation_193324(int, void *);
TItemEffLavis *TItemEffLavis_ctor_8c1c616c(TItemEffLavis *o, int a1, int a2, int a3)
{
    TItemEffLavis **home = &o;
    (void)home;
    TItemShootModel_ctor_8c1abe00((void *)o, (void *)a1, (void *)a2, (void *)a3);
    o->vtable = (void *)0x8c2766bc;
    o->tag = (int)(*(int *)0x8c328cc8);
    o->size = 0x64;
    operation_193300(1, (void *)(((char *)o + 0x5c)));
    operation_193324(1, (void *)(((char *)o + 0x60)));
    return o;
}
