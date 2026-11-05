typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_c S_g8c467180_c;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x3f];
    char f5f;
    Arg0_60 *f60;
    Arg0_64 *f64;
    int f68;
};
struct Frame {
    float f04;
    float f08;
    float f0c;
    float f10;
};
struct S_g8c467180 {
    char unknown0[0xc];
    S_g8c467180_c *f0c;
    char unknown10[0x1c];
    S_g8c467180_2c *f2c;
};
struct Arg0_60 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c467180_2c {
    char unknown0[0x50c];
    int f50c;
};
extern char g_8c318df4[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int operation_8c156c6c(int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
extern int operation_8c156c24(int, int);
extern void sprintf_8c12b048(void *, void *, ...);
extern void add_wrapper_8c156d30(Arg0_60 *, void *, int, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
Object *TObjItemOKWindow_ctor_8c1744ec(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    int v4;
    int t1;
    int t2;
    int t3;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2701e8;
    o->tag = (int)(*(int *)0x8c318df0);
    o->size = 0x6c;
    (&frame)->f0c = 389.0f;
    (&frame)->f10 = 304.0f;
    t1 = operation_8c156c6c((int)(&(&frame)->f0c));
    o->f64 = (Arg0_64 *)t1;
    if (o->f64 != 0) {
        operation_8c1570b4((void *)(o->f64), 104.0f, 74.0f);
        operation_8c157138((void *)(o->f64));
    }
    (&frame)->f0c = 99.0f;
    (&frame)->f10 = 222.0f;
    t2 = operation_8c156c24((int)(&(&frame)->f0c), 1);
    o->f60 = (Arg0_60 *)t2;
    {
    Object *base = o;
    if (base->f60 != 0) {
        if (*(int *)0x8c4db658 > 0) {
            v4 = (int)*(int *)((char *)((char *)(*(S_g8c467180 **)0x8c467180)->f0c + 0x0) + (*(int *)((char *)0x8c286668 + (*(int *)0x8c4db658 << 2)) << 2));
        } else {
            v4 = (int)(g_8c318df4 + 0x3c3);
        }
        if (v4 != 0) {
            sprintf_8c12b048((void *)(((char *)base + 0x20)), (void *)((g_8c318df4 + 0x3f0)), (void *)0x8c4db64c, v4);
        } else {
            sprintf_8c12b048((void *)(((char *)base + 0x20)), (void *)((g_8c318df4 + 0x3f6)), (void *)0x8c4db64c);
        }
        o->f5f = 0;
        add_wrapper_8c156d30((Arg0_60 *)(o->f60), (void *)(((char *)o + 0x20)), 0x81, 0);
    }
    }
    operation_8c1570b4((void *)(o->f60), 442.0f, 64.0f);
    operation_8c157138((void *)(o->f60));
    o->f60->f80 = (o->f60->f80 & 0xffff) | 0x80;
    (&frame)->f0c = 18.0f;
    (&frame)->f10 = 355.0f;
    (&frame)->f04 = 342.0f;
    (&frame)->f08 = 90.0f;
    t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f68 = (int)(t3);
    if (o->f68 != 0) {
        operation_8c119764((int)(o->f68), (int)((*(S_g8c467180 **)0x8c467180)->f2c->f50c), 0x81);
    }
    return o;
}
