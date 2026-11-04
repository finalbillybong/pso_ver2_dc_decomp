#include "src/include/classes/TBoss1DragonEffBreath.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss1DragonEffBreath_p38 TBoss1DragonEffBreath_p38;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0f3384(int, int);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TBoss1DragonEffBreath *);
TBoss1DragonEffBreath *TBoss1DragonEffBreath_dtor_8c078a5c(TBoss1DragonEffBreath *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c263e00;
        operation_8c0f3384((int)(o->f38), 1);
        o->f38 = (TBoss1DragonEffBreath_p38 *)0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
