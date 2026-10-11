typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba0 S_g8c4e2ba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void initialize_hierarchy_node(Object *, void *);
extern void call_8c0dc40c(Object *, int);
Object *initialize_base_8c0db1d0(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node(o, *(S_g8c4e2ba0 **)0x8c4e2ba0);
    o->dispatch = (void *)0x8c26770c;
    call_8c0dc40c(o, a1);
    return o;
}
