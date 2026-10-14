typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    Vector3 f24;
    char unknown30[0x4];
    float f34;
    float f38;
    float f3c;
    float f40;
    int f44;
};
struct Arg1 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c22b298(Object *o, Arg1 *a1, int a2, int a3)
{
    initialize_hierarchy_node((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c278db4;
    o->tag = (int)(*(int *)0x8c3381d0);
    o->size = 0x48;
    o->f24 = a1->f00;
    o->f34 = 0.0f;
    o->f20 = 2.5f;
    o->f38 = 0.125f;
    o->f3c = 10.0f;
    o->f40 = 10.0f;
    o->f44 = a2;
    return o;
}
