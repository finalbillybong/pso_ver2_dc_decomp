#include "src/include/classes/TObjDoaEx01.h"
void TObjDoaEx01_v18_8c24b3a8(TObjDoaEx01 *o)
{
    float v1;
    v1 = (float)(o->fe8 + o->ff0);
    o->fe8 = v1;
    if ((o->fec - 1.0f) < o->fe8) {
        o->fe8 = o->fec - 1.0f;
        o->fe4 = 2;
    }
}
