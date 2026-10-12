typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c0dc40c(Object *, int);
Object *operation_8c0db20c(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a2);
    o->dispatch = (void *)0x8c26770c;
    call_8c0dc40c(o, a1);
    return o;
}
