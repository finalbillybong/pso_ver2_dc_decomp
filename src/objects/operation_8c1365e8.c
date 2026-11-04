#include "src/include/classes/TOKeyAncient03.h"
void TOKeyAncient03_v18_8c1365e8(TOKeyAncient03 *o)
{
    if (o->f12c == 1) {
        o->f120 += 0.1f;
        if (1.0f > o->f120) {
            goto L_8c136630;
        }
        o->f12c = 0;
    } else {
        o->f120 -= 0.1f;
        if (!(o->f120 > 0.0f)) {
            o->f12c = 1;
        }
    }
L_8c136630:;
    if (0.0f > o->f70) {
        o->f70 -= -0.0233333334f;
    }
}
