#include "src/include/classes/TItemWpnOnSpreadNeedle.h"
extern void operation_8c241158(void *);
extern void operation_1abd98();
extern void operation_8c1c635c();
extern void operation_8c1c6580();
TItemWpnOnSpreadNeedle *TItemWpnOnSpreadNeedle_ctor_8c252a00(TItemWpnOnSpreadNeedle *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27fc58;
    o->tag = (int)(*(int *)0x8c33fa70);
    o->size = 0x234;
    o->f1fc |= 2;
    o->f230 = operation_8c1c635c;
    o->f228 = operation_8c1c6580;
    o->f22c = operation_1abd98;
    return o;
}
