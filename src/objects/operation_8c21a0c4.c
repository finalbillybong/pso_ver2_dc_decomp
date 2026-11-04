#include "src/include/classes/TWindowSubShortMail.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubShortMail_p24 TWindowSubShortMail_p24;
typedef struct TWindowSubShortMail_p28 TWindowSubShortMail_p28;
typedef struct TWindowSubShortMail_p2c TWindowSubShortMail_p2c;
typedef struct TWindowSubShortMail_p30 TWindowSubShortMail_p30;
typedef struct TWindowSubShortMail_p34 TWindowSubShortMail_p34;
typedef struct TWindowSubShortMail_p38 TWindowSubShortMail_p38;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubShortMail *);
TWindowSubShortMail *operation_8c21a0c4(TWindowSubShortMail *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27836c;
        if (o->f34 != 0) {
            v1 = (S_vv1 *)o->f34;
            v1->f04 |= 1;
            o->f34 = (TWindowSubShortMail_p34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowSubShortMail_p30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubShortMail_p2c *)0;
        }
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (TWindowSubShortMail_p38 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowSubShortMail_p28 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowSubShortMail_p24 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
