#include "src/include/classes/TORainbowCave01.h"
extern "C" int operation_8c11f448(int, float);
extern "C" void update_mode_8c0eea34(void *);
extern "C" int operation_8c03d338(void);
extern "C" void TORainbowCave01_update_8c11f1f0(TORainbowCave01 *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = operation_8c11f448((int)o, o->f108);
    if (t1 == 1) {
        v1 = (int)2;
    } else {
        v1 = (int)1;
    }
    if (v1 != 1) {
        if (v1 == 2) {
            goto L_8c11f23a;
        }
    } else {
        o->f104 += o->f100;
        if (!(0.0f > o->f104)) {
            o->f104 = 0.0f;
            goto L_8c11f25a;
L_8c11f23a:;
            o->f104 -= o->f100;
            if (!(o->f104 > -1.0f)) {
                o->f104 = -1.0f;
            }
        }
    }
L_8c11f25a:;
    update_mode_8c0eea34((void *)o);
    t2 = o->v11(o->ff8, o->ffc);
    if (t2 != 0 && o->f104 > -1.0f) {
        o->f34 &= -0x8000001;
    } else {
        o->f34 |= 0x8000000;
    }
    t3 = operation_8c03d338();
    if (t3 == 1) {
        o->f34 &= -0x8000001;
    }
}
