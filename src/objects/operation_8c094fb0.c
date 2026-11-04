#include "src/include/classes/TObjEneMe1Canadin.h"
extern int call_8c05a0a8(void);
extern float call_8c12b570(float);
void operation_8c094fb0(TObjEneMe1Canadin *o)
{
    int t1;
    float t2;
    t1 = call_8c05a0a8();
    if (t1 != 0) {
        t2 = call_8c12b570(o->f370);
        if ((int)t2 == 0) {
            *(int *)((char *)o + 0x3e4) |= 0x100;
            o->f3e4 &= -0x201;
            return;
        }
        *(int *)((char *)o + 0x3e4) |= 0x200;
        o->f3e4 &= -0x101;
    }
}
