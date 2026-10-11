typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    char unknown24[0x28];
    int f4c;
    int f50;
    int f54;
};
struct S_c8c021ef8 {
    char unknown0[0xc78];
    int fc78;
};
extern void initialize_hierarchy_node(Object *, int);
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c1ab8e8(Object *, int);
extern void call_8c1ab894(Object *, int);
Object *initialize_tracker_8c1ab508(Object *o, int a1, int a2, int a3, int a4, int a5)
{
    Object **home = &o;
    S_c8c021ef8 *t1;
    (void)home;
    initialize_hierarchy_node(o, a1);
    o->dispatch = (void *)0x8c274838;
    o->tag = *(int *)0x8c324f68;
    o->size = 0x58;
    t1 = lookup_low_id(a2);
    if (t1 == 0) {
        o->f04 |= 0x10;
        o->f04 |= 1;
        return o;
    }
    o->f54 = a2;
    o->f20 = t1->fc78;
    call_8c1ab8e8(o, a3);
    o->f4c = 0;
    o->f50 = a4;
    call_8c1ab894(o, a5);
    return o;
}
