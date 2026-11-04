#include "src/include/classes/TOWreckAncient.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c053f54(void *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TOWreckAncient *);
TOWreckAncient *TOWreckAncient_dtor_8c0f030c(TOWreckAncient *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26843c;
        operation_8c053f54((void *)o);
        operation_8c052124((void *)o);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
