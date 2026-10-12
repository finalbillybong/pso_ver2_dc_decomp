typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    char f20;
    char unknown21[0x3];
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c1a948c(Object *);
Object *operation_8c1a92c4(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c274658;
    t1 = call_8c1a948c(o);
    o->f24 = t1;
    o->f28 = 0;
    o->f20 = 0;
    return o;
}
