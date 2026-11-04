#include "src/include/classes/TItemProUnit.h"
typedef struct TItemEquipBase_p13c TItemEquipBase_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
void TItemProUnit_v17_8c17b70c(TItemProUnit *o)
{
    float *p;
    if (o->f1d8 == 0x13) {
        p = &((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08;
        if (*p < o->f204) {
            *p = o->f204;
        }
    }
}
