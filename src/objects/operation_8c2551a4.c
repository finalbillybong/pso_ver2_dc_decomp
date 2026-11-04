#include "src/include/classes/TItemProShieldModel2.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void TItemEquipBase_dtor_8c20997c(TItemProShieldModel2 *, int);
extern void call_8c122774(void *, TItemProShieldModel2 *);
TItemProShieldModel2 *TItemProShieldModel2_dtor_8c2551a4(TItemProShieldModel2 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c281010;
        if (o != 0) {
            o->dispatch = (void *)0x8c2810d8;
            if (o != 0) {
                o->dispatch = (void *)0x8c267e34;
                TItemEquipBase_dtor_8c20997c(o, 0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
