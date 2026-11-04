#include "src/include/classes/TItemWpnNaganoClaw.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TItemWpnNaganoClaw_p1bc TItemWpnNaganoClaw_p1bc;
extern int operation_8c076d7c(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TItemEffectWeapon_ctor_8c0772f8(void *, int, int);
void TItemWpnNaganoClaw_v53_8c24f1a0(TItemWpnNaganoClaw *o)
{
    int v1;
    int t3;
    int t1;
    int t2;
    if (o->f38 != 0 && o->f234 == 0 && o->f1bc != 0) {
        t3 = operation_8c076d7c((int)o);
        v1 = (int)(t3 & -0x70000001);
        t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t1 != 0) {
            TItemEffectWeapon_ctor_8c0772f8((void *)t1, (int)(o->f1bc), v1);
        }
        o->f234 = (int)(t1);
        t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
        if (t2 != 0) {
            TItemEffectWeapon_ctor_8c0772f8((void *)t2, (int)(o->f1bc), v1);
        }
        o->f238 = (int)(t2);
    }
}
