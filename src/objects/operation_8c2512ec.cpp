#include "src/include/classes/TItemWpnOnMachineGun.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c241658(void *);
extern "C" void TItemWpnOnMachineGun_v49_8c2512ec(TItemWpnOnMachineGun *o)
{
    int t1;
    operation_8c241658((void *)o);
    t1 = o->v48(((char *)o + 0x234), 0, 0, 1);
    if (t1 != 0) {
        o->v48(((char *)o + 0x240), 0, 0, 0);
        return;
    }
    o->v48(((char *)o + 0x240), 0, 0, 1);
}
