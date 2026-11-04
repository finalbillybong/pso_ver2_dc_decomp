#include "src/include/classes/TObjBoss2Dust.h"
void TObjBoss2Dust_update_8c1b0a8c(TObjBoss2Dust *o)
{
    o->f28.z -= *(float *)0x8c286260;
    o->f20 += 1;
    if (o->f20 >= 0x5a) {
        o->f04 |= 1;
    }
}
