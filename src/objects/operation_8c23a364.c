#include "src/include/classes/TItemWpnBigHarisen.h"
void TItemWpnBigHarisen_v53_8c23a364(TItemWpnBigHarisen *o)
{
    if (1.0f > o->second) {
        o->second += 0.1f;
        if (!(1.0f > o->second)) {
            o->second = 1.0f;
        }
    }
}
