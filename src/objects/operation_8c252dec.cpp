#include "src/include/classes/TItemWpnOnTwinGun.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c241658(void *);
extern "C" void TItemWpnOnTwinGun_v49_8c252dec(TItemWpnOnTwinGun *o)
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
