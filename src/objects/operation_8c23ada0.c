#include "src/include/classes/TItemWpnCatHand.h"
void TItemWpnCatHand_v50_8c23ada0(TItemWpnCatHand *o)
{
    if (1.0f > o->f23c) {
        o->f23c += 0.3f;
        if (o->f23c > 1.0f) {
            o->f23c = 1.0f;
        }
        o->f234 = o->f238 = o->f23c;
    }
}
