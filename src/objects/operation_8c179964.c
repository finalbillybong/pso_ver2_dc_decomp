#include "src/include/classes/TItemWpnCSorcer.h"
typedef struct TItemWpnCSorcer_p13c TItemWpnCSorcer_p13c;
typedef struct S_vv30 S_vv30;
struct S_vv30 {
    char unknown0[0x332];
    short f332;
};
struct TItemWpnCSorcer_p13c {
    char unknown0[0x332];
    short f332;
};
extern void operation_8c04a8ac(void *, int);
void TItemWpnCSorcer_v53_8c179964(TItemWpnCSorcer *o)
{
    S_vv30 *v30;
    short v31;
    short d;
    if (o->f23a == 1) {
        if (o->f234 == 7) {
            o->f23a = 0;
        } else {
            o->f234 += 1;
        }
    }
    if (o->f23a == 2) {
        if (o->f234 == 0) {
            o->f23a = 3;
        } else {
            o->f234 -= 1;
        }
    }
    v30 = (S_vv30 *)o->f13c;
    v31 = v30->f332;
    d = (short)(o->f238 - v31);
    if (d < 0) {
        o->f238 = v31;
        return;
    }
    if (d > 0) {
        operation_8c04a8ac((void *)v30, (int)((float)d * 0.1f));
        o->f238 = o->f13c->f332;
    }
}
