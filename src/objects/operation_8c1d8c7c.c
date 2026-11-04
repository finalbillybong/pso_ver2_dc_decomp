#include "src/include/classes/TObjCity_Season_HalloweenPumpkin.h"
typedef struct S_L8c4e2edc S_L8c4e2edc;
struct S_L8c4e2edc {
    char unknown0[0xc];
    int f0c;
};
extern S_L8c4e2edc g_8c4e2edc;
void TObjCity_Season_HalloweenPumpkin_update_8c1d8c7c(TObjCity_Season_HalloweenPumpkin *o)
{
    if ((&g_8c4e2edc)->f0c != 0) {
        o->f64 += 0x40;
    }
}
