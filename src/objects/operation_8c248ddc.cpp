#include "src/include/classes/TItemWpnBasyoSen2.h"
extern "C" int call_8c1aaabc(int);
extern "C" void call_8c076af4(TItemWpnBasyoSen2 *, float, int, int);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnBasyoSen2_v49_8c248ddc(TItemWpnBasyoSen2 *o)
{
    int t1;
    int t2;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        call_8c076af4(o, 1.0f, 0, 1);
        return;
    }
    operation_8c076580((void *)o);
}
