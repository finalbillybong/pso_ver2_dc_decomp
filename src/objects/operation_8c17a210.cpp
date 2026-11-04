#include "src/include/classes/TItemWpnOriginalSaber.h"
extern "C" int call_8c1aaabc(int);
extern "C" int call_8c12b944(void);
extern "C" void call_8c076af4(TItemWpnOriginalSaber *, int, int, float);
extern "C" void call_8c076580(TItemWpnOriginalSaber *);
extern "C" void TItemWpnOriginalSaber_v49_8c17a210(TItemWpnOriginalSaber *o)
{
    int t1;
    int t2;
    int t3;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            t3 = call_8c12b944();
            if (!(0.1f > ((float)t3 / 32768.0f))) {
                return;
            }
        }
        call_8c076af4(o, 0, 1, 3.5f);
        return;
    }
    call_8c076580(o);
}
