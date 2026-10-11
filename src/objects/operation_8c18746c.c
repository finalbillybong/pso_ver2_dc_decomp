typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbba0 S_g8c4dbba0;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv3 S_vv3;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Arg2 *f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
struct S_vv3 {
    int f00;
};
struct Arg2 {
    char unknown0[0xc];
    int f0c;
    int f10;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_paired_array_owner(void *, void *, int);
Object *operation_8c18746c(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    S_vv3 *v3;
    int t1;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2720f0;
    o->tag = *(int *)0x8c319b60;
    o->size = 0x38;
    if (0x12 > *(int *)0x8c44be04) {
        v3 = (S_vv3 *)*(S_g8c4dbba0 **)((char *)0x8c4dbba0 + (*(int *)0x8c44be04 << 2));
    } else {
        v3 = (S_vv3 *)0;
    }
    o->f20 = (Arg2 *)0;
    o->f34 = 0;
    if (v3 != 0) {
        o->f20 = a2;
        o->f24 = (int)v3 + v3->f00;
        o->f28 = a2->f10;
        o->f2c = a2->f0c;
        o->f30 = 0;
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x30);
        if (t1 != 0) {
            initialize_paired_array_owner((void *)t1, (void *)o, 0x20);
        }
        o->f34 = t1;
    } else {
        o->f04 |= 1;
    }
    return o;
}
