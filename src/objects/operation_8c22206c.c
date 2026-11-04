#include "src/include/classes/TQuestListVM.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TQuestListVM_p22b8 TQuestListVM_p22b8;
typedef struct TQuestListVM_p22bc TQuestListVM_p22bc;
typedef struct TQuestListVM_p22c0 TQuestListVM_p22c0;
typedef struct TQuestListVM_p22c4 TQuestListVM_p22c4;
typedef struct TQuestListVM_p22cc TQuestListVM_p22cc;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c506070;
extern void request_resource_release(void *);
extern void game_free_8c011ec0(void *);
extern void TShopWindowBase_dtor_8c10671c(void *, short);
extern void call_8c122774(void *, TQuestListVM *);
TQuestListVM *TQuestListVM_dtor_8c22206c(TQuestListVM *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c278928;
        if (o->f22c4 != 0) {
            request_resource_release((void *)(o->f22c4));
            o->f22c4 = (TQuestListVM_p22c4 *)0;
        }
        if (o->f22c0 != 0) {
            request_resource_release((void *)(o->f22c0));
            o->f22c0 = (TQuestListVM_p22c0 *)0;
        }
        if (o->f22bc != 0) {
            request_resource_release((void *)(o->f22bc));
            o->f22bc = (TQuestListVM_p22bc *)0;
        }
        if (o->f22b8 != 0) {
            request_resource_release((void *)(o->f22b8));
            o->f22b8 = (TQuestListVM_p22b8 *)0;
        }
        if (o->f22cc != 0) {
            game_free_8c011ec0((void *)(o->f22cc));
            o->f22cc = (TQuestListVM_p22cc *)0;
        }
        g_8c506070 = 0;
        TShopWindowBase_dtor_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
