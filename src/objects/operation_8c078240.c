#include "src/include/classes/TItemWpnSlicer.h"
typedef struct Frame Frame;
typedef struct TItemWpnSlicer_p13c TItemWpnSlicer_p13c;
struct Frame {
    unsigned short f00;
    char unknown2[0x2];
    int f04;
    int f08;
    int f0c;
    short f10;
    short f12;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
};
struct TItemWpnSlicer_p13c {
    char unknown0[0x20];
    short f20;
    char unknown22[0x732];
    short f754;
};
extern int call_8c1aaabc(void *);
extern int call_8c1aaafc(void *);
extern void operation_8c137998(void *);
void TItemWpnSlicer_v49_8c078240(TItemWpnSlicer *o)
{
    Frame frame;
    int t1;
    int t2;
    (&frame)->f00 = 0xffff;
    (&frame)->f0c = -1;
    (&frame)->f04 = 0;
    (&frame)->f10 = -1;
    (&frame)->f12 = -1;
    (&frame)->f14 = 1.0f;
    (&frame)->f24 = 0.0f;
    (&frame)->f20 = 0.0f;
    (&frame)->f1c = 0.0f;
    (&frame)->f18 = 0.0f;
    (&frame)->f00 = o->f13c->f20;
    (&frame)->f0c = (int)(o->fe8);
    (&frame)->f04 = (int)(o->f28);
    (&frame)->f08 = (int)(o->f1d4);
    t1 = call_8c1aaabc((void *)(&o->f13c->f754));
    (&frame)->f10 = t1;
    t2 = call_8c1aaafc((void *)(&o->f13c->f754));
    (&frame)->f12 = t2;
    (&frame)->f14 = *(float *)((char *)0x8c2e73b4 + (o->f13c->f754 << 2));
    (&frame)->f18 = 1.0f;
    (&frame)->f1c = 0.0f;
    (&frame)->f20 = 1.0f;
    (&frame)->f24 = 0.7f;
    operation_8c137998((void *)(&frame));
}
