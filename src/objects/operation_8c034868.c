#include "src/include/classes/TCharaMaking.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int g_8c460900;
extern int g_8c460904;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TCharaMaking *);
TCharaMaking *TCharaMaking_dtor_8c034868(TCharaMaking *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26159c;
        g_8c460900 = 0;
        g_8c460904 = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
