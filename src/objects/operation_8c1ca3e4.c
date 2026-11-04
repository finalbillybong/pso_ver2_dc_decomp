#include "src/include/classes/TWindowSubShortMail.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubShortMail_p2c TWindowSubShortMail_p2c;
typedef struct TWindowSubShortMail_p30 TWindowSubShortMail_p30;
typedef struct TWindowSubShortMail_p34 TWindowSubShortMail_p34;
typedef struct TWindowSubShortMail_p38 TWindowSubShortMail_p38;
typedef struct TWindowSubShortMail_p3c TWindowSubShortMail_p3c;
typedef struct TWindowSubShortMail_p40 TWindowSubShortMail_p40;
typedef struct TWindowSubShortMail_p44 TWindowSubShortMail_p44;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv17 S_vv17;
typedef struct S_vv21 S_vv21;
typedef struct S_vv25 S_vv25;
typedef struct S_vv5 S_vv5;
typedef struct S_vv9 S_vv9;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
struct S_vv13 {
    char unknown0[0x4];
    short f04;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
struct S_vv21 {
    char unknown0[0x4];
    short f04;
};
struct S_vv25 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubShortMail *);
TWindowSubShortMail *operation_8c1ca3e4(TWindowSubShortMail *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    S_vv9 *v9;
    S_vv13 *v13;
    S_vv17 *v17;
    S_vv21 *v21;
    S_vv25 *v25;
    if (o != 0) {
        o->dispatch = (void *)0x8c276838;
        if (o->f2c != 0) {
            v1 = (S_vv1 *)o->f2c;
            v1->f04 |= 1;
            o->f2c = (TWindowSubShortMail_p2c *)0;
        }
        if (o->f30 != 0) {
            v5 = (S_vv5 *)o->f30;
            v5->f04 |= 1;
            o->f30 = (TWindowSubShortMail_p30 *)0;
        }
        if (o->f34 != 0) {
            v9 = (S_vv9 *)o->f34;
            v9->f04 |= 1;
            o->f34 = (TWindowSubShortMail_p34 *)0;
        }
        if (o->f38 != 0) {
            v13 = (S_vv13 *)o->f38;
            v13->f04 |= 1;
            o->f38 = (TWindowSubShortMail_p38 *)0;
        }
        if (o->f44 != 0) {
            v17 = (S_vv17 *)o->f44;
            v17->f04 |= 1;
            o->f44 = (TWindowSubShortMail_p44 *)0;
        }
        if (o->f3c != 0) {
            v21 = (S_vv21 *)o->f3c;
            v21->f04 |= 1;
            o->f3c = (TWindowSubShortMail_p3c *)0;
        }
        if (o->f40 != 0) {
            v25 = (S_vv25 *)o->f40;
            v25->f04 |= 1;
            o->f40 = (TWindowSubShortMail_p40 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
