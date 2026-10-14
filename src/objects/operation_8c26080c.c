typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct S_c8c260a84 S_c8c260a84;
typedef struct S_c8c260ab0 S_c8c260ab0;
typedef struct Object Object;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Block80 f24;
    Block80 f74;
};
struct S_c8c260a84 {
    Block80 f00;
};
struct S_c8c260ab0 {
    Block80 f00;
};
extern void initialize_hierarchy_node(void *, void *);
extern S_c8c260a84 *operation_8c260a84(Object *);
extern S_c8c260ab0 *operation_8c260ab0(Object *);
extern int operation_8c260934(int, void *, void *);
Object *operation_8c26080c(Object *o, int a1)
{
    Object **home = &o;
    S_c8c260a84 *t1;
    S_c8c260ab0 *t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281e50;
    o->tag = (int)(*(int *)0x8c340838);
    o->size = 0xc4;
    o->f20 = 0;
    t1 = operation_8c260a84(o);
    if (t1 == 0) {
        o->f04 |= 1;
        return o;
    }
    o->f24 = t1->f00;
    t2 = operation_8c260ab0(o);
    if (t2 == 0) {
        o->f04 |= 1;
        return o;
    }
    o->f74 = t2->f00;
    t3 = operation_8c260934((int)o, (void *)(&o->f24), (void *)(&o->f74));
    if (t3 == 0) {
        o->f04 |= 1;
        return o;
    }
    o->f20 = 1;
    return o;
}
