#include "src/include/classes/TAdPSOPlay.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TAdPSOPlay_p28 TAdPSOPlay_p28;
typedef struct TAdPSOPlay_p2c TAdPSOPlay_p2c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv5 S_vv5;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TAdPSOPlay *);
TAdPSOPlay *TAdPSOPlay_dtor_8c25ab4c(TAdPSOPlay *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    if (o != 0) {
        o->vtable = (void *)0x8c281b68;
        if (o->f28 != 0) {
            v1 = (S_vv1 *)o->f28;
            v1->f04 |= 1;
            o->f28 = (TAdPSOPlay_p28 *)0;
        }
        if (o->f2c != 0) {
            v5 = (S_vv5 *)o->f2c;
            v5->f04 |= 1;
            o->f2c = (TAdPSOPlay_p2c *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
