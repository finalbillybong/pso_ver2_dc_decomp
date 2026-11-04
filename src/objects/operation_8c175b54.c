#include "src/include/classes/TItemWpnSpreadNeedle.h"
extern void call_8c075398(TItemWpnSpreadNeedle *, int, int);
extern void operation_1abd98();
extern void operation_8c1c635c();
extern void operation_8c1c6580();
TItemWpnSpreadNeedle *TItemWpnSpreadNeedle_ctor_8c175b54(TItemWpnSpreadNeedle *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c2706a4;
    o->tag = (int)(*(int *)0x8c3192c8);
    o->size = 0x234;
    o->f1fc |= 2;
    o->f230 = operation_8c1c635c;
    o->f228 = operation_8c1c6580;
    o->f22c = operation_1abd98;
    return o;
}
