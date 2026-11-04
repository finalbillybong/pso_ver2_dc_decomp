#include "src/include/classes/TItemWpnCatHand.h"
void TItemWpnCatHand_v51_8c23ade8(TItemWpnCatHand *o)
{
    if (o->f23c > 1e-07f) {
        o->f23c -= 0.3f;
        if (1e-07f > o->f23c) {
            o->f23c = 1e-07f;
        }
        o->f234 = o->f238 = o->f23c;
    }
}
