#include "src/include/classes/TItemWpnYasuMachineGun.h"
void TItemWpnYasuMachineGun_v53_8c24fb44(TItemWpnYasuMachineGun *o)
{
    if (o->f234 != 1) {
        if (o->f234 == 2) {
            goto L_8c24fb7c;
        }
        if (o->f234 == 3) {
            goto L_8c24fba0;
        }
        return;
    }
    o->f23c -= 0.299999982f;
    if (!(o->f23c > 0.0f)) {
        o->f23c = 0.0f;
        o->f234 = 0;
        return;
L_8c24fb7c:;
        o->f23c += 0.299999982f;
        if (!(0.9f > o->f23c)) {
            o->f23c = 0.9f;
            o->f234 = 3;
            return;
L_8c24fba0:;
            o->f234 = 1;
            o->f260 = 1;
            o->f25c = 1;
        }
    }
}
