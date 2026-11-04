#include "src/include/classes/TWindowSubTechnique.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubTechnique_p24 TWindowSubTechnique_p24;
typedef struct TWindowSubTechnique_p28 TWindowSubTechnique_p28;
typedef struct TWindowSubTechnique_p2c TWindowSubTechnique_p2c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubTechnique *);
TWindowSubTechnique *TWindowSubTechnique_dtor_8c1a87b4(TWindowSubTechnique *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c274620;
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubTechnique_p2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowSubTechnique_p28 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowSubTechnique_p24 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
