#include "src/include/classes/TItemWpnTwinGun.h"
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c076af4(TItemWpnTwinGun *, void *, int, float);
extern "C" void operation_1abd98_8c1ac468();
extern "C" void operation_1ac120();
extern "C" void TItemWpnTwinGun_v49_8c240b90(TItemWpnTwinGun *o)
{
    int v2;
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        v1 = (S_vv1 *)((int)o->f13c + 0x754);
        v2 = (int)0;
        while (v2 != 2) {
            v1->f18 += 1;
            v2 = (int)(v2 + 1);
        }
        o->f22c = (void *)operation_1abd98_8c1ac468;
        o->f228 = (void *)(void *)0x8c1c6058;
        call_8c076af4(o, (void *)(((char *)o + 0x234)), 1, 3.0f);
        call_8c076af4(o, (void *)(((char *)o + 0x240)), 0, 3.0f);
        return;
    }
    o->f22c = (void *)operation_1ac120;
    o->f228 = (void *)(void *)0x8c1c6058;
    t3 = o->v48(((char *)o + 0x234), 0, 0, 1);
    if (t3 != 0) {
        o->v48(((char *)o + 0x240), 0, 0, 0);
        return;
    }
    o->v48(((char *)o + 0x240), 0, 0, 1);
}
