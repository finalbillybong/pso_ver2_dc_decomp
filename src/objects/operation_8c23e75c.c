#include "src/include/classes/TItemWpnNyoibou.h"
extern void call_8c075398(void);
TItemWpnNyoibou *TItemWpnNyoibou_ctor_8c23e75c(TItemWpnNyoibou *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b540;
    o->tag = (int)(*(int *)0x8c33a770);
    o->size = 0x240;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1e2 = 4;
    o->f1e3 = 3;
    o->f23c = 1.0f;
    o->f238 = 1.0f;
    o->f234 = 1.0f;
    return o;
}
