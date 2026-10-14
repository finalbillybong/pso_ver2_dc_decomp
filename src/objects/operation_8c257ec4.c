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
};
extern int g_8c340060;
extern Object *g_8c513360;
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c257ec4(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281a04;
    o->f20 = 0;
    g_8c513360 = o;
    o->tag = (int)(g_8c340060);
    o->size = 0x24;
    return o;
}
