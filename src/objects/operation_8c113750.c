#include "src/include/classes/TLazerFenceSw.h"
typedef struct TOKey_p90 TOKey_p90;
extern int g_8c30ff90;
extern void TOKey_ctor_8c112e74(void *);
extern void initialize_context_blend_8c1f1430(void *);
extern void call_8c112f40(TLazerFenceSw *, int);
extern int call_8c18e8a0(void *, int);
extern void copy_actor_records(void *, void *, int);
extern void attach_and_insert_object(void *);
extern void call_8c1f156c(void *);
TLazerFenceSw *TLazerFenceSw_ctor_8c113750(TLazerFenceSw *o, int a1, int a2)
{
    TLazerFenceSw **home = &o;
    int t1;
    (void)home;
    TOKey_ctor_8c112e74((void *)o);
    o->dispatch = (void *)0x8c269cb4;
    initialize_context_blend_8c1f1430((void *)(((char *)o + 0x124)));
    o->tag = (int)(g_8c30ff90);
    o->size = 0x144;
    call_8c112f40(o, a2);
    if (!((int)(o->f90) >= 0)) {
        o->f90 = (TOKey_p90 *)0;
    }
    {
        TLazerFenceSw *base = o;
        t1 = call_8c18e8a0((void *)(base->f90), 4);
        base->f11c = *(short *)((char *)0x8c285d88 + (t1 << 1)) & 0xffff;
    }
    o->ff0 = 2.0f;
    o->f120 = 0.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c30ff64), 1);
    o->f34 |= 0x40000000;
    attach_and_insert_object((void *)o);
    call_8c1f156c((void *)(((char *)o + 0x124)));
    o->f140 = 290.0f;
    return o;
}
