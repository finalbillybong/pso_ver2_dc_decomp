typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
};
extern int g_8c2ed874;
extern int g_8c4627c0;
extern Object *g_8c4627c4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
Object *operation_8c036a0c(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2615b8;
    o->tag = (int)(g_8c2ed874);
    o->size = 0x24;
    g_8c4627c4 = o;
    o->f20 = 0;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        initialize_hierarchy_node((void *)t1, (void *)o);
    }
    g_8c4627c0 = (int)(t1);
    return o;
}
