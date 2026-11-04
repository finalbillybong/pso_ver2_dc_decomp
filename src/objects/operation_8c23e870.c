#include "src/include/classes/TItemWpnNyoibou.h"
void TItemWpnNyoibou_v51_8c23e870(TItemWpnNyoibou *o)
{
    if (o->f23c > 0.08f) {
        o->f23c -= 0.3f;
        if (0.08f > o->f23c) {
            o->f23c = 0.08f;
        }
    }
}
