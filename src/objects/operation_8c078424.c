#include "src/include/classes/TItemWpnSpreadGun.h"
extern void operation_8c172c30(void *, int, int);
void TItemWpnSpreadGun_v50_8c078424(TItemWpnSpreadGun *o)
{
    if (o->f238 > 0) {
        operation_8c172c30((void *)(&o->f238), -0x2000, 0);
    }
}
