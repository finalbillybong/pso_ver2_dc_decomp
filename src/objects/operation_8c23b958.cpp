#include "src/include/classes/TItemWpnDevilCane.h"
typedef struct Frame Frame;
typedef struct TItemWpnDevilCane_p13c TItemWpnDevilCane_p13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
typedef struct TItemWpnDevilCane_p214 TItemWpnDevilCane_p214;
struct Frame {
    char unknown0[0xc];
};
struct TItemWpnDevilCane_p13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern "C" int call_8c1aaabc(void *);
extern "C" int operation_8c075894(void *, void *, int, int);
extern "C" void TTecMegid_create_8c0b55a0(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnDevilCane_v49_8c23b958(TItemWpnDevilCane *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    TItemWpnDevilCane_p13c *v1;
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        t3 = operation_8c075894((void *)o, (void *)(o->f13c), 5, (int)(&frame));
        if (t3 == 0) {
            return;
        }
        v1 = o->f13c;
        TTecMegid_create_8c0b55a0((void *)v1, (void *)(&frame), (void *)(v1->f64), (void *)(o->f214));
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
