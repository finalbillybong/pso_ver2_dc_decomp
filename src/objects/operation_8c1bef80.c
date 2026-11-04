#include "src/include/classes/TOCapsuleMachine01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c052124(void *);
extern void call_8c053f54(TOCapsuleMachine01 *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TOCapsuleMachine01 *);
TOCapsuleMachine01 *TOCapsuleMachine01_dtor_8c1bef80(TOCapsuleMachine01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c275658;
        operation_8c052124((void *)o);
        call_8c053f54(o);
        destroy_object_8c0ee900((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
