#include "src/include/classes/TOSwitchAttackSub.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TOSwitchAttackSub_p24 TOSwitchAttackSub_p24;
struct TOSwitchAttackSub_p24 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TOSwitchAttackSub *);
TOSwitchAttackSub *TOSwitchAttackSub_dtor_8c259034(TOSwitchAttackSub *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c281a7c;
        if (o->f24 != 0) {
            o->f24->f04 |= 1;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
