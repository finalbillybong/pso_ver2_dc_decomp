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
    short f24;
    char unknown26[0x2];
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c190ea0(Object *);
Object *operation_8c190704(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272734;
    o->tag = *(int *)0x8c31a258;
    o->size = 0x4c;
    t1 = call_8c190ea0(o);
    o->f30 = t1;
    o->f3c = 0;
    o->f40 = 0;
    o->f38 = 0;
    o->f34 = 0;
    o->f44 = 0;
    o->f48 = 0;
    o->f2c = 0;
    o->f28 = -1;
    o->f20 = 0;
    o->f24 = 0;
    return o;
}
