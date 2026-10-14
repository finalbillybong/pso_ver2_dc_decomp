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
    int f38;
    int f3c;
    float f40;
    float f44;
    int f48;
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
extern void call_8c05fbf8(int, void *, int, int);
Object *operation_8c07bdc8(Object *o, int a1, Arg2 *a2, Arg3 *a3)
{
    Object **home = &o;
    float t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c26412c;
    o->tag = (int)(*(int *)0x8c2fe7d0);
    o->size = 0x4c;
    o->f20 = a2->f00;
    o->f2c = a3->f00;
    call_8c37f6f0((void *)(&o->f2c), (void *)(&o->f20));
    t1 = normalize_vector_checked((void *)(&o->f2c));
    o->f44 = t1;
    o->f40 = 0.0f;
    o->f38 = 0;
    o->f3c = 0;
    o->f48 = 0;
    call_8c05fbf8(0x3000b, (void *)(&o->f20), 0, 0);
    return o;
}
