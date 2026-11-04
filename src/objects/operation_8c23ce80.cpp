#include "src/include/classes/TItemWpnFireWand.h"
typedef struct Frame Frame;
typedef struct TItemWpnFireWand_p13c TItemWpnFireWand_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct TItemWpnFireWand_p214 TItemWpnFireWand_p214;
struct Arg0_13c_s754 {
    char unknown0[0x12];
    short f12;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int call_8c1aaabc(int);
extern "C" int call_8c075894(TItemWpnFireWand *, void *, int, Frame *);
extern "C" void TTecGiFoie_create_8c0b2190(void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnFireWand_v49_8c23ce80(TItemWpnFireWand *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        if (((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f12 != 0) {
            return;
        }
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        t3 = call_8c075894(o, (void *)(o->f13c), 0, (Frame *)((&frame)));
        if (t3 == 0) {
            return;
        }
        TTecGiFoie_create_8c0b2190((void *)(o->f13c), (void *)(&frame), (void *)(o->f214));
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
