#include "src/include/classes/TItemWpnMagicSaber.h"
typedef struct Frame Frame;
typedef struct TItemWpnMagicSaber_p13c TItemWpnMagicSaber_p13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
struct Frame {
    char unknown0[0xc];
};
struct TItemWpnMagicSaber_p13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern "C" int call_8c1aaabc(void *);
extern "C" int call_8c075894(TItemWpnMagicSaber *, TItemWpnMagicSaber_p13c *, int, Frame *);
extern "C" void create_effect_b0fac(void *, void *, void *, void *);
extern "C" void call_8c076580(TItemWpnMagicSaber *);
extern "C" void TItemWpnMagicSaber_v49_8c23e378(TItemWpnMagicSaber *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        t3 = call_8c075894(o, (TItemWpnMagicSaber_p13c *)(o->f13c), 1, (Frame *)((&frame)));
        if (t3 == 0) {
            return;
        }
        create_effect_b0fac((void *)(o->f13c), (void *)(&frame), (void *)(o->f13c->f64), (void *)5);
        return;
    }
    call_8c076580(o);
}
