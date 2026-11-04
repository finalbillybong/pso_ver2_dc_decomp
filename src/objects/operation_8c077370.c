#include "src/include/classes/TItemEffectWeapon.h"
typedef struct S_g8c469a48 S_g8c469a48;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int g_8c469a44;
extern S_g8c469a48 *g_8c469a48;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int call_8c18e768(int, int);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TItemEffectWeapon *);
TItemEffectWeapon *TItemEffectWeapon_dtor_8c077370(TItemEffectWeapon *o, int a1)
{
    char *v14;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26308c;
        v14 = (char *)o->f20;
        if (v14 != 0) {
            t1 = call_8c18e768((int)(v14 - g_8c469a44), 0x10);
            *(int *)((char *)((char *)g_8c469a48 + 0x0) + ((unsigned int)(unsigned int)(unsigned int)t1 >> 2 >> 2 >> 1 << 2)) = 0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
