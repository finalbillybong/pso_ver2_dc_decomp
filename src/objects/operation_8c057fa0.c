#include "src/include/classes/TObjEneBm3FlyNest.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void TObjEneDD_dtor_8c059c30(void *, short);
extern void call_8c122774(void *, TObjEneBm3FlyNest *);
TObjEneBm3FlyNest *TObjEneBm3FlyNest_dtor_8c057fa0(TObjEneBm3FlyNest *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c262418;
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x45c)), (short)-1);
        TObjEneDD_dtor_8c059c30((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
