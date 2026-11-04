#include "src/include/classes/TOKeyMachine01.h"
void TOKeyMachine01_v18_8c162a94(TOKeyMachine01 *o)
{
    if (o->f12c == 1) {
        o->f120 += 0.1f;
        if (1.0f > o->f120) {
            goto L_8c162adc;
        }
        o->f12c = 0;
    } else {
        o->f120 -= 0.1f;
        if (!(o->f120 > 0.0f)) {
            o->f12c = 1;
        }
    }
L_8c162adc:;
    if (0.0f > o->f70) {
        o->f70 -= -0.0233333334f;
    }
}
