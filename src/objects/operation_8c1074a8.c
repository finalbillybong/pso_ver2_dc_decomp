typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Vector3 f20;
    float f2c;
    int f30;
    int f34;
    int f38;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1074a8(Object *o, int a1, Arg2 *a2, int a3, float f0)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c269890;
    o->f20 = a2->f00;
    o->f2c = f0;
    o->f30 = 0;
    o->f34 = 2;
    o->f38 = a3;
    return o;
}
