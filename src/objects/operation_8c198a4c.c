#include "src/include/classes/TBoss1DragonColli_C.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TBoss1DragonColli_C *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TBoss1DragonColli_C *);
TBoss1DragonColli_C *TBoss1DragonColli_C_dtor_8c198a4c(TBoss1DragonColli_C *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c272930;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
