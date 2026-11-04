#include "src/include/classes/TItemWpnUmbrella.h"
extern void call_8c172c50(void *, float, float);
extern void play_se_8c05fbf8(int, int, int, int);
void TItemWpnUmbrella_v51_8c240e04(TItemWpnUmbrella *o)
{
    int v1;
    int v3;
    v3 = (int)0;
    if (1.0f > o->first) {
        o->first += 0.14f;
        v1 = (int)0;
        if (!(1.0f > o->first)) {
            o->first = 1.0f;
            v1 = (int)1;
        }
        v3 = (int)v1;
    }
    call_8c172c50((void *)(((char *)o + 0x238)), -0.0400000103f, 1.0f);
    call_8c172c50((void *)(((char *)o + 0x23c)), 0.14f, 1.0f);
    if (v3 == 1) {
        play_se_8c05fbf8(0x10024, (int)((int)o->f13c + 0x3c), 0, 0);
    }
}
