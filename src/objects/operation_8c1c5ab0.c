typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    short f24;
    char unknown26[0x2];
    int f28;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
extern void initialize_hierarchy_node(void *, void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int create_effect_769c(void *, int);
Object *operation_8c1c5ab0(Object *o, int a1, int a2, int a3)
{
    Object **home = &o;
    S_c8c053d84 *t1;
    int t2;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c276668;
    o->tag = (int)(*(int *)0x8c328c80);
    o->size = 0x2c;
    o->f24 = a2;
    o->f28 = a3;
    t1 = lookup_object_by_id((unsigned short)(o->f24));
    if (t1 != 0) {
        t2 = create_effect_769c((void *)(t1->fdc + o->f28 * 0x2c + 0x1c), 0x1bb);
        o->f20 = (int)(t2);
    }
    o->f04 |= 0x10;
    return o;
}
