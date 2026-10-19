typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
    char unknownec[0x4];
    Arg0_f0 *ff0;
};
struct Frame {
    float f00;
    float f04;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern int g_8c510ba0;
extern int operation_8c156c24(int, int);
extern void call_8c156d48(Arg0_e8 *, void *, int, int, int);
extern int operation_8c04c678(int);
extern void call_8c156f50(Arg0_e8 *);
extern void operation_8c157138(void *);
void operation_8c089060(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    if (o->fe8 == 0) {
        (&frame)->f00 = 400.0f;
        (&frame)->f04 = 250.0f;
        t1 = operation_8c156c24((int)(&frame), 1);
        o->fe8 = (Arg0_e8 *)t1;
        v1 = (int)(g_8c510ba0 != 0);
        if (v1 != 0) {
            call_8c156d48((Arg0_e8 *)(o->fe8), (void *)((void *)0x8c510bac), 2, 0, -1);
        } else {
            t2 = operation_8c04c678((int)(o->ff0));
            call_8c156d48((Arg0_e8 *)(o->fe8), (void *)t2, 2, 0, -1);
        }
        call_8c156f50((Arg0_e8 *)(o->fe8));
        operation_8c157138((void *)(o->fe8));
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
        o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x40;
    }
}
