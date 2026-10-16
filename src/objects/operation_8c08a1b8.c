typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_5c S_g8c467180_2c_5c;
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
    char unknown0[0x5c];
    S_g8c467180_2c_5c *f5c;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern char g_8c2fffb0[];
extern int operation_8c156c24(int, int);
extern int operation_8c01c25c(void);
extern void call_8c156d48(Arg0_e8 *, void *, int, int, int);
extern void call_8c156f50(Arg0_e8 *);
extern void operation_8c157138(void *);
void operation_8c08a1b8(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    if (o->fe8 == 0) {
        (&frame)->f00 = 400.0f;
        (&frame)->f04 = 250.0f;
        t1 = operation_8c156c24((int)(&frame), 1);
        o->fe8 = (Arg0_e8 *)t1;
        t2 = operation_8c01c25c();
        if (t2 == 0xf) {
            switch (*(int *)0x8c467188) {
            case 0:
                call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((g_8c2fffb0 + 0x1cd)), 3, 0, -1);
                break;
            default:
                call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((g_8c2fffb0 + 0x1d8)), 3, 0, -1);
                break;
            }
        } else {
            call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f5c), 2, 0, -1);
        }
        call_8c156f50((Arg0_e8 *)(o->fe8));
        operation_8c157138((void *)(o->fe8));
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
    }
}
