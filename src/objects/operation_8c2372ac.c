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
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
};
struct Arg1 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c2372ac(Object *o, Arg1 *a1, int a2, int a3, int a4, int a5)
{
    initialize_hierarchy_node((void *)o, (void *)a5);
    o->dispatch = (void *)0x8c27904c;
    o->f20 = a1->f00;
    o->f2c = a2;
    o->f30 = 0;
    o->f38 = a4;
    o->f3c = 0;
    o->f34 = 0;
    o->f40 = 0;
    o->f44 = a3;
    return o;
}
