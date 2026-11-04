#include "src/include/classes/TWindowInputNumber.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowInputNumber_p78 TWindowInputNumber_p78;
extern void operation_8c199b40(int, int);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, TWindowInputNumber *);
TWindowInputNumber *TWindowInputNumber_dtor_8c1bd124(TWindowInputNumber *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2754fc;
        if (o->state != 0) {
            operation_8c199b40((int)(o->state), 1);
        }
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
