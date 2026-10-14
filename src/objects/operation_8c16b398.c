typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    char f20;
    char unknown21[0x3];
    unsigned short f24;
    char unknown26[0x2];
    int f28;
    int f2c;
    char unknown30[0xc];
    Vector3 f3c;
    float f48;
    float f4c;
    float f50;
    int f54;
};
struct Arg2 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
};
struct Arg3 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c01d728(void *);
Object *operation_8c16b398(Object *o, int a1, Arg2 *a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c270188;
    if (a2 == 0) {
        o->f24 = 0xffff;
        o->f28 = 0;
        o->f2c = 0;
    } else {
        o->f24 = a2->f20;
        t1 = operation_8c01d728((void *)a2);
        o->f28 = (short)t1;
        o->f2c = (int)(a2->f64);
    }
    o->f3c = a3->f00;
    o->f20 = a4;
    o->f50 = 0.0f;
    o->f4c = 0.0f;
    o->f48 = 0.0f;
    o->f54 = 0;
    return o;
}
