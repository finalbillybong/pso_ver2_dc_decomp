#include "src/include/classes/TQuestVmDownLoadServer.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TQuestVmDownLoadServer_p58 TQuestVmDownLoadServer_p58;
typedef struct TQuestVmDownLoadServer_p84 TQuestVmDownLoadServer_p84;
typedef struct TQuestVmDownLoadServer_p88 TQuestVmDownLoadServer_p88;
typedef struct TQuestVmDownLoadServer_p90 TQuestVmDownLoadServer_p90;
typedef struct S_vv7 S_vv7;
struct S_vv7 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c5064f8;
extern int g_8c506504;
extern void game_free_8c011ec0(void *);
extern void request_resource_release(void *);
extern void operation_8c22e950(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TQuestVmDownLoadServer *);
TQuestVmDownLoadServer *TQuestVmDownLoadServer_dtor_8c22d680(TQuestVmDownLoadServer *o, int a1)
{
    S_vv7 *v7;
    if (o != 0) {
        o->vtable = (void *)0x8c278ea4;
        if (o->f58 != 0) {
            game_free_8c011ec0((void *)(o->f58));
            o->f58 = (TQuestVmDownLoadServer_p58 *)0;
        }
        if (o->f90 != 0) {
            v7 = (S_vv7 *)o->f90;
            v7->f04 |= 1;
            o->f90 = (TQuestVmDownLoadServer_p90 *)0;
        }
        if (o->f88 != 0) {
            request_resource_release((void *)(o->f88));
            o->f88 = (TQuestVmDownLoadServer_p88 *)0;
        }
        if (o->f84 != 0) {
            request_resource_release((void *)(o->f84));
            o->f84 = (TQuestVmDownLoadServer_p84 *)0;
        }
        operation_8c22e950((void *)o);
        g_8c506504 = 0;
        g_8c5064f8 = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
