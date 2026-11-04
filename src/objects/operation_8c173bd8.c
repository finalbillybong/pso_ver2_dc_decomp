#include "src/include/classes/TQuestThreadBoard.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TQuestThreadBoard_p2c TQuestThreadBoard_p2c;
typedef struct TQuestThreadBoard_p30 TQuestThreadBoard_p30;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db648;
extern void request_resource_release(void *);
extern void release_scene_8c16c1e4(void);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TQuestThreadBoard *);
TQuestThreadBoard *TQuestThreadBoard_dtor_8c173bd8(TQuestThreadBoard *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c27023c;
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TQuestThreadBoard_p2c *)0;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TQuestThreadBoard_p30 *)0;
        }
        release_scene_8c16c1e4();
        g_8c4db648 = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
