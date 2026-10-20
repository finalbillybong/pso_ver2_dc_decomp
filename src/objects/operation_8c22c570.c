typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct S_vv10 S_vv10;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
    float f28;
    float f2c;
};
struct Arg0_20 {
    char unknown0[0x38];
    float f38;
};
struct S_vv9 {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct Arg0_24 {
    char unknown0[0x38];
    float f38;
};
struct S_vv10 {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct Frame {
    Vector3 f04;
};
extern Vector3 g_8c338358;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c22c2b8(int, Object *);
extern void operation_8c22ca14(void *, void *);
Object *operation_8c22c570(Object *o, int a1)
{
    Frame frame;
    Object **home = &o;
    S_vv9 *v9;
    S_vv10 *v10;
    int t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c278e4c;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x74);
    if (t1 != 0) {
        call_8c22c2b8(t1, o);
    }
    o->f20 = (Arg0_20 *)t1;
    if (o->f20 != 0) {
        o->f20->f38 = 0.0f;
        v9 = (S_vv9 *)o->f20;
        v9->f20 = 0.0f;
        v9->f24 = 0.0f;
        v9->f28 = 0.0f;
        v9->f2c = 0.0f;
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x74);
    if (t2 != 0) {
        call_8c22c2b8(t2, o);
    }
    o->f24 = (Arg0_24 *)t2;
    if (o->f24 != 0) {
        o->f24->f38 = 0.0f;
        v10 = (S_vv10 *)o->f24;
        v10->f20 = 0.0f;
        v10->f24 = 0.0f;
        v10->f28 = 0.0f;
        v10->f2c = 0.0f;
    }
    o->f28 = 1.0f;
    o->f2c = 0.0f;
    *(Vector3 *)&(&frame)->f04 = *(Vector3 *)&g_8c338358;
    operation_8c22ca14((void *)o, (void *)(&(&frame)->f04));
    return o;
}
