#include "src/include/classes/TItemWpnNyoibou.h"
void TItemWpnNyoibou_v50_8c23e848(TItemWpnNyoibou *o)
{
    if (1.0f > o->f23c) {
        o->f23c += 0.3f;
        if (o->f23c > 1.0f) {
            o->f23c = 1.0f;
        }
    }
}
