#include "src/include/classes/TItemWpnBindMechGun.h"
extern "C" int call_8c1aaabc(int);
extern "C" void operation_1abd98_8c1ac468();
extern "C" void operation_1ac120();
extern "C" void TItemWpnBindMechGun_v49_8c23a6e0(TItemWpnBindMechGun *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 == 1) {
            o->f22c = (void *)operation_1abd98_8c1ac468;
            o->f228 = (void *)0;
            goto L_8c23a732;
        }
        o->f22c = (void *)operation_1ac120;
        o->f228 = (void *)(void *)0x8c1c6058;
    } else {
        o->f22c = (void *)operation_1ac120;
        o->f228 = (void *)(void *)0x8c1c6058;
    }
L_8c23a732:;
    t3 = o->v48(((char *)o + 0x234), 0, 0, 1);
    if (t3 != 0) {
        o->v48(((char *)o + 0x240), 0, 0, 0);
        return;
    }
    o->v48(((char *)o + 0x240), 0, 0, 1);
}
