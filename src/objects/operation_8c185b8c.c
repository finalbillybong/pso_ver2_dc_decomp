#include "src/include/classes/TBoss2LaserLight.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss2LaserLight_p44 TBoss2LaserLight_p44;
extern void call_8c014d64(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TBoss2LaserLight *);
TBoss2LaserLight *TBoss2LaserLight_dtor_8c185b8c(TBoss2LaserLight *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c272090;
        if (o->f44 != 0) {
            call_8c014d64((void *)(o->f44));
            o->f44 = (TBoss2LaserLight_p44 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
