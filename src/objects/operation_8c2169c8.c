#include "src/include/classes/TWindowSubShortMail.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubShortMail_p24 TWindowSubShortMail_p24;
typedef struct TWindowSubShortMail_p28 TWindowSubShortMail_p28;
typedef struct TWindowSubShortMail_p2c TWindowSubShortMail_p2c;
typedef struct TWindowSubShortMail_p30 TWindowSubShortMail_p30;
typedef struct TWindowSubShortMail_p34 TWindowSubShortMail_p34;
typedef struct TWindowSubShortMail_p38 TWindowSubShortMail_p38;
typedef struct TWindowSubShortMail_p3c TWindowSubShortMail_p3c;
typedef struct TWindowSubShortMail_p40 TWindowSubShortMail_p40;
typedef struct TWindowSubShortMail_p44 TWindowSubShortMail_p44;
typedef struct S_vv10 S_vv10;
struct S_vv10 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void call_8c20a608(void);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubShortMail *);
TWindowSubShortMail *TWindowSubShortMail_dtor_8c2169c8(TWindowSubShortMail *o, int a1)
{
    S_vv10 *v10;
    if (o != 0) {
        o->dispatch = (void *)0x8c2782b8;
        if (o->f38 != 0) {
            request_resource_release((void *)(o->f38));
            o->f38 = (TWindowSubShortMail_p38 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (TWindowSubShortMail_p34 *)0;
        }
        if (o->f44 != 0) {
            v10 = (S_vv10 *)o->f44;
            v10->f04 |= 1;
            o->f44 = (TWindowSubShortMail_p44 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowSubShortMail_p30 *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowSubShortMail_p28 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowSubShortMail_p24 *)0;
        }
        if (o->f40 != 0) {
            request_resource_release((void *)(o->f40));
            o->f40 = (TWindowSubShortMail_p40 *)0;
        }
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (TWindowSubShortMail_p3c *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubShortMail_p2c *)0;
        }
        call_8c20a608();
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
