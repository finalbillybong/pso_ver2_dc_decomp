#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c053f54(void *);
extern void operation_8c052124(void *);
extern void TObjContainerBase_dtor_8c084258(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c1e4774(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c2778f4;
        if (o != 0) {
            o->vtable = (void *)0x8c277a60;
            if (o != 0) {
                o->vtable = (void *)0x8c277d38;
                operation_8c053f54((void *)o);
                operation_8c052124((void *)o);
                TObjContainerBase_dtor_8c084258((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
