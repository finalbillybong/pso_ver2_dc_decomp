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
};
extern int g_8c32ae50;
extern int g_8c4e2f80;
extern int g_8c4e2f84;
extern int g_8c4e2f88;
extern Object *g_8c4e2f8c;
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c1dbb54(Object *o, int a1)
{
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c277318;
    o->tag = (int)(g_8c32ae50);
    o->size = 0x20;
    g_8c4e2f80 = 0;
    g_8c4e2f84 = 0;
    g_8c4e2f88 = 0;
    g_8c4e2f8c = o;
    return o;
}
