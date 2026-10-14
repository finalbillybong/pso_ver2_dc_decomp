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
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c25f1a4(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281d8c;
    o->tag = (int)(*(int *)0x8c340668);
    o->size = 0x2c;
    o->f24 = 0;
    o->f20 = 0;
    return o;
}
