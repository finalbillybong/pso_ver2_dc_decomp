#include "src/include/classes/TItemObjectTV.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c223564(short);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemObjectTV *);
TItemObjectTV *TItemObjectTV_dtor_8c24d2cc(TItemObjectTV *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c27dd38;
        operation_8c223564(o->f20);
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
