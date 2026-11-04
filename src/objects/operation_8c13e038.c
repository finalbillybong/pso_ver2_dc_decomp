#include "src/include/classes/TOMineIcon02.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TOMine_dtor_8c0fce4c(void *, short);
extern void call_8c122774(void *, TOMineIcon02 *);
TOMineIcon02 *TOMineIcon02_dtor_8c13e038(TOMineIcon02 *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26d6bc;
        call_8c053f54();
        operation_8c052124((void *)o);
        TOMine_dtor_8c0fce4c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
