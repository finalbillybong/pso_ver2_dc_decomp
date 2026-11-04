#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct TObjCityDoor_Warp_pf0 TObjCityDoor_Warp_pf0;
struct TObjCityDoor_Warp_pf0 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern "C" void operation_8c1c18ac(TObjCityDoor_Warp *o)
{
    int t1;
    t1 = o->v15(o->ff0->f08);
    if (t1 == 0) {
        o->fe4 = 3;
        o->v20();
        return;
    }
    o->fec += o->ff0->f00;
    if (!(o->fe8 > o->fec)) {
        o->fec = o->fe8;
        o->fe4 = 2;
    }
}
