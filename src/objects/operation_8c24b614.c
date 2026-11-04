#include "src/include/classes/TODoorVS2Door01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c053f54(void *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0eebe4(void *, short);
extern void call_8c122774(void *, TODoorVS2Door01 *);
TODoorVS2Door01 *TODoorVS2Door01_dtor_8c24b614(TODoorVS2Door01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c27d7f8;
        operation_8c053f54((void *)o);
        operation_8c052124((void *)o);
        destroy_object_8c0eebe4((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
