typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_508 S_g8c467180_2c_508;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Frame {
    float f04;
    float f08;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x508];
    S_g8c467180_2c_508 *f508;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c051a98(int, Object *, int, int, int);
extern void operation_8c051d5c(void *, float, float);
extern void operation_8c051db4(void *, float, float);
extern void operation_8c051d88(void *, float, float);
extern int operation_8c156c24(int, int);
extern void operation_8c156d30(Arg0_24 *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
Object *operation_8c173f64(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c270220;
    o->tag = (int)(*(int *)0x8c318de8);
    o->size = 0x28;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
    if (t1 == 0) {
        for (;;) {
        }
    }
    if (t1 != 0) {
        call_8c051a98(t1, o, 8, 0, 1);
    }
    o->f20 = (Arg0_20 *)t1;
    if (o->f20 != 0) {
        (&frame)->f04 = 167.0f;
        (&frame)->f08 = 255.0f;
        operation_8c051d5c((void *)(o->f20), (&frame)->f04, (&frame)->f08);
        (&frame)->f04 = 18.0f;
        (&frame)->f08 = 308.0f;
        operation_8c051db4((void *)(o->f20), (&frame)->f04, (&frame)->f08);
        operation_8c051d88((void *)(o->f20), 0.0f, 10000.0f);
    }
    (&frame)->f04 = 99.0f;
    (&frame)->f08 = 222.0f;
    t2 = operation_8c156c24((int)(&(&frame)->f04), 1);
    o->f24 = (Arg0_24 *)t2;
    if (o->f24 != 0) {
        operation_8c156d30((Arg0_24 *)(o->f24), (void *)((*(S_g8c467180 **)0x8c467180)->f2c->f508), 0x81, 0);
    }
    operation_8c1570b4((void *)(o->f24), 442.0f, 64.0f);
    operation_8c157138((void *)(o->f24));
    o->f24->f80 = (o->f24->f80 & 0xffff) | 0x80;
    return o;
}
