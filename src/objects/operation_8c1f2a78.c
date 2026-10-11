typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0x68];
    int f68;
};
extern void initialize_hierarchy_node(Object *, int);
extern int create_effect_769c(void *, int);
Object *operation_8c1f2a78(Object *o, int a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c278020;
    o->tag = *(int *)0x8c32c424;
    o->size = 0x2c;
    if (a2 != 0) {
        o->f28 = (Arg0_28 *)a2;
        o->f20 = 0;
        t1 = create_effect_769c(((char *)o->f28 + 0xe0), 0x9d);
        o->f24 = t1;
        o->f28->f68 |= 0x40;
    } else {
        o->f28 = (Arg0_28 *)0;
        o->f24 = 0;
        o->f04 |= 1;
    }
    return o;
}
