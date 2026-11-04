#include "src/include/classes/TODoorVS2Door01.h"
void TODoorVS2Door01_v20_8c24bb88(TODoorVS2Door01 *o)
{
    o->f10c -= o->ff0;
    if (!(o->f10c > 0.0f)) {
        o->f10c = 0.0f;
        o->fe4 = 0;
    }
}
