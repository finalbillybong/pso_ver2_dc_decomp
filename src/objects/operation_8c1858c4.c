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
    float f20;
    float f24;
    int f28;
    Vector3 f2c;
    Vector3 f38;
};
struct Arg2 {
    Vector3 f00;
};
struct Arg3 {
    Vector3 f00;
};
extern float g_8c286260;
extern int g_8c319a50;
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c12b944(void);
Object *operation_8c1858c4(Object *o, int a1, Arg2 *a2, Arg3 *a3, int a4)
{
    Object **home = &o;
    int t1;
    int t2;
    Object *p;
    float r;
    float pm3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272058;
    o->tag = (int)(g_8c319a50);
    o->size = 0x44;
    t1 = call_8c12b944();
    r = (float)t1 / 32768.0f;
    pm3 = (r - 0.5f) * 2.0f;
    o->f24 = g_8c286260 * (pm3 + 3.0f);
    p = o;
    t2 = call_8c12b944();
    p->f20 = p->f24 * ((float)t2 / 32768.0f);
    *(Vector3 *)&o->f2c = *(Vector3 *)&a2->f00;
    *(Vector3 *)&o->f38 = *(Vector3 *)&a3->f00;
    o->f28 = a4;
    return o;
}
