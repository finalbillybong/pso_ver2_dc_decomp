#include "src/include/classes/TOFenceAncient02.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_8c0f22f8(void *, short);
extern void call_8c122774(void *, TOFenceAncient02 *);
TOFenceAncient02 *TOFenceAncient02_dtor_8c0f2a5c(TOFenceAncient02 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2686e0;
        call_8c053f54();
        operation_8c052124((void *)o);
        destroy_object_8c0f22f8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
