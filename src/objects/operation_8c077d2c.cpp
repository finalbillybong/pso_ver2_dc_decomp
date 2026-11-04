#include "src/include/classes/TItemWpnMachineGun.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void TItemWpnMachineGun_v49_8c077d2c(TItemWpnMachineGun *o)
{
    int t1;
    t1 = o->v48(((char *)o + 0x234), 0, 0, 1);
    if (t1 != 0) {
        o->v48(((char *)o + 0x240), 0, 0, 0);
        return;
    }
    o->v48(((char *)o + 0x240), 0, 0, 1);
}
