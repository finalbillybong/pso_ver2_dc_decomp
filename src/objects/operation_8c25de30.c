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
    float f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c25de30(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281ce4;
    o->tag = (int)(*(int *)0x8c340598);
    o->size = 0x40;
    o->f20 = 0;
    o->f24 = 0.0f;
    o->f34 = 0;
    o->f38 = 0;
    o->f3c = 0;
    o->f28 = -1;
    o->f2c = -1;
    o->f30 = 0;
    *(Object **)0x8c513460 = o;
    return o;
}
