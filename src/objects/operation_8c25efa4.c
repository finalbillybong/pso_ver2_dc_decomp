typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c01c250(int);
extern void call_8c25f0d0(Object *);
extern void call_8c180d54(void);
Object *operation_8c25efa4(Object *o)
{
    Object **home = &o;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c281d70;
    o->f28 = 0;
    o->f20 = 0;
    o->f24 = 0;
    call_8c01c250(2);
    call_8c25f0d0(o);
    call_8c180d54();
    return o;
}
