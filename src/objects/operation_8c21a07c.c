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
    char f20;
    char unknown21[0x3];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c21a07c(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27836c;
    o->tag = *(int *)0x8c3363d8;
    o->size = 0x80;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f20 = 0;
    return o;
}
