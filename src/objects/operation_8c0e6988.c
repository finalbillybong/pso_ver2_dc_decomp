#include "src/include/classes/TObjEneDimedian.h"
typedef struct Arg0_3d8 Arg0_3d8;
typedef struct Arg0_s3c4 Arg0_s3c4;
struct Arg0_s3c4 {
    char unknown0[0x14];
    Arg0_3d8 *f14;
};
struct Arg0_3d8 {
    char unknown0[0x18];
    int f18;
};
void TObjEneDimedian_v90_8c0e6988(TObjEneDimedian *o)
{
    int t1;
    o->f3ac = 1;
    t1 = ((int (*)(void *))(((Arg0_s3c4 *)((char *)o + 0x3c4))->f14->f18))((void *)(((char *)o + 0x3c4)));
    if (t1 == 1) {
        o->f04 |= 1;
    }
}
