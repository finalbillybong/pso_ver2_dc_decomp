#include "src/include/classes/TItemEffFireWand.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemEffFireWand_p28 TItemEffFireWand_p28;
struct TItemEffFireWand_p28 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemEffFireWand *);
TItemEffFireWand *TItemEffFireWand_dtor_8c23cfec(TItemEffFireWand *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c27a790;
        if (o->f28 != 0) {
            o->f28->f04 |= 1;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
