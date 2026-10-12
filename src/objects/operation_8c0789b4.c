typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Block_p0_2c {
    float f00;
    float f04;
    float f08;
} Block_p0_2c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    Block_p0_2c f2c;
    int f38;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Block_p0_2c f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c011ecc(int);
extern void call_8c0f336c(int, int);
Object *operation_8c0789b4(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c263e00;
    o->tag = *(int *)0x8c2fd988;
    o->size = 0x3c;
    o->f20 = a2->f00;
    o->f2c = a3->f00;
    o->f2c.f00 = o->f2c.f00 * 5.0f;
    o->f2c.f04 = o->f2c.f04 * 5.0f;
    o->f2c.f08 = o->f2c.f08 * 5.0f;
    t1 = call_8c011ecc(0x10);
    if (t1 != 0) {
        call_8c0f336c(t1, 4);
    }
    o->f38 = t1;
    return o;
}
