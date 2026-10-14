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
    char unknown24[0x4];
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c25faf0(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281dfc;
    o->tag = (int)(*(int *)0x8c3406d8);
    o->size = 0x30;
    o->f20 = a1;
    o->f28 = 0;
    return o;
}
