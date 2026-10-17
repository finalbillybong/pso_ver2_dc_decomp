typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_0 S_g8c467180_2c_0;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_54 S_g8c46fe20_54;
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
extern void call_8c1bde30(void);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_e8 *, void *, int, int);
extern void call_8c156f50(Arg0_e8 *);
extern void operation_8c157138(void *);
void operation_8c1bdffc(Object *o)
{
    Frame frame;
    int v6;
    int v14;
    int v7;
    int v10;
    int v11;
    int v8;
    int v12;
    int t1;
    if (o->fe8 != 0) {
        return;
    }
    if (*(int *)0x8c4dc800 == 0) {
        call_8c1bde30();
    }
    v6 = (int)0;
    while (0xa > v6) {
        *(int *)((char *)((char *)o + 0xf8) + (v6 << 2)) = 0;
        v6 = (int)(v6 + 1);
    }
    v7 = (int)0;
    v8 = (int)0;
    while (0xa > v8) {
        v10 = (int)v7;
        if (((*(int *)0x8c4e2b60 & 1 << v8)) != 0) {
            *(int *)((char *)((char *)o + 0xf8) + (v7 << 2)) = (int)(v8);
            v10 = (int)(v7 + 1);
        }
        v7 = (int)v10;
        v8 = (int)(v8 + 1);
    }
    if (v7 > 0) {
        (&frame)->f00 = 450.0f;
        (&frame)->f04 = 150.0f;
        t1 = operation_8c156c24((int)(&frame), v7);
        o->fe8 = (Arg0_e8 *)t1;
        if (o->fe8 != 0) {
            v11 = (int)0;
            v12 = (int)0;
            while (0xa > v11) {
                if (((*(int *)0x8c4e2b60 & 1 << v11)) != 0) {
                    v14 = (int)(*(int *)0x8c510ba0 != 0);
                    if (v14 != 0) {
                        operation_8c156d30((Arg0_e8 *)(o->fe8), (void *)((void *)0x8c510bac), 0xe, v12);
                    } else {
                        operation_8c156d30((Arg0_e8 *)(o->fe8), (void *)(*(S_g8c467180_2c_0 **)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f2c + 0x0) + (*(int *)((char *)0x8c288f90 + (v11 << 2)) << 2))), 0xe, v12);
                    }
                    v12 = (int)(v12 + 1);
                }
                v11 = (int)(v11 + 1);
            }
            o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x10;
            o->fe8->f80 = (o->fe8->f80 & 0xffff) | 0x200;
            call_8c156f50((Arg0_e8 *)(o->fe8));
            operation_8c157138((void *)(o->fe8));
            v8 = (int)v12;
        }
    }
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f54 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f54->f22 |= 8;
    }
}
