#include "src/include/classes/TItemWpnPsychowand.h"
typedef struct TItemWpnPsychowand_p13c TItemWpnPsychowand_p13c;
typedef struct TItemWpnPsychowand_p2a0 TItemWpnPsychowand_p2a0;
struct TItemWpnPsychowand_p13c {
    char unknown0[0x37c];
    int f37c;
};
extern int current_mode_active(void);
extern void TTecZonde_ctor_8c0bb6fc(TItemWpnPsychowand_p13c *, void *, void *, int);
extern void create_effect_b0fac(void *, void *, void *, void *);
extern void TTecBarta_create_8c0ad2a8(void *, void *, void *, void *);
void TItemWpnPsychowand_v39_8c17abe8(TItemWpnPsychowand *o, int a1)
{
    int t1;
    if (o->f13c != 0) {
        t1 = current_mode_active();
        if (t1 != 0 && *(int *)0x8c44be04 == (int)o->f13c->f37c) {
            if (a1 != 0) {
                if (a1 == 1) {
                    goto L_8c17ac3c;
                }
                if (a1 == 2) {
                    goto L_8c17ac50;
                }
                return;
            }
            TTecZonde_ctor_8c0bb6fc((TItemWpnPsychowand_p13c *)(o->f13c), (void *)(((char *)o + 0x238)), (void *)(((char *)o + 0x244)), 7);
            return;
L_8c17ac3c:;
            create_effect_b0fac((void *)(o->f13c), (void *)(((char *)o + 0x238)), (void *)(o->f2a0), (void *)7);
            return;
L_8c17ac50:;
            TTecBarta_create_8c0ad2a8((void *)(o->f13c), (void *)(((char *)o + 0x2a4)), (void *)(o->f2a0), (void *)7);
        }
    }
}
