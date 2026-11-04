#include "src/include/classes/TObjBattery.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TObjBattery *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0803a8(void *, short);
extern void call_8c122774(void *, TObjBattery *);
TObjBattery *TObjBattery_dtor_8c086ae8(TObjBattery *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c264f14;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_object_8c0803a8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
