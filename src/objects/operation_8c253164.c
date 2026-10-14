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
    int f20;
    int f24;
    int f28;
    int f2c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c253164(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c280228;
    o->tag = (int)(*(int *)0x8c33fb08);
    o->size = 0x3c;
    o->f24 = 0;
    o->f28 = 0x1c2;
    o->f2c = 0x96;
    o->f20 = 0;
    return o;
}
