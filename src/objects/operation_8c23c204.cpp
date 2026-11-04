#include "src/include/classes/TItemWpnDoubleCanon.h"
typedef struct TItemWpnDoubleCanon_p13c TItemWpnDoubleCanon_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Arg0_13c_s754 {
    char unknown0[0x12];
    short f12;
};
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c23c26c(TItemWpnDoubleCanon *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnDoubleCanon_v49_8c23c204(TItemWpnDoubleCanon *o)
{
    int t1;
    int t2;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        if (((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f12 != 0) {
            return;
        }
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        call_8c23c26c(o);
        return;
    }
    operation_8c076580((void *)o);
}
