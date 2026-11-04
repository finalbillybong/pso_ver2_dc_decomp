#include "src/include/classes/TItemWpnDragonClaw.h"
typedef struct Frame Frame;
typedef struct TItemWpnDragonClaw_p13c TItemWpnDragonClaw_p13c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_64 S_vv1_64;
struct Frame {
    char unknown0[0xc];
};
struct S_vv1 {
    char unknown0[0x64];
    S_vv1_64 *f64;
};
extern "C" int call_8c1aaabc(int);
extern "C" int operation_8c075894(void *, void *, int, int);
extern "C" void create_effect_b0fac(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnDragonClaw_v49_8c23c7cc(TItemWpnDragonClaw *o)
{
    Frame frame;
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
        t3 = operation_8c075894((void *)o, (void *)(o->f13c), 0, (int)(&frame));
        if (t3 == 0) {
            return;
        }
        v1 = (S_vv1 *)o->f13c;
        create_effect_b0fac((void *)v1, (void *)(&frame), (void *)(v1->f64), (void *)((int)o->f214 + 2));
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
