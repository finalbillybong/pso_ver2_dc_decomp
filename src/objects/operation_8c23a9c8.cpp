#include "src/include/classes/TItemWpnBlueCane.h"
typedef struct Frame Frame;
typedef struct TItemWpnBlueCane_p13c TItemWpnBlueCane_p13c;
typedef struct Arg0_13c_64 Arg0_13c_64;
typedef struct TItemWpnBlueCane_p214 TItemWpnBlueCane_p214;
struct Frame {
    char unknown0[0xc];
};
struct TItemWpnBlueCane_p13c {
    char unknown0[0x64];
    Arg0_13c_64 *f64;
};
extern "C" int call_8c1aaabc(void *);
extern "C" int operation_8c075894(void *, void *, int, int);
extern "C" void TTecGiBarta_create_8c0b1aa0(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnBlueCane_v49_8c23a9c8(TItemWpnBlueCane *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    TItemWpnBlueCane_p13c *v1;
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        t3 = operation_8c075894((void *)o, (void *)(o->f13c), 0, (int)(&frame));
        if (t3 == 0) {
            return;
        }
        v1 = o->f13c;
        TTecGiBarta_create_8c0b1aa0((void *)v1, (void *)(&frame), (void *)(v1->f64), (void *)(o->f214));
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
