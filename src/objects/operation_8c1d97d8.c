typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    int f2c;
    int f30;
    float f34;
    int f38;
    int f3c;
    float f40;
};
struct Arg2 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1d97d8(Object *o, int a1, Arg2 *a2, float f0)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276ef4;
    o->tag = (int)(*(int *)0x8c32a314);
    o->size = 0x44;
    o->f20 = a2->f00;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = f0;
    o->f38 = 0;
    o->f3c = 0;
    o->f40 = 0.0f;
    return o;
}
