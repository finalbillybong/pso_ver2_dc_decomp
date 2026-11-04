#include "src/include/classes/TOMineIcon03.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TOMine_dtor_8c0fce4c(void *, short);
extern void call_8c122774(void *, TOMineIcon03 *);
TOMineIcon03 *TOMineIcon03_dtor_8c13e324(TOMineIcon03 *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26d854;
        call_8c053f54();
        operation_8c052124((void *)o);
        TOMine_dtor_8c0fce4c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
