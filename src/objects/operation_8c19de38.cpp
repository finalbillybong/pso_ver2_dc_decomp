#include "src/include/object_vtable.h"
#include "src/include/classes/TQuestColCtrl.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_g8c4dc4d4;
class S_g8c4dc4d4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4dc4d4Data {

} S_g8c4dc4d4Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dc4d4 *g_8c4dc4d4;
extern "C" void TObject_dtor_8c03311c(void *, short);
extern "C" void call_8c122774(void *, TQuestColCtrl *);
extern "C" TQuestColCtrl *TQuestColCtrl_dtor_8c19de38(TQuestColCtrl *o, int a1)
{
    if (o != 0) {
        TOBJECT_VTABLE(o) = (void *)(void *)0x8c272a28;
        if (g_8c4dc4d4 != 0) {
            if (g_8c4dc4d4 != 0) {
                g_8c4dc4d4->v0(1);
            }
            g_8c4dc4d4 = (S_g8c4dc4d4 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
