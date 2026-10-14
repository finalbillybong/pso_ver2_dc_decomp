typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c31d9c0 S_g8c31d9c0;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
typedef struct Object Object;
typedef struct Arg0_e8 Arg0_e8;
struct Frame {
    float f00;
    float f04;
};
struct Object {
    char unknown0[0xe8];
    Arg0_e8 *fe8;
};
struct Arg0_e8 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c46fe20 {
    char unknown0[0x54];
    S_g8c46fe20_54 *f54;
};
struct S_g8c46fe20_54 {
    char unknown0[0x22];
    short f22;
};
extern int operation_8c156c24(int, int);
extern void call_8c156d30(Arg0_e8 *, void *, int, int);
extern void call_8c156f50(Arg0_e8 *);
extern void call_8c157138(Arg0_e8 *);
void operation_8c1a268c(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    (&frame)->f00 = 450.0f;
    (&frame)->f04 = 100.0f;
    t1 = operation_8c156c24((int)(&frame), 0xf);
    o->fe8 = (Arg0_e8 *)t1;
    v1 = (int)0;
    while (0xf > v1) {
        call_8c156d30((Arg0_e8 *)(o->fe8), (void *)(*(S_g8c31d9c0 **)((char *)0x8c31d9c0 + (v1 << 2))), 6, v1);
        v1 = (int)(v1 + 1);
    }
    call_8c156f50((Arg0_e8 *)(o->fe8));
    call_8c157138((Arg0_e8 *)(o->fe8));
    o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 |= 8;
    }
}
