#include "src/include/classes/TTecPlayerInfluence.h"
void TTecPlayerInfluence_v05_8c0b6d08(TTecPlayerInfluence *o)
{
    o->f6c += 1;
    if ((float)o->f6c > o->f74) {
        o->f04 |= 1;
    }
}
