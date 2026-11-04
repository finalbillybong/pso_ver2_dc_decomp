#include "src/include/classes/TItemWpnHand.h"
typedef struct TItemWpnHand_p13c TItemWpnHand_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
void TItemWpnHand_v54_8c17a044(TItemWpnHand *o)
{
    float v5;
    v5 = 1.0f;
    switch (o->f138) {
    case 0:
        v5 = 1.05f;
        break;
    case 1:
        v5 = 1.1f;
        break;
    case 2:
        v5 = 1.15f;
        break;
    case 3:
        v5 = 1.2f;
        break;
    }
    ((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08 = v5;
}
