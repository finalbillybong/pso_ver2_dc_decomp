#include "src/include/classes/TObjDFRecBall.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjDFRecBall_p48 TObjDFRecBall_p48;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjDFRecBall *);
TObjDFRecBall *TObjDFRecBall_dtor_8c21b39c(TObjDFRecBall *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c27853c;
        if (o->f48 != 0) {
            mark_effect_for_release((void *)(o->f48));
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
