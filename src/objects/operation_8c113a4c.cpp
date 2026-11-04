#include "src/include/classes/TLazerFenceSw.h"
typedef struct S_g8c4d820c S_g8c4d820c;
struct S_g8c4d820c {
    char unknown0[0x4];
    int f04;
};
extern "C" void TLazerFenceSw_v18_8c113a4c(TLazerFenceSw *o)
{
    float v3;
    float v4;
    {
        float *pf = &o->fe8;
        *pf += o->ff0;
        v4 = *pf;
        v3 = (float)(float)(unsigned int)((*(S_g8c4d820c **)0x8c4d820c)->f04 + -1);
        if (v4 > v3) {
            o->fe8 = 0.0f;
        }
    }
    o->v21();
}
