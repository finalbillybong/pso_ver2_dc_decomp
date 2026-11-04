#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TObject *);
extern void operation_8c052124(void *);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c12a2b8(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26c70c;
        if (o != 0) {
            o->vtable = (void *)0x8c26c874;
            call_8c053f54(o);
            operation_8c052124((void *)o);
            destroy_object_state((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
