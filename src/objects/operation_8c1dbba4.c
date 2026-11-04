#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2f80;
extern int g_8c4e2f84;
extern int g_8c4e2f88;
extern int g_8c4e2f8c;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c1dbba4(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c277318;
        g_8c4e2f80 = 0;
        g_8c4e2f84 = 0;
        g_8c4e2f88 = 0;
        g_8c4e2f8c = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
