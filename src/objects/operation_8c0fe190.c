#include "src/include/classes/TOMineTrap.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TOMineTrap *);
extern void operation_8c052124(void *);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, TOMineTrap *);
TOMineTrap *TOMineTrap_dtor_8c0fe190(TOMineTrap *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c2690a0;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        if (o != 0) {
            o->vtable = (void *)0x8c269238;
            destroy_object_state((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
