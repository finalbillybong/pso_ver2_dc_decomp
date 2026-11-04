#include "src/include/classes/TODoorVoShip.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TODoorVoShip *);
TODoorVoShip *TODoorVoShip_dtor_8c1af62c(TODoorVoShip *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c274b20;
        call_8c053f54();
        operation_8c052124((void *)o);
        destroy_object_8c0ee900((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
