#include "src/include/classes/TWindowSubCustomEquip.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c197844(TWindowSubCustomEquip *o)
{
    if (((o->f68 & 1)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f68 |= 2;
    }
}
