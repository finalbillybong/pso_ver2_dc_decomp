#include "src/include/classes/TBoss4Bishi.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss4Zako_p3d0 TBoss4Zako_p3d0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void mark_effect_for_release(void *);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TBoss4Bishi *);
TBoss4Bishi *TBoss4Bishi_dtor_8c1bc99c(TBoss4Bishi *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c275098;
        if (o != 0) {
            o->dispatch = (void *)0x8c275370;
            operation_8c052124((void *)o);
            o->f3a0 = 0;
            if (o->f3d0 != 0) {
                mark_effect_for_release((void *)(o->f3d0));
                o->f3d0 = (TBoss4Zako_p3d0 *)0;
            }
            TObjEnemy_dtor_8c0120f4((void *)o, 0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
