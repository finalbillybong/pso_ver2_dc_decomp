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
    short f20;
    short f22;
    int f24;
    Vector3 f28;
};
struct Arg1 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c0b6750(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    initialize_hierarchy_node((void *)o, (void *)a4);
    o->dispatch = (void *)0x8c2660c0;
    o->f20 = a2;
    o->f22 = 0;
    o->f24 = a3;
    o->f28 = a1->f00;
    return o;
}
