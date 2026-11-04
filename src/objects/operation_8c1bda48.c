#include "src/include/classes/TWindowInputNumber.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1bda48(TWindowInputNumber *o)
{
    char v1;
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    o->mode += 1;
    v1 = (char)o->unknown106;
    if (!(o->mode < (char)v1)) {
        if (((o->flags & 1)) != 0) {
            o->mode = v1 + -1;
            return;
        }
        o->mode = 0;
    }
}
