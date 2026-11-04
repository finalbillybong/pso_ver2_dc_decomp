#include "src/include/classes/TWindowInputNumber.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1bdaa4(TWindowInputNumber *o)
{
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    o->mode += -1;
    if (!(o->mode >= 0)) {
        if (((o->flags & 1)) != 0) {
            o->mode = 0;
            return;
        }
        o->mode = o->unknown106 + -1;
    }
}
