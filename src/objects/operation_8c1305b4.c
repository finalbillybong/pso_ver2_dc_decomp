#include "src/include/classes/TOKeyGenericSw.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TOKey_dtor_8c112efc(void *, short);
extern void call_8c122774(void *, TOKeyGenericSw *);
TOKeyGenericSw *TOKeyGenericSw_dtor_8c1305b4(TOKeyGenericSw *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26cb6c;
        call_8c053f54();
        operation_8c052124((void *)o);
        TOKey_dtor_8c112efc((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
