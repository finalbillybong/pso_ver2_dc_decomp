#include "src/include/classes/TItemWpnBasyoSen2.h"
extern void call_8c075398(TItemWpnBasyoSen2 *, int, int);
extern void TItemShootBasyoSen2_create_8c248e3c();
TItemWpnBasyoSen2 *TItemWpnBasyoSen2_ctor_8c248d14(TItemWpnBasyoSen2 *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27d074;
    o->tag = (int)(*(int *)0x8c33b120);
    o->size = 0x240;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f224 = 1;
    o->f22c = TItemShootBasyoSen2_create_8c248e3c;
    o->f220 = 10.0f;
    return o;
}
