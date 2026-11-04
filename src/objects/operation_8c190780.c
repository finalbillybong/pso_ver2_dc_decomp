#include "src/include/classes/TWindowSubMag.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubMag_p30 TWindowSubMag_p30;
typedef struct TWindowSubMag_p34 TWindowSubMag_p34;
typedef struct TWindowSubMag_p38 TWindowSubMag_p38;
typedef struct TWindowSubMag_p3c TWindowSubMag_p3c;
typedef struct TWindowSubMag_p40 TWindowSubMag_p40;
typedef struct TWindowSubMag_p44 TWindowSubMag_p44;
typedef struct TWindowSubMag_p48 TWindowSubMag_p48;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubMag *);
TWindowSubMag *TWindowSubMag_dtor_8c190780(TWindowSubMag *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c272734;
        if (o->f48 != 0) {
            v1 = (S_vv1 *)o->f48;
            v1->f04 |= 1;
            o->f48 = (TWindowSubMag_p48 *)0;
        }
        if (o->f44 != 0) {
            request_resource_release((void *)(o->f44));
            o->f44 = (TWindowSubMag_p44 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (TWindowSubMag_p34 *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (TWindowSubMag_p38 *)0;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (TWindowSubMag_p40 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (TWindowSubMag_p3c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowSubMag_p30 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
