#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c07484c(TObject *, int);
extern void set_field_8c052174(void *);
extern void call_8c07444c(TObject *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c073514(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c262fdc;
        call_8c07484c(o, 3);
        set_field_8c052174((void *)o);
        call_8c07444c(o);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(*(S_g8c4d97e0 **)0x8c4d97e0, o);
        }
    }
    return o;
}
