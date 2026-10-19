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
    int f30;
};
extern int g_8c305948;
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c0bbb5c(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266314;
    o->tag = (int)(g_8c305948);
    o->size = 0x34;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    return o;
}
