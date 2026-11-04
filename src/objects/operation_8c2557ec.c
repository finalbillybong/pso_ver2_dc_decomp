#include "src/include/classes/TItemEffArmorParticle.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemEffArmorParticle_p24 TItemEffArmorParticle_p24;
struct TItemEffArmorParticle_p24 {
    char unknown0[0x4];
    short f04;
};
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemEffArmorParticle *);
TItemEffArmorParticle *TItemEffArmorParticle_dtor_8c2557ec(TItemEffArmorParticle *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c281268;
        if (o->f24 != 0) {
            o->f24->f04 |= 1;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
