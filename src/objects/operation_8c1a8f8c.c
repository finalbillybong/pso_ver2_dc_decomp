typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_288 S_g8c467180_2c_288;
typedef struct S_g8c46fe20 S_g8c46fe20;
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
    int f28;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x288];
    S_g8c467180_2c_288 *f288;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c1196d4(void *, void *, int);
extern void call_8c119764(void *, void *, int);
extern int call_8c156c6c(void *);
extern void operation_8c1571d4(void *, int);
extern int lookup_low_id(int);
extern void operation_8c026450(void);
Object *operation_8c1a8f8c(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27463c;
    o->tag = *(int *)0x8c324020;
    o->size = 0x2c;
    t1 = call_8c1196d4((void *)0x8c288ce8, (void *)0x8c288cf0, 1);
    o->f20 = (Arg0_20 *)t1;
    call_8c119764(o->f20, (*(S_g8c467180 **)0x8c467180)->f2c->f288, 0);
    t2 = call_8c156c6c((void *)0x8c288cf8);
    o->f24 = (Arg0_24 *)t2;
    operation_8c1571d4(o->f24, 1);
    t3 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t3 != 0) {
        operation_8c026450();
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 4;
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 0x10;
    }
    o->f28 = 0;
    return o;
}
