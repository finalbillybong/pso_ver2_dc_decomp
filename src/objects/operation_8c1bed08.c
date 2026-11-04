#include "src/include/classes/TWindowCtrlMain.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4e2bbc S_g8c4e2bbc;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4e2bbc *g_8c4e2bbc;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowCtrlMain *);
TWindowCtrlMain *TWindowCtrlMain_dtor_8c1bed08(TWindowCtrlMain *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27563c;
        if (g_8c4e2bbc != 0) {
            v1 = (S_vv1 *)g_8c4e2bbc;
            v1->f04 |= 1;
            g_8c4e2bbc = (S_g8c4e2bbc *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
