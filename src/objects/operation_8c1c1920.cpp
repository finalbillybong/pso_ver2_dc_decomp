#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct TObjCityDoor_Warp_pdc TObjCityDoor_Warp_pdc;
typedef struct TObjCityDoor_Warp_pf0 TObjCityDoor_Warp_pf0;
struct TObjCityDoor_Warp_pf0 {
    float f00;
    float f04;
};
struct TObjCityDoor_Warp_pdc {
    char unknown0[0x18];
    int f18;
};
extern "C" void operation_8c1c1920(TObjCityDoor_Warp *o)
{
    int t1;
    t1 = o->v15(o->ff0->f04);
    if (t1 != 0) {
        o->fe4 = 1;
        o->v21();
        return;
    }
    o->fec -= o->ff0->f00;
    if (!(o->fec > 0.0f)) {
        o->fec = 0.0f;
        o->fe4 = 0;
        o->fdc->f18 |= 1;
    }
}
