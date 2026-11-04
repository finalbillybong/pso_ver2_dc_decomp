#include "src/include/classes/TItemWpnClub.h"
extern void call_8c075398(void);
TItemWpnClub *TItemWpnClub_ctor_8c23b478(TItemWpnClub *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a17c;
    o->tag = (int)(*(int *)0x8c33a4d8);
    o->size = 0x240;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 4;
    o->f1e3 = 5;
    o->f23c = 1.0f;
    o->f238 = 1.0f;
    o->f234 = 1.0f;
    return o;
}
