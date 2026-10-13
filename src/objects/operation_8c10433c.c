typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Vector3 f20;
    Vector3 f2c;
    Vector3 f38;
    Vector3 f44;
    float f50;
    float f54;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c37f6f0(void *, void *);
extern float normalize_vector_checked(void *);
Object *operation_8c10433c(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    Object **home = &o;
    float t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2696f4;
    o->tag = (int)(*(int *)0x8c30b558);
    o->size = 0x58;
    o->f2c = a2->f00;
    o->f38 = a3->f00;
    o->f20 = o->f2c;
    o->f44 = o->f38;
    call_8c37f6f0((void *)(&o->f44), (void *)(&o->f2c));
    t1 = normalize_vector_checked((void *)(&o->f44));
    o->f50 = t1;
    o->f54 = 0.0f;
    return o;
}
