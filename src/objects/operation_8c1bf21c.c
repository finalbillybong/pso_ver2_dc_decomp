#include "src/include/classes/TOComputerMachine01.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void operation_8c052124(void *);
extern void call_8c053f54(TOComputerMachine01 *);
extern void destroy_object_8c0f1100(void *, short);
extern void call_8c122774(void *, TOComputerMachine01 *);
TOComputerMachine01 *TOComputerMachine01_dtor_8c1bf21c(TOComputerMachine01 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2756a0;
        operation_8c052124((void *)o);
        call_8c053f54(o);
        destroy_object_8c0f1100((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
