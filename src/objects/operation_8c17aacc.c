#include "src/include/classes/TItemWpnPsychowand.h"
typedef struct TItemWpnPsychowand_p13c TItemWpnPsychowand_p13c;
typedef struct S_vv21 S_vv21;
struct S_vv21 {
    char unknown0[0x332];
    short f332;
};
struct TItemWpnPsychowand_p13c {
    char unknown0[0x332];
    short f332;
};
extern void operation_8c04a8ac(void *, int);
void TItemWpnPsychowand_v53_8c17aacc(TItemWpnPsychowand *o)
{
    S_vv21 *v21;
    short v22;
    short d;
    v21 = (S_vv21 *)o->f13c;
    v22 = v21->f332;
    d = (short)(o->f234 - v22);
    if (d < 0) {
        o->f234 = v22;
        return;
    }
    if (d > 0) {
        operation_8c04a8ac((void *)v21, (int)(d >> 1));
        o->f234 = o->f13c->f332;
    }
}
