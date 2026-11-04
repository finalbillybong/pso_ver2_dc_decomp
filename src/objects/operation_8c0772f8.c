#include "src/include/classes/TItemEffectWeapon.h"
typedef struct S_g8c469a44 S_g8c469a44;
extern void TObject_ctor_8c0330e4(void *, void *);
TItemEffectWeapon *TItemEffectWeapon_ctor_8c0772f8(TItemEffectWeapon *o, int a1, int a2)
{
    int v1;
    char *v2;
    int v3;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26308c;
    o->tag = *(int *)0x8c2fd714;
    o->size = 0x30;
    v1 = (int)0;
    v2 = (char *)*(int *)0x8c469a48;
    while (v1 != 0x10) {
        if (*(int *)((char *)((char *)v2 + 0x0) + (v1 << 2)) == 0) {
            *(int *)((char *)((char *)v2 + 0x0) + (v1 << 2)) = 1;
            v3 = (int)&*(int *)((char *)((char *)*(S_g8c469a44 **)0x8c469a44 + 0x0) + (v1 << 9));
            goto L_8c077342;
        }
        v1 = (int)(v1 + 1);
    }
    v3 = (int)0;
L_8c077342:;
    o->f20 = v3;
    o->f28 = a2;
    o->f24 = 0;
    o->f2c = 0;
    o->f04 |= 0x10;
    return o;
}
