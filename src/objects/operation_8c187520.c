#include "src/include/classes/TSetEvtDestroy.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TSetEvtDestroy_p20 TSetEvtDestroy_p20;
typedef struct TSetEvtDestroy_p34 TSetEvtDestroy_p34;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct TSetEvtDestroy_p20 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TSetEvtDestroy *);
TSetEvtDestroy *TSetEvtDestroy_dtor_8c187520(TSetEvtDestroy *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->vtable = (void *)0x8c2720f0;
        if (o->f34 != 0) {
            v1 = (S_vv1 *)o->f34;
            v1->f04 |= 1;
            o->f34 = (TSetEvtDestroy_p34 *)0;
        }
        if (o->f20 != 0) {
            o->f20->f04 &= -3;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
