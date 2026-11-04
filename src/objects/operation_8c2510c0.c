#include "src/include/classes/TItemWpnOnHarisen.h"
void TItemWpnOnHarisen_v53_8c2510c0(TItemWpnOnHarisen *o)
{
    if (1.0f > o->second) {
        o->second += 0.1f;
        if (!(1.0f > o->second)) {
            o->second = 1.0f;
        }
    }
}
