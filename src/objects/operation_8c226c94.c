#include "src/include/classes/TWindowOptionCtrl.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowOptionCtrl_p28 TWindowOptionCtrl_p28;
typedef struct TWindowOptionCtrl_p2c TWindowOptionCtrl_p2c;
typedef struct TWindowOptionCtrl_p30 TWindowOptionCtrl_p30;
typedef struct TWindowOptionCtrl_p34 TWindowOptionCtrl_p34;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c227450(void *);
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowOptionCtrl *);
TWindowOptionCtrl *TWindowOptionCtrl_dtor_8c226c94(TWindowOptionCtrl *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278b84;
        operation_8c227450((void *)o);
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (TWindowOptionCtrl_p34 *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowOptionCtrl_p30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowOptionCtrl_p2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowOptionCtrl_p28 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
