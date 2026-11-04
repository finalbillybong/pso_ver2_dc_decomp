#include "src/include/classes/TItemWpnRabbitCane.h"
typedef struct TItemWpnRabbitCane_p1c8 TItemWpnRabbitCane_p1c8;
struct TItemWpnRabbitCane_p1c8 {
    char unknown0[0x4];
    int f04;
};
void TItemWpnRabbitCane_v53_8c23ec8c(TItemWpnRabbitCane *o)
{
    float v3;
    if (o->f1c8 != 0) {
        v3 = (float)(float)(unsigned int)o->f1c8->f04;
        o->f234 += 1.0f;
        if (!(v3 > o->f234)) {
            o->f234 -= v3;
        }
    }
}
