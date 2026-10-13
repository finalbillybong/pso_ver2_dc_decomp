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
    int f20;
    int f24;
};
extern void initialize_hierarchy_node(void *, void *);
extern int operation_195e68(void *);
extern void operation_8c09a478(void);
Object *operation_8c0964d4(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26580c;
    t1 = operation_195e68((void *)o);
    o->f24 = (int)(t1);
    operation_8c09a478();
    o->f20 = 0;
    return o;
}
