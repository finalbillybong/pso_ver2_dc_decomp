typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char f21;
    char f22;
    char f23;
    int f24;
    int f28;
    int f2c;
    Arg0_30 *f30;
    int f34;
    int f38;
};
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c1e5650(Object *);
extern int call_8c1e5918(char);
extern void call_8c1dc4b8(void *, int, int);
extern int call_8c1e5928(char);
Object *operation_8c1e5100(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c277ea4;
    o->tag = *(int *)0x8c32bb00;
    o->size = 0x3c;
    o->f20 = 0;
    o->f21 = 0;
    o->f24 = a2;
    t1 = call_8c1e5650(o);
    o->f30 = (Arg0_30 *)t1;
    o->f34 = 0;
    o->f38 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f22 = 0;
    o->f23 = 0;
    if (o->f24 == 1) {
        t2 = call_8c1e5918(o->f22);
        call_8c1dc4b8(o->f30, t2, 2);
    }
    t3 = call_8c1e5928(o->f23);
    call_8c1dc4b8(o->f30, t3, 3);
    return o;
}
