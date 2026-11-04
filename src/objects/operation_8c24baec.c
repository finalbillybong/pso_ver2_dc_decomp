#include "src/include/classes/TODoorVS2Door01.h"
void TODoorVS2Door01_v18_8c24baec(TODoorVS2Door01 *o)
{
    o->f10c += o->ff0;
    if (!(19.0f > o->f10c)) {
        o->f10c = 19.0f;
        o->fe4 = 2;
    }
}
