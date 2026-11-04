#include "src/include/classes/TItemWpnSRed.h"
typedef struct TItemWpnSRed_p13c TItemWpnSRed_p13c;
extern "C" int call_8c1aaabc(int);
extern "C" void TTecDeband_create_8c0b03c8(void *, void *, void *);
extern "C" void TTecSifta_create_8c0ba928(void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void call_8c076580(TItemWpnSRed *);
extern "C" void TItemWpnSRed_v49_8c249648(TItemWpnSRed *o)
{
    int t1;
    int t2;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        if (o->f214 == 0) {
            TTecDeband_create_8c0b03c8((void *)(o->f13c), (void *)((int)o->f13c + 0x3c), (void *)2);
        } else {
            TTecSifta_create_8c0ba928((void *)(o->f13c), (void *)((int)o->f13c + 0x3c), (void *)2);
        }
        operation_8c077224((void *)o);
        return;
    }
    call_8c076580(o);
}
