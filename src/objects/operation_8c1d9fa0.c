#include "src/include/classes/TWindowSubLog.h"
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct TWindowSubLog_p20 TWindowSubLog_p20;
typedef struct TWindowSubLog_p24 TWindowSubLog_p24;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern void request_resource_release(void *);
extern void operation_8c18cbb0(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubLog *);
TWindowSubLog *TWindowSubLog_dtor_8c1d9fa0(TWindowSubLog *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2771a8;
        if (o->f24 != 0) {
            v1 = (S_vv1 *)o->f24;
            v1->f04 |= 1;
            o->f24 = (TWindowSubLog_p24 *)0;
        }
        if (o->f20 != 0) {
            request_resource_release((void *)(o->f20));
            o->f20 = (TWindowSubLog_p20 *)0;
        }
        if (*(int *)0x8c4dbde0 != 0) {
            (*(S_g8c4dbde0 **)0x8c4dbde0)->f20 &= -9;
            operation_8c18cbb0((void *)(*(S_g8c4dbde0 **)0x8c4dbde0));
        }
        if (*(int *)0x8c46fe20 != 0) {
            (*(S_g8c46fe20 **)0x8c46fe20)->f20 &= -0x41;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
