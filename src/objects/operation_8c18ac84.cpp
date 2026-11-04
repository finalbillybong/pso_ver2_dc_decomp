#include "src/include/classes/TItemWpnCaduseus.h"
typedef struct Frame Frame;
typedef struct TItemWpnCaduseus_p13c TItemWpnCaduseus_p13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
struct Frame {
    char unknown0[0xc];
};
struct TItemWpnCaduseus_p13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern "C" void call_8c075894(TItemWpnCaduseus *, TItemWpnCaduseus_p13c *, int, Frame *);
extern "C" void create_effect_777c(void *, int);
extern "C" int call_8c1aaabc(void *);
extern "C" void create_effect_b0fac(void *, void *, void *, void *);
extern "C" void call_8c076580(TItemWpnCaduseus *);
extern "C" void TItemWpnCaduseus_v49_8c18ac84(TItemWpnCaduseus *o)
{
    Frame frame;
    int t1;
    int t2;
    call_8c075894(o, (TItemWpnCaduseus_p13c *)(o->f13c), 2, (Frame *)((&frame)));
    create_effect_777c((void *)(&frame), 0x1bf);
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        create_effect_b0fac((void *)(o->f13c), (void *)(&frame), (void *)(o->f13c->f64), (void *)3);
        return;
    }
    call_8c076580(o);
}
