#include "src/include/classes/TItemWpnDragonClaw.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemWpnDragonClaw_p1bc TItemWpnDragonClaw_p1bc;
extern int operation_8c076d7c(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemEffectWeapon_ctor_8c0772f8(void *, int, int);
void TItemWpnDragonClaw_v53_8c23c680(TItemWpnDragonClaw *o)
{
    int v1;
    int t1;
    int t2;
    if (o->f38 != 0 && o->f234 == 0 && o->f1bc != 0) {
        t2 = operation_8c076d7c((int)o);
        v1 = (int)(t2 & -0x70000001);
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t1 != 0) {
            TItemEffectWeapon_ctor_8c0772f8((void *)t1, (int)(o->f1bc), v1);
        }
        o->f234 = (int)(t1);
    }
}
