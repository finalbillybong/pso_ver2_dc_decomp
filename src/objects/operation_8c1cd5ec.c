#include "src/include/types/ViewParameters.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1cd5ec(ViewParameters *o)
{
    if (((o->f80 & 0xffff & 8)) == 0 && ((o->f80 & 0xffff & 2)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f80 = (o->f80 & 0xffff) | 4;
    }
}
