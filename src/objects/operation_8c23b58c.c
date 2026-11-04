#include "src/include/classes/TItemWpnClub.h"
void TItemWpnClub_v51_8c23b58c(TItemWpnClub *o)
{
    if (o->f23c > 0.3f) {
        o->f23c -= 0.2f;
        if (0.3f > o->f23c) {
            o->f23c = 0.3f;
        }
    }
}
