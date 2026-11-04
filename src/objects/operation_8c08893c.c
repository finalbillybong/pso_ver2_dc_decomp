#include "src/include/classes/TObjMapWarpAncient.h"
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_64 S_g8c467180_2c_64;
typedef struct TObjMapWarpAncient_pe8 TObjMapWarpAncient_pe8;
struct Frame {
    float f00;
    float f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x64];
    S_g8c467180_2c_64 *f64;
};
struct TObjMapWarpAncient_pe8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c156c24(int, int);
extern void call_8c156d48(TObjMapWarpAncient_pe8 *, void *, int, int, int);
extern void call_8c156f50(TObjMapWarpAncient_pe8 *);
extern void call_8c157138(TObjMapWarpAncient_pe8 *);
void operation_8c08893c(TObjMapWarpAncient *o)
{
    Frame frame;
    int t1;
    if (o->fe8 == 0) {
        (&frame)->f00 = 400.0f;
        (&frame)->f04 = 250.0f;
        t1 = operation_8c156c24((int)(&frame), 1);
        o->fe8 = (TObjMapWarpAncient_pe8 *)t1;
        call_8c156d48((TObjMapWarpAncient_pe8 *)(o->fe8), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f64), 2, 0, -1);
        call_8c156f50((TObjMapWarpAncient_pe8 *)(o->fe8));
        call_8c157138((TObjMapWarpAncient_pe8 *)(o->fe8));
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
    }
}
