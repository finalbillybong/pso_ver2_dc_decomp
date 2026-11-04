#include "src/include/classes/TItemMag.h"
typedef struct Frame Frame;
typedef struct TItemMag_p13c TItemMag_p13c;
struct TItemMag_p13c {
    char unknown0[0x350];
    int f350;
};
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char f0c;
    char f0d;
    char f0e;
    char unknownf[0x1];
};
extern int operation_8c073e5c(void *, void *);
extern void call_8c207738(Frame *, int);
extern void call_8c1c8d90(int, Frame *);
int TItemMag_v31_8c07d3f8(TItemMag *o, int a1)
{
    Frame frame;
    int v1;
    int v2;
    int v5;
    int t1;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        v5 = (int)0;
        if (o->f13c != 0) {
            v1 = (int)(((o->f13c->f350 & 0x800000)) != 0);
            v2 = (int)0;
            if (v1 != 0) {
                v2 = (int)1;
            }
            v5 = (int)v2;
        }
        if (v5 == 1) {
            (&frame)->f00 = o->f1e4;
            (&frame)->f02 = o->f1e6;
            (&frame)->f04 = o->f1e8;
            (&frame)->f06 = o->f1ea;
            (&frame)->f08 = o->f1ec;
            (&frame)->f0a = o->f1ee;
            (&frame)->f0c = o->f1f0;
            (&frame)->f0d = o->f1f1;
            (&frame)->f0e = o->f1f2;
            call_8c207738((Frame *)((&frame)), -5);
            call_8c1c8d90(a1, (Frame *)((&frame)));
        } else {
            call_8c1c8d90(a1, (Frame *)(&o->f1e4));
        }
        return 1;
    }
    return 0;
}
