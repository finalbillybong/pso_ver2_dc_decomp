#include "src/include/classes/TItemMagSub.h"
typedef struct TItemMagSub_p24 TItemMagSub_p24;
struct TItemMagSub_p24 {
    char unknown0[0x830];
    float f830;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c1f1e1c(TItemMagSub *);
TItemMagSub *TItemMagSub_ctor_8c1f1d38(TItemMagSub *o, TItemMagSub_p24 *a1, int a2)
{
    TItemMagSub **home = &o;
    int v1;
    float v2;
    int v3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c27803c;
    o->tag = (int)(*(int *)0x8c32c408);
    o->size = 0xec;
    o->f24 = a1;
    o->f28 = 0;
    o->f30 = 0;
    o->f2c = 0;
    call_8c1f1e1c(o);
    o->f68 = 0;
    o->f20 = a2;
    o->f84 = 0.0f;
    o->f80 = 0.0f;
    v1 = (int)0;
    v3 = -1;
    while (v1 != 3) {
        *(int *)&o->f80 = v3;
        v1 = (int)(v1 + 1);
    }
    v2 = (float)a1->f830;
    if (v2 > 0.5f) {
        o->fcc = 1.1f - v2 * 0.2f;
    } else {
        o->fcc = 1.0f;
    }
    o->f04 |= 0x10;
    return o;
}
