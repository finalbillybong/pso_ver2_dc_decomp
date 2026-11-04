#include "src/include/classes/TItemWpnBearCane.h"
extern int call_8c12b944(void);
void TItemWpnBearCane_v51_8c239e30(TItemWpnBearCane *o)
{
    int t1;
    if (o->f238 == 3) {
        o->f238 = 1;
    }
    if (o->f238 == 0) {
        t1 = call_8c12b944();
        if (0.1f > ((float)t1 / 32768.0f)) {
            o->f238 = 2;
        }
    }
}
