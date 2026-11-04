#include "src/include/classes/TItemReverseTech.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513420 S_g8c513420;
extern char g_8c3404e0[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemReverseTechPart1_ctor_8c25ce38(int, TItemReverseTech *, void *);
extern void call_8c225f04(int, TItemReverseTech *);
extern void call_8c1003d0(void *);
TItemReverseTech *TItemReverseTech_ctor_8c25cc88(TItemReverseTech *o, int a1)
{
    TItemReverseTech **home = &o;
    int t1;
    int t2;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281c6c;
    o->tag = *(int *)0x8c3404a0;
    o->size = 0x2c;
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x38);
    if (t1 != 0) {
        TItemReverseTechPart1_ctor_8c25ce38(t1, o, (void *)(*(S_g8c513420 **)0x8c513420));
    }
    o->f24 = t1;
    o->f28 = 0;
    t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x1994);
    if (t2 != 0) {
        call_8c225f04(t2, o);
    }
    call_8c1003d0((void *)((g_8c3404e0 + 0x1d)));
    return o;
}
