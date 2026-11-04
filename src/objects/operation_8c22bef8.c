#include "src/include/classes/TItemTexLoad.h"
typedef struct S_g8c506304 S_g8c506304;
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c38668e(void *, void *, void *, int);
extern int operator_new_8c18de4c(int);
TItemTexLoad *TItemTexLoad_ctor_8c22bef8(TItemTexLoad *o, int a1)
{
    TItemTexLoad **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278e30;
    o->tag = *(int *)0x8c338310;
    o->size = 0x44;
    call_8c38668e(((char *)o + 0x30), ((char *)o + 0x38), *(S_g8c506304 **)0x8c506304, 1);
    o->f3c = 0;
    o->f34 = 1;
    o->f28 = -1;
    o->f24 = 0;
    t1 = operator_new_8c18de4c(0x4800);
    o->f20 = t1;
    return o;
}
