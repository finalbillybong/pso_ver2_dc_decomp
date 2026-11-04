#include "src/include/classes/TBoss2PhotonBullet.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss2PhotonBullet_p11c TBoss2PhotonBullet_p11c;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, TBoss2PhotonBullet *);
TBoss2PhotonBullet *TBoss2PhotonBullet_dtor_8c16737c(TBoss2PhotonBullet *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26feec;
        if (o->f11c != 0) {
            v1 = (S_vv1 *)o->f11c;
            v1->f04 |= 1;
            o->f11c = (TBoss2PhotonBullet_p11c *)0;
        }
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
