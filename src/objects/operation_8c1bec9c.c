typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44bea4 S_g8c44bea4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
extern int g_8c328420;
extern S_g8c44bea4 *g_8c44bea4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2bbc;
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c1bee70(int, void *);
Object *operation_8c1bec9c(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27563c;
    o->tag = g_8c328420;
    o->size = 0x20;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        call_8c1bee70(t1, g_8c44bea4);
    }
    g_8c4e2bbc = t1;
    return o;
}
