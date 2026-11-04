#include "src/include/classes/TItemMagGrowEff.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemMagGrowEff_p24 TItemMagGrowEff_p24;
typedef struct TItemMagGrowEff_p28 TItemMagGrowEff_p28;
struct TItemMagGrowEff_p28 {
    char unknown0[0x68];
    int f68;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemMagGrowEff *);
TItemMagGrowEff *TItemMagGrowEff_dtor_8c1f2b08(TItemMagGrowEff *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278020;
        mark_effect_for_release((void *)(o->f24));
        if (o->f28 != 0) {
            o->f28->f68 &= -0x41;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
