typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Vector3 f20;
    float f2c;
    float f30;
    float f34;
    int f38;
};
struct Arg1 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c253ba4(Object *o, Arg1 *a1, int a2)
{
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c280260;
    o->f20 = a1->f00;
    o->f2c = 1.0f;
    o->f30 = 1.0f;
    o->f34 = 1.0f;
    o->f38 = 0;
    return o;
}
