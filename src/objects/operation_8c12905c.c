#include "src/include/classes/TContainerAncient01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, TContainerAncient01 *);
TContainerAncient01 *TContainerAncient01_dtor_8c12905c(TContainerAncient01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26c2dc;
        call_8c053f54();
        operation_8c052124((void *)o);
        destroy_object_state((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
