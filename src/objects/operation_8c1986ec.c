typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_268 S_g8c467180_2c_268;
typedef struct S_g8c467180_2c_26c S_g8c467180_2c_26c;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_30 Arg0_20_30;
typedef struct Arg0_20_30_0 Arg0_20_30_0;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg0_20 *f20;
    Arg0_24 *f24;
    int f28;
};
struct Arg0_20 {
    char unknown0[0x30];
    Arg0_20_30 *f30;
};
struct Arg0_20_30 {
    Arg0_20_30_0 *f00;
};
struct Arg0_20_30_0 {
    char unknown0[0x8];
    float f08;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x268];
    S_g8c467180_2c_268 *f268;
    S_g8c467180_2c_26c *f26c;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c1196d4(void *, void *, int);
extern int call_8c01c25c(void);
extern void call_8c119764(Arg0_20 *, void *, int);
extern int call_8c156c6c(void *);
extern void operation_8c1571d4(void *, int);
Object *operation_8c1986ec(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2728f8;
    o->tag = *(int *)0x8c31c980;
    o->size = 0x2c;
    t1 = call_8c1196d4((void *)0x8c31c984, (void *)0x8c31c98c, 1);
    o->f20 = (Arg0_20 *)t1;
    o->f20->f30->f00->f08 = 33.0f;
    t2 = call_8c01c25c();
    if (t2 == 0x10) {
        call_8c119764(o->f20, (*(S_g8c467180 **)0x8c467180)->f2c->f26c, 0);
    } else {
        call_8c119764(o->f20, (*(S_g8c467180 **)0x8c467180)->f2c->f268, 0);
    }
    t3 = call_8c156c6c((void *)0x8c31c994);
    o->f24 = (Arg0_24 *)t3;
    operation_8c1571d4((void *)o->f24, 1);
    o->f24->f80 = (o->f24->f80 & 0xffff) | 0x10;
    o->f28 = 0;
    return o;
}
