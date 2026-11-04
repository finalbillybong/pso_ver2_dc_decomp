#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c1b04bc(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c274ba0;
        call_8c053f54();
        operation_8c052124((void *)o);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
