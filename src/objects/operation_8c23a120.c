#include "src/include/classes/TItemWpnBerlaCanon.h"
typedef struct TItemWpnBerlaCanon_p38 TItemWpnBerlaCanon_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
struct TItemWpnBerlaCanon_p38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    int f00;
};
void TItemWpnBerlaCanon_v53_8c23a120(TItemWpnBerlaCanon *o)
{
    int v2;
    if (o->f38 != 0) {
        v2 = (int)o->f38->f2c->f00;
        if (o->f234 == 1) {
            if (((o->f38->f2c->f00 & 8)) == 0) {
                return;
            }
            o->f38->f2c->f00 &= -9;
            return;
        }
        if (((v2 & 8)) == 0) {
            o->f38->f2c->f00 = v2 | 8;
        }
    }
}
