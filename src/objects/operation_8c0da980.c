#include "src/include/classes/TMainCursor.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TMainCursor_update_8c0da980(TMainCursor *o)
{
    int v1;
    int v2;
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            return;
        }
        if (o->f20 == 2) {
            goto L_8c0da9fc;
        }
        return;
    }
    o->f34 -= 1.0f;
    if (!(o->f34 > o->f38)) {
        o->f34 = o->f2c;
        o->f24 |= 1;
        o->f20 = 1;
        v1 = (int)(((o->f24 & 4)) != 0);
        if (v1 == 0) {
            v2 = (int)(((o->f24 & 2)) != 0);
            if (v2 != 0) {
                play_se_8c05fbf8(0x16, 0, 0, 0);
                return;
            }
            play_se_8c05fbf8(0x11, 0, 0, 0);
            return;
L_8c0da9fc:;
            if ((o->f50 - 0.2f) > 0.0f) {
                o->f50 -= 0.2f;
                return;
            }
            o->f04 |= 1;
        }
    }
}
