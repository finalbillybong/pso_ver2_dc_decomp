#include "src/include/classes/TObjEneDf2Bringer_Eff_Rush.h"
typedef struct TObjEneDf2Bringer_Eff_Rush_p20 TObjEneDf2Bringer_Eff_Rush_p20;
struct TObjEneDf2Bringer_Eff_Rush_p20 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xe];
    float f318;
    char unknown31c[0x4];
    float f320;
};
extern int call_8c05b228(short);
extern int active_unflagged_8c05b2dc(void *);
void TObjEneDf2Bringer_Eff_Rush_update_8c103e9c(TObjEneDf2Bringer_Eff_Rush *o)
{
    int v1;
    int t1;
    int t2;
    t1 = call_8c05b228(o->f20->f20);
    if (t1 != 0) {
        o->f04 |= 1;
        return;
    }
    t2 = active_unflagged_8c05b2dc((void *)(o->f20));
    if (t2 == 0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)(o->f20->f308 == 2);
    if (v1 != 0) {
        o->f04 |= 1;
        return;
    }
    if (!(o->f30 > 0.02f)) {
        o->f04 |= 1;
        return;
    }
    o->f20->f318 = o->f24 * o->f30;
    o->f20->f320 = o->f2c * o->f30;
    o->f30 = o->f30 * 0.8f;
}
