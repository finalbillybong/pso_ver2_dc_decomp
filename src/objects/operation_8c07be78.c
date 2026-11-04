#include "src/include/classes/TBoss1DragonEffBullet.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss1DragonEffBullet_p48 TBoss1DragonEffBullet_p48;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TBoss1DragonEffBullet *);
TBoss1DragonEffBullet *TBoss1DragonEffBullet_dtor_8c07be78(TBoss1DragonEffBullet *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->vtable = (void *)0x8c26412c;
        if (o->f48 != 0) {
            v1 = (S_vv1 *)o->f48;
            v1->f04 |= 1;
            o->f48 = (TBoss1DragonEffBullet_p48 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
