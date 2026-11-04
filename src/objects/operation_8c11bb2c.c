#include "src/include/classes/TObjEnePanarms.h"
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEnePanarms_v70_8c11bb2c(TObjEnePanarms *o)
{
    switch (o->f390) {
    case 1:
    case 2:
        return;
    default:
        o->f34 &= -0x201;
        play_se_8c05fbf8(0x30034, (void *)(((char *)o + 0x3c8)), 0, 0);
        play_se_8c05fbf8(0x30033, (void *)(((char *)o + 0x3e0)), 0, 0);
        break;
    }
}
