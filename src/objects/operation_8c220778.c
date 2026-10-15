typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct Frame {
    char f04;
    char f05;
    char unknown6[0x12];
    Vector3 f18;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c21ef24(void *);
extern void set_position_8c21f054(void *, void *);
extern void operation_1c7dd4(void *);
Object *operation_8c220778(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2788b8;
    *(char *)0x8c505a04 = 0;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&*(Vector3 *)0x8c336f70;
    t1 = call_8c21ef24((void *)(*(S_g8c4db9e0 **)0x8c4db9e0));
    *(int *)0x8c505a00 = (int)(t1);
    set_position_8c21f054((void *)t1, (void *)(&(&frame)->f18));
    operation_1c7dd4((void *)(&(&frame)->f04));
    (&frame)->f04 = 2;
    (&frame)->f05 = 0;
    return o;
}
