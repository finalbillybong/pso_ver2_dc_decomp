typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    char f2c;
};
struct Frame {
    char unknown4[0xc];
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c36d3ca(void *);
extern void call_8c36d4c0(void *, void *);
extern int operation_8c209830(void);
Object *operation_8c01b56c(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26125c;
    call_8c36d3ca((void *)(((char *)(&frame))));
    call_8c36d4c0((void *)(((char *)(&frame))), (void *)(&o->f20));
    o->f24 = (int)(o->f20);
    t1 = operation_8c209830();
    o->f28 = (int)(t1);
    o->f2c = 0;
    *(int *)0x8c41c7c4 = 0;
    return o;
}
