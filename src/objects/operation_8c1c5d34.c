#include "src/include/classes/TItemEffHeaven.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_30 Arg0_30;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemEffHeaven *);
TItemEffHeaven *TItemEffHeaven_dtor_8c1c5d34(TItemEffHeaven *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c276684;
        v1 = (int)0;
        while (v1 != 3) {
            mark_effect_for_release((void *)(*(Arg0_30 **)((char *)((char *)o + 0x30) + (v1 << 2))));
            v1 = (int)(v1 + 1);
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
