typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Vector3 f2c;
    Vector3 f38;
    int f44;
    int f48;
};
struct Arg0_24 {
    Vector3 f00;
};
struct Arg0_28 {
    Vector3 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c12b944(int);
Object *operation_8c0cb4d0(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c266cb0;
    o->tag = (int)(*(int *)0x8c3068e8);
    o->size = 0x4c;
    o->f24 = (Arg0_24 *)a2;
    o->f28 = (Arg0_28 *)a3;
    o->f2c = o->f24->f00;
    o->f38 = o->f28->f00;
    o->f44 = -0xffcd;
    o->f48 = -0xffcd;
    t1 = call_8c12b944(-0xffcd);
    o->f20 = (int)((float)t1 / 32768.0f * 5.0f);
    return o;
}
