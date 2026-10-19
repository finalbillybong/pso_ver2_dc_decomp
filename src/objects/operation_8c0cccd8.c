typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Vector3 f24;
    float f30;
    float f34;
    float f38;
    int f3c;
    int f40;
};
struct Arg2 {
    Vector3 f00;
};
extern int g_8c3069ac;
extern Arg2 *g_8c46fa68;
extern int g_8c46fa6c;
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c05bbf8(void);
Object *operation_8c0cccd8(Object *o, int a1, Arg2 *a2, int a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266d20;
    o->tag = (int)(g_8c3069ac);
    o->size = 0x44;
    o->f20 = 0;
    g_8c46fa68 = a2;
    g_8c46fa6c = a3;
    *(Vector3 *)&o->f24 = *(Vector3 *)&a2->f00;
    o->f30 = 0.0f;
    o->f34 = -30.0f;
    o->f38 = -30.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        o->f3c = 1;
    } else {
        o->f3c = 0;
    }
    o->f40 = 0;
    return o;
}
