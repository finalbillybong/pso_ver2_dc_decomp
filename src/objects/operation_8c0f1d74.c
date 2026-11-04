#include "src/include/classes/TOMonumentAncient02.h"
typedef struct TOMonumentAncient02_p10c TOMonumentAncient02_p10c;
typedef struct TOMonumentAncient02_p120 TOMonumentAncient02_p120;
extern int call_8c17796c(int);
extern void set_effect_bit0(void *);
extern void call_8c027090(void);
extern void call_8c05fd7c(void *, TOMonumentAncient02 *, void *, int, int);
void TOMonumentAncient02_update_8c0f1d74(TOMonumentAncient02 *o)
{
    int t1;
    if (o->fe4 != 1) {
        if (o->fe4 == 2) {
            goto L_8c0f1dc8;
        }
        t1 = call_8c17796c(0x2a);
        if (t1 != 0) {
            o->fe4 = 1;
        }
        if (o->f120 == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f120));
        return;
    }
    if (o->f124 == 1) {
        call_8c027090();
    }
    if (o->f120 != 0) {
        set_effect_bit0((void *)(o->f120));
        return;
L_8c0f1dc8:;
        call_8c05fd7c((void *)(o->f10c), o, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
