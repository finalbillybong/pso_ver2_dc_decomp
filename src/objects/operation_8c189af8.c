#include "src/include/classes/TNowLoading.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TNowLoading_p20 TNowLoading_p20;
typedef struct TNowLoading_p24 TNowLoading_p24;
typedef struct TNowLoading_p28 TNowLoading_p28;
typedef struct TNowLoading_p2c TNowLoading_p2c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
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
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TNowLoading *);
TNowLoading *TNowLoading_dtor_8c189af8(TNowLoading *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    S_vv9 *v9;
    S_vv13 *v13;
    if (o != 0) {
        o->vtable = (void *)0x8c2721d4;
        if (o->f20 != 0) {
            v1 = (S_vv1 *)o->f20;
            v1->f04 |= 1;
            o->f20 = (TNowLoading_p20 *)0;
        }
        if (o->f24 != 0) {
            v5 = (S_vv5 *)o->f24;
            v5->f04 |= 1;
            o->f24 = (TNowLoading_p24 *)0;
        }
        if (o->f28 != 0) {
            v9 = (S_vv9 *)o->f28;
            v9->f04 |= 1;
            o->f28 = (TNowLoading_p28 *)0;
        }
        if (o->f2c != 0) {
            v13 = (S_vv13 *)o->f2c;
            v13->f04 |= 1;
            o->f2c = (TNowLoading_p2c *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
