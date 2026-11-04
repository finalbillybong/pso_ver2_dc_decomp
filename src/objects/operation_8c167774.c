#include "src/include/classes/TPhotonConcentrate.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TPhotonConcentrate_p130 TPhotonConcentrate_p130;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TPhotonConcentrate *);
TPhotonConcentrate *TPhotonConcentrate_dtor_8c167774(TPhotonConcentrate *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26ff58;
        if (o->f130 != 0) {
            v1 = (S_vv1 *)o->f130;
            v1->f04 |= 1;
            o->f130 = (TPhotonConcentrate_p130 *)0;
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
