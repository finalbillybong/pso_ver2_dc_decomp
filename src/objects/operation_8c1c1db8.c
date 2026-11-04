#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TObjCityDoor_Warp *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObjCityDoor_Warp *);
TObjCityDoor_Warp *TObjCityDoor_Warp_dtor_8c1c1db8(TObjCityDoor_Warp *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2759e0;
        if (o != 0) {
            o->dispatch = (void *)0x8c275b18;
            call_8c053f54(o);
            operation_8c052124((void *)o);
            destroy_context_8c051f28((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
