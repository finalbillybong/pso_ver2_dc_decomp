typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    Arg0_44 *f44;
};
extern int g_8c319a68;
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c014d00(int);
extern void operation_8c014f28(void *);
extern void call_8c014f34(void *, void *);
extern void copy_pair_8c014f10(void *, void *);
Object *operation_8c185ab8(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272090;
    o->tag = (int)(g_8c319a68);
    o->size = 0x48;
    o->f20 = a2;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 1.0f;
    o->f30 = 1.0f;
    o->f34 = 0.2f;
    o->f38 = 2.0f;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    t1 = call_8c014d00(0);
    o->f44 = (Arg0_44 *)t1;
    if (o->f44 == 0) {
        o->f04 |= 1;
        return o;
    }
    operation_8c014f28((void *)(o->f44));
    call_8c014f34((void *)(o->f44), (void *)(&o->f2c));
    copy_pair_8c014f10((void *)(o->f44), (void *)(&o->f3c));
    return o;
}
