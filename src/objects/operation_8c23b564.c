#include "src/include/classes/TItemWpnClub.h"
void TItemWpnClub_v50_8c23b564(TItemWpnClub *o)
{
    if (1.0f > o->f23c) {
        o->f23c += 0.2f;
        if (o->f23c > 1.0f) {
            o->f23c = 1.0f;
        }
    }
}
