#include "src/include/classes/TMotorcycle.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TObjMesBase_dtor_8c1ab174(void *, short);
extern void call_8c122774(void *, TMotorcycle *);
TMotorcycle *TMotorcycle_dtor_8c080790(TMotorcycle *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2643f0;
        call_8c053f54();
        operation_8c052124((void *)o);
        TObjMesBase_dtor_8c1ab174((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
