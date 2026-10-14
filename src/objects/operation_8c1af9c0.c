typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    float f20;
    float f24;
    int f28;
    int f2c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1af9c0(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274b68;
    o->tag = (int)(*(int *)0x8c325fe8);
    o->size = 0x34;
    o->f20 = 0.0f;
    o->f24 = 0.0f;
    o->f28 = 0;
    o->f2c = 0;
    *(Object **)0x8c4e2340 = o;
    return o;
}
