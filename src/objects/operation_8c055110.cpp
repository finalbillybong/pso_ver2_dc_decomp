#include "src/include/classes/TObjEneBm3Fly.h"
typedef struct TObjEneBm3Fly_pdc TObjEneBm3Fly_pdc;
struct TObjEneBm3Fly_pdc {
    char unknown0[0x4];
    float f04;
};
extern "C" void TObjEneBm3Fly_v94_8c055110(TObjEneBm3Fly *o)
{
    float v1;
    float v2;
    v1 = (float)o->f448;
    v2 = (float)(v1 - o->f40);
    if (!(30.0f > v2)) {
        o->v103();
    } else {
        o->v104();
    }
    o->fdc->f04 = v2;
}
