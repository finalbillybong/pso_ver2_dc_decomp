#include "src/include/types/ViewParameters.h"
typedef struct ViewParameters_p30 ViewParameters_p30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Arg0_30_0 {
    int f00;
};
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c1cd4ec(ViewParameters *o)
{
    short v2;
    short v3;
    short v1;
    play_se_8c05fbf8(0x50000, 0, 0, 0);
    v1 = (short)o->f84;
    v2 = (short)o->f86;
    v3 = (short)v1;
    do {
        v3 = (short)(v3 + 1);
        if ((short)v3 >= v2) {
            if (((o->f80 & 0xffff & 1)) != 0) {
                return;
            }
            v3 = (short)0;
        }
        if ((short)v3 == v1) {
            return;
        }
    } while ((((*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + ((short)v3 << 2)))->f00 & 1)) == 0);
    o->f84 = v3;
}
