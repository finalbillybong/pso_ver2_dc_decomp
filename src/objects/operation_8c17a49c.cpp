#include "src/include/classes/TItemWpnOriginalShot.h"
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Arg0_0 Arg0_0;
typedef struct TItemWpnOriginalShot_p13c TItemWpnOriginalShot_p13c;
typedef struct S_vv1 S_vv1;
typedef struct S_x14144 S_x14144;
typedef struct S_x14144_s4 S_x14144_s4;
struct S_vv1 {
    char unknown0[0x37c];
    int f37c;
};
struct S_x14144 {
    char unknown0[0x4];
    short f04;
};
struct S_x14144_s4 {
    short f00;
    short f02;
};
struct Frame {
    char unknown0[0xc];
};
extern "C" int current_mode_active(void);
extern "C" void TItemEffHeaven_create_8c1c5c5c(int, int, short, int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void TItemWpnOriginalShot_v39_8c17a49c(TItemWpnOriginalShot *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v4;
    int v8;
    int v11;
    int v6;
    int v13;
    int v7;
    int v16;
    int t1;
    if (o->f13c != 0) {
        t1 = current_mode_active();
        if (t1 != 0) {
            v1 = (S_vv1 *)o->f13c;
            if (*(int *)0x8c44be04 == (int)v1->f37c) {
                if (a1 == 0) {
                    o->v48(((char *)o + 0x260), 0, 0, 1);
                    return;
                }
                if (a1 == 1) {
                    v2 = (int)o->f234;
                    if (v2 < 0 || v2 > 0xa) {
                        v4 = (int)0;
                    } else {
                        v4 = (int)v2;
                    }
                    if (v4 > 0) {
                        v6 = (int)0x234;
                        v7 = (int)0x13c;
                        for (v8 = 0; v13 = *(int *)((char *)((char *)o + 0x0) + (v6)), v8 != (v13 < 0 || v13 > 0xa ? 0 : v13); v8++) {
                            S_x14144_s4 *p = (S_x14144_s4 *)((char *)(int)o + v6 + (v8 << 2) + 0x4);
                            TItemEffHeaven_create_8c1c5c5c((int)(*(S_g8c44be9c **)0x8c44be9c), (int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))), p->f00, (int)p->f02);
                        }
                        return;
                    }
                    operation_8c075894((void *)o, (void *)v1, (int)(o->f224), (int)(&frame));
                    o->v48((&frame), 0, 0, 1);
                }
            }
        }
    }
}
