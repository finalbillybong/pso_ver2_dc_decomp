#include "src/include/classes/TObjDoaEx01.h"
extern int operation_8c0eea7c(int, float);
extern void operation_8c05426c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjDoaEx01_v17_8c24b2e4(TObjDoaEx01 *o)
{
    int v1;
    int t1;
    v1 = (int)o->f108;
    if ((v1 & 1) == 1) {
        t1 = operation_8c0eea7c((int)o, 4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        play_se_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    if (((v1 & 0x100000)) != 0) {
        o->f110 += 0.1f;
        if (1.0f > o->f110) {
            return;
        }
        o->f108 &= -0x100001;
        return;
    }
    o->f110 -= 0.1f;
    if (!(o->f110 > 0.0f)) {
        o->f108 |= 0x100000;
    }
}
