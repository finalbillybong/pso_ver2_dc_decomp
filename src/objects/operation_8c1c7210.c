#include "src/include/classes/TAdLoadQuest.h"
typedef struct S_vv2_0 S_vv2_0;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int create_effect_7a48(void *, int, int);
TAdLoadQuest *TAdLoadQuest_ctor_8c1c7210(TAdLoadQuest *o, int a1)
{
    TAdLoadQuest **home = &o;
    int v1;
    int v2;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c2767e0;
    o->tag = (int)(*(int *)0x8c328e30);
    o->size = 0x30;
    v1 = (int)0;
    while (4 > v1) {
        v2 = (int)(v1 << 2);
        t1 = create_effect_7a48((void *)(v1 * 0xc + 0x8c328e44), (int)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((void *)0x8c328e34)))), 1);
        *(int *)((char *)((char *)o + 0x20) + (v2)) = (int)(t1);
        v1 = (int)(v1 + 1);
    }
    return o;
}
