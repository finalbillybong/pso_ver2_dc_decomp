#include "src/include/classes/TObjLight.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c09e6f4(void *, int);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjLight *);
TObjLight *TObjLight_dtor_8c0ed9d4(TObjLight *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c268020;
        operation_8c09e6f4((void *)o, -3);
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
