#include "src/include/classes/TItemMoney.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    int f10;
};
extern int TItemEquipBase_vslot31_8c073e5c(void *, void *);
int TItemMoney_v31_8c1033b0(TItemMoney *o, Arg1 *a1)
{
    int t1;
    t1 = TItemEquipBase_vslot31_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        a1->f10 = (int)(o->f140);
        return 1;
    }
    return 0;
}
