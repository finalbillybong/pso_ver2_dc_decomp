typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    int f24;
};
struct Arg0_20 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c156c24(int, int);
extern int get_field_8c21f338(int);
extern int call_8c21f370(int);
extern int operation_8c21f354(void *);
extern void operation_8c156d30(Arg0_20 *, int, int, int);
extern void call_8c156d48(Arg0_20 *, int, int, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1a62a8(void *, void *, void *);
Object *operation_8c1bfe90(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    int v2;
    int t1;
    int t4;
    int t3;
    int t2;
    int t5;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c275780;
    t1 = operation_8c156c24((int)((void *)0x8c288fe8), 0xc);
    v1 = (int)0;
    o->f20 = (Arg0_20 *)t1;
    v2 = (int)-0x979798;
    while (0xc > v1) {
        t2 = get_field_8c21f338(v1);
        t4 = call_8c21f370(t2);
        t3 = operation_8c21f354((void *)t2);
        if (t3 != 0) {
            operation_8c156d30((Arg0_20 *)(o->f20), t4, 0x26, v1);
        } else {
            call_8c156d48((Arg0_20 *)(o->f20), t4, 0x16, v1, v2);
        }
        v1 = (int)(v1 + 1);
    }
    o->f20->f80 = (o->f20->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)(o->f20), 198.0f, 124.0f);
    operation_8c157138((void *)(o->f20));
    t5 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
    if (t5 != 0) {
        operation_8c1a62a8((void *)t5, (void *)((void *)0x8c288ff0), (void *)((void *)0x8c288ff8));
    }
    o->f24 = (int)(t5);
    return o;
}
