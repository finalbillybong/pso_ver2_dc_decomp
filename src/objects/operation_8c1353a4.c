#include "src/include/classes/TOKeyCave01.h"
void TOKeyCave01_v18_8c1353a4(TOKeyCave01 *o)
{
    if (o->f12c == 1) {
        o->f120 += 0.1f;
        if (1.0f > o->f120) {
            goto L_8c1353ec;
        }
        o->f12c = 0;
    } else {
        o->f120 -= 0.1f;
        if (!(o->f120 > 0.0f)) {
            o->f12c = 1;
        }
    }
L_8c1353ec:;
    if (0.0f > o->f70) {
        o->f70 -= -0.0233333334f;
    }
}
