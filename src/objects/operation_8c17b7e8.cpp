#include "src/include/classes/TItemProUnit.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x4];
    char f04;
};
extern "C" int TItemEquipBase_vslot31_8c073e5c(void *, void *);
extern "C" void call_8c1c934c(Arg1 *, short);
extern "C" int TItemProUnit_v31_8c17b7e8(TItemProUnit *o, Arg1 *a1)
{
    int t1;
    int t2;
    t1 = TItemEquipBase_vslot31_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        t2 = o->v30();
        a1->f04 = (short)t2 + -9;
        call_8c1c934c(a1, o->f208);
        return 1;
    }
    return 0;
}
