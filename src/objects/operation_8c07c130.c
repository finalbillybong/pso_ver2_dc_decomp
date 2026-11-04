#include "src/include/classes/TBoss1DragonEffTail.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss1DragonEffTail_pf0 TBoss1DragonEffTail_pf0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0f3384(int, int);
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, TBoss1DragonEffTail *);
TBoss1DragonEffTail *TBoss1DragonEffTail_dtor_8c07c130(TBoss1DragonEffTail *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c264148;
        operation_8c0f3384((int)(o->ff0), 1);
        o->ff0 = (TBoss1DragonEffTail_pf0 *)0;
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
