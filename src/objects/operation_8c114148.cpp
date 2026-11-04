#include "src/include/classes/TOKeyAncient02.h"
extern "C" void TOKeyAncient02_v18_8c114148(TOKeyAncient02 *o)
{
    if (((o->f11c & 1)) != 0) {
        o->f70 += 0.01f;
        o->f6c += 0.05f;
        o->f74 = o->f6c;
        if (1.1f > o->f70) {
            goto L_8c1141c6;
        }
        o->f11c = (unsigned int)o->f11c >> 1 << 1;
    } else {
        o->f70 -= 0.01f;
        o->f6c -= 0.05f;
        o->f74 = o->f6c;
        if (!(o->f70 > 1.0f)) {
            o->f11c |= 1;
        }
    }
L_8c1141c6:;
    o->f120 += 0x222;
    o->v21();
}
