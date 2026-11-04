#include "src/include/classes/TItemWpnDelsabre.h"
typedef struct TItemWpnDelsabre_p38 TItemWpnDelsabre_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_2c_4_4 Arg0_38_2c_4_4;
struct TItemWpnDelsabre_p38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
struct Arg0_38_2c_4 {
    char unknown0[0x4];
    Arg0_38_2c_4_4 *f04;
};
extern void call_8c0344f0(void *, int, int, int);
void TItemWpnDelsabre_v52_8c179b78(TItemWpnDelsabre *o)
{
    call_8c0344f0((void *)(o->f38->f2c->f04->f04), 2, 0, 1);
}
