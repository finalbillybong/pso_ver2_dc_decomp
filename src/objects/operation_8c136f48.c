#include "src/include/classes/TObjFogCollision.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjFogCollision *);
TObjFogCollision *operation_8c136f48(TObjFogCollision *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26cfac;
        if (o != 0) {
            o->dispatch = (void *)0x8c26cff4;
            if (o != 0) {
                o->dispatch = (void *)0x8c26d03c;
                destroy_shared_object((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
