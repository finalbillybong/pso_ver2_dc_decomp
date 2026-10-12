typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x3];
    Arg0_24 *f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c1a2838(int, int);
Object *operation_8c1a2db4(Object *o, int a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c273770;
    o->tag = *(int *)0x8c31db18;
    o->size = 0x40;
    t1 = operation_8c1a2838((int)((void *)0x8c287bb0), (int)((void *)0x8c287bb8));
    o->f24 = (Arg0_24 *)t1;
    o->f24->f80 = (o->f24->f80 & 0xffff) | 0x10;
    o->f34 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f3c = -1;
    o->f38 = 0;
    o->f20 = 0;
    return o;
}
