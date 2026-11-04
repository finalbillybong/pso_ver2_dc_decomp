#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct S_g8c510ba0 S_g8c510ba0;
typedef struct TObjCityDoor_Warp_pdc TObjCityDoor_Warp_pdc;
struct S_g8c510ba0 {
    char unknown0[0x20];
    int f20;
};
struct TObjCityDoor_Warp_pdc {
    char unknown0[0x18];
    int f18;
};
extern S_g8c510ba0 *g_8c510ba0;
extern "C" void TObjCityDoor_Warp_update_8c1c1ff0(TObjCityDoor_Warp *o)
{
    int v2;
    int m;
    v2 = g_8c510ba0 == 0 ? -1 : (int)g_8c510ba0->f20;
    m = -1;
    if (v2 != m && v2 == 1) {
        o->fe4 = 0;
    }
    o->v22();
    if (v2 != -1 && v2 == 1) {
        o->fdc->f18 |= 1;
    }
}
