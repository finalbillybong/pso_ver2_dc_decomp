#include "src/include/classes/TObjFogCollision.h"
void TObjFogCollision_v14_8c136834(TObjFogCollision *o)
{
    int v3;
    v3 = (int)o->f88;
    if (!(o->f88 >= 0)) {
        o->f88 = 0;
        return;
    }
    if (v3 >= 0x40) {
        o->f88 = 0x3f;
    }
}
