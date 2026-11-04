#include "src/include/classes/TItemWpnYasuShotGun.h"
extern void call_8c075398(void);
TItemWpnYasuShotGun *TItemWpnYasuShotGun_ctor_8c24f734(TItemWpnYasuShotGun *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27e6d8;
    o->tag = (int)(*(int *)0x8c33f718);
    o->size = 0x244;
    o->f224 = 3;
    o->f22c = 0;
    o->f228 = (void *)0x8c1c6058;
    o->f220 = 20.0f;
    o->f234 = 0;
    o->f240 = 0.0f;
    o->f23c = 0.0f;
    o->f238 = 0.0f;
    return o;
}
