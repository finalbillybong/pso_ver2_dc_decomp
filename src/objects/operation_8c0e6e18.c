#include "src/include/classes/TItemProArmor.h"
typedef struct TItemEquipBase_p13c TItemEquipBase_p13c;
struct TItemEquipBase_p13c {
    char unknown0[0x20];
    short f20;
};
extern void call_8c18a4ac(short);
void TItemProArmor_v44_8c0e6e18(TItemProArmor *o)
{
    if (((o->fec & 0x40)) == 0) {
        call_8c18a4ac(o->f13c->f20);
    }
}
