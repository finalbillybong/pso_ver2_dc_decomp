#include "src/include/classes/TItemWpnHand.h"
typedef struct TItemWpnHand_p13c TItemWpnHand_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
struct Arg0_13c_s754 {
    char unknown0[0x8];
    float f08;
};
void TItemWpnHand_v55_8c17a0a4(TItemWpnHand *o)
{
    ((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f08 = 1.0f;
}
