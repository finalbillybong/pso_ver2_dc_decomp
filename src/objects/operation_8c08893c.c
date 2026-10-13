typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_64 S_g8c467180_2c_64;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
};
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
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int operation_8c156c24(int, int);
extern void call_8c156d48(Arg0_e8 *, void *, int, int, int);
extern void call_8c156f50(Arg0_e8 *);
extern void call_8c157138(Arg0_e8 *);
void operation_8c08893c(Object *o)
{
    Frame frame;
    int t1;
    if (o->fe8 == 0) {
        (&frame)->f00 = 400.0f;
        (&frame)->f04 = 250.0f;
        t1 = operation_8c156c24((int)(&frame), 1);
        o->fe8 = (Arg0_e8 *)t1;
        call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f64), 2, 0, -1);
        call_8c156f50((Arg0_e8 *)(o->fe8));
        call_8c157138((Arg0_e8 *)(o->fe8));
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
    }
}
