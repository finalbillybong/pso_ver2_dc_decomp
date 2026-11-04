#include "src/include/classes/TOCapsuleAncient01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_8c0f1100(void *, short);
extern void call_8c122774(void *, TOCapsuleAncient01 *);
TOCapsuleAncient01 *TOCapsuleAncient01_dtor_8c0f20a8(TOCapsuleAncient01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2685f0;
        call_8c053f54();
        operation_8c052124((void *)o);
        destroy_object_8c0f1100((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
