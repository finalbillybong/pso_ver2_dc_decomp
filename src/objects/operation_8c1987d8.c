#include "src/include/classes/TWindowSubGameEnd.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubGameEnd_p20 TWindowSubGameEnd_p20;
typedef struct TWindowSubGameEnd_p24 TWindowSubGameEnd_p24;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubGameEnd *);
TWindowSubGameEnd *TWindowSubGameEnd_dtor_8c1987d8(TWindowSubGameEnd *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2728f8;
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowSubGameEnd_p24 *)0;
        }
        if (o->f20 != 0) {
            request_resource_release((void *)(o->f20));
            o->f20 = (TWindowSubGameEnd_p20 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
