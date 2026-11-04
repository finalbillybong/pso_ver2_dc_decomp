#include "src/include/classes/TOKeyAncient01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TOKey_dtor_8c112efc(void *, short);
extern void call_8c122774(void *, TOKeyAncient01 *);
TOKeyAncient01 *TOKeyAncient01_dtor_8c1144b4(TOKeyAncient01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c269d8c;
        call_8c053f54();
        operation_8c052124((void *)o);
        TOKey_dtor_8c112efc((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
