#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c19cf78(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c272c0c;
        *(int *)0x8c4dc4d8 += -1;
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
