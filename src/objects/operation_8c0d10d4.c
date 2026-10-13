typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Vector3 f20;
    Vector3 f2c;
    int f38;
    int f3c;
};
struct Arg1 {
    Vector3 f00;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern int create_effect_769c(void *, int);
Object *operation_8c0d10d4(Object *o, Arg1 *a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c266eec;
    o->f20 = a1->f00;
    o->f2c = a2->f00;
    o->f3c = 0;
    t1 = create_effect_769c((void *)(&o->f20), 0x1f0);
    o->f38 = (int)(t1);
    return o;
}
