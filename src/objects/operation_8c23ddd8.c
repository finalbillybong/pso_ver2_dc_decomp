#include "src/include/classes/TItemWpnHarisen.h"
void TItemWpnHarisen_v53_8c23ddd8(TItemWpnHarisen *o)
{
    if (1.0f > o->second) {
        o->second += 0.1f;
        if (!(1.0f > o->second)) {
            o->second = 1.0f;
        }
    }
}
