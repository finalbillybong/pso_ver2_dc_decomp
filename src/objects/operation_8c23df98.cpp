#include "src/include/classes/TItemWpnLavisBlade.h"
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c076af4(TItemWpnLavisBlade *, int, int, float);
extern "C" void call_8c076580(TItemWpnLavisBlade *);
extern "C" void TItemWpnLavisBlade_v49_8c23df98(TItemWpnLavisBlade *o)
{
    int t1;
    int t2;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        call_8c076af4(o, 0, 1, 1.16666663f);
        return;
    }
    call_8c076580(o);
}
