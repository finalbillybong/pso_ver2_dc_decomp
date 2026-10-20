typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block24 {
    int words[6];
} Block24;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x10];
    Arg0_10 *f10;
    char unknown14[0xc];
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Vector3 f2c;
    Vector3 f38;
};
struct Arg0_24 {
    Vector3 f00;
};
struct Arg0_28 {
    Vector3 f00;
};
struct S_c8c122700 {
    int f00;
    char unknown4[0x14];
    void *f18;
    char unknown1c[0x2];
    short f1e;
    Vector3 f20;
    Vector3 f2c;
    int f38;
    int f3c;
};
extern int g_8c3068e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c122700 *allocate_block(void *, unsigned int);
extern void initialize_hierarchy_node(void *, void *);
void operation_8c0cb5bc(Object *o)
{
    S_c8c122700 *t1;
    *(Vector3 *)&o->f2c = *(Vector3 *)&o->f24->f00;
    *(Vector3 *)&o->f38 = *(Vector3 *)&o->f28->f00;
    o->f20 += 1;
    if (o->f20 > 5) {
        o->f20 = 0;
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
        if (t1 != 0) {
            initialize_hierarchy_node((void *)t1, (void *)(o->f10));
            t1->f18 = (void *)0x8c266ce8;
            t1->f00 = (int)(g_8c3068e0);
            t1->f1e = 0x40;
            t1->f20 = o->f2c;
            t1->f2c = o->f38;
            t1->f3c = t1->f38 = -0xffcd;
        }
    }
}
