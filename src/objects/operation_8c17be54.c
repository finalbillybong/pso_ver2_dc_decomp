#include "src/include/classes/TItemWpnChainSaw.h"
typedef struct TItemWpnChainSaw_p38 TItemWpnChainSaw_p38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_2c_4_4 Arg0_38_2c_4_4;
struct TItemWpnChainSaw_p38 {
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
extern void call_8c0344f0(void *, short, int, int);
void TItemWpnChainSaw_v52_8c17be54(TItemWpnChainSaw *o)
{
    call_8c0344f0((void *)(o->f38->f2c->f04->f04), o->f234, 0, 0);
}
