#include "src/include/classes/TWindowSubEquip.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubEquip_p2c TWindowSubEquip_p2c;
typedef struct TWindowSubEquip_p30 TWindowSubEquip_p30;
typedef struct TWindowSubEquip_p34 TWindowSubEquip_p34;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubEquip *);
TWindowSubEquip *TWindowSubEquip_dtor_8c1d483c(TWindowSubEquip *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c276e28;
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (TWindowSubEquip_p34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowSubEquip_p30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubEquip_p2c *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
