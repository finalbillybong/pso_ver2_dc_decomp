#include "src/include/classes/TPlayerBattleCtrl.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_4c Arg0_4c;
typedef struct Arg0_50 Arg0_50;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c510c80;
extern void operation_8c2425e0(void *);
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TPlayerBattleCtrl *);
TPlayerBattleCtrl *TPlayerBattleCtrl_dtor_8c242500(TPlayerBattleCtrl *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c27ccdc;
        if (o->f24 != -1) {
            o->f24 = -1;
            operation_8c2425e0((void *)o);
        }
        if (o->f4c != 0) {
            request_resource_release((void *)(o->f4c));
        }
        if (o->f50 != 0) {
            request_resource_release((void *)(o->f50));
        }
        if (o->f54 != 0) {
            request_resource_release((void *)(o->f50));
        }
        g_8c510c80 = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
