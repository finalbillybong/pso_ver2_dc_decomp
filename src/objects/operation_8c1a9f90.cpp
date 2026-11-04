#include "src/include/object_vtable.h"
#include "src/include/classes/TObjBgmColCtrl.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_g8c4e1a48;
class S_g8c4e1a48 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4e1a48Data {

} S_g8c4e1a48Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e1a48 *g_8c4e1a48;
extern "C" void TObject_dtor_8c03311c(void *, short);
extern "C" void call_8c122774(void *, TObjBgmColCtrl *);
extern "C" TObjBgmColCtrl *TObjBgmColCtrl_dtor_8c1a9f90(TObjBgmColCtrl *o, int a1)
{
    if (o != 0) {
        TOBJECT_VTABLE(o) = (void *)(void *)0x8c274674;
        if (g_8c4e1a48 != 0) {
            if (g_8c4e1a48 != 0) {
                g_8c4e1a48->v0(1);
            }
            g_8c4e1a48 = (S_g8c4e1a48 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
