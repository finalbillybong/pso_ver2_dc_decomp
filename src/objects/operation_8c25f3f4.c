typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
};
struct S_g8c4db9e4 {
    char unknown0[0x118c];
    unsigned char f118c;
    char unknown118d[0xf];
    unsigned char f119c;
    char unknown119d[0x11b];
    unsigned char f12b8;
    char unknown12b9[0xf];
    unsigned char f12c8;
};
extern int g_8c32c108;
extern int g_8c3403e8;
extern int g_8c340690;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4db9e4 *g_8c4db9e4;
extern char g_8c4e3130;
extern unsigned char g_8c513400;
extern unsigned char g_8c513408;
extern char g_8c513410;
extern void initialize_hierarchy_node(void *, void *);
extern int operation_8c25f888(Object *);
extern void select_mode16_8c1cc600(void);
extern int operation_8c25f88c(Object *);
extern void select_mode10_8c1cc588(void);
extern int operation_8c232480(void);
extern int operation_8c2324e0(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int call_8c25f6f8(Object *);
Object *operation_8c25f3f4(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    (void)home;
    initialize_hierarchy_node((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c281da8;
    o->tag = (int)(g_8c340690);
    o->size = 0x234;
    o->f20 = 0;
    o->f24 = 0;
    o->f2c = 0;
    o->f28 = 0;
    o->f30 = 0;
    t1 = operation_8c25f888(o);
    if (t1 != 0) {
        g_8c513410 = 1;
        g_8c3403e8 = 0;
        select_mode16_8c1cc600();
        return o;
    }
    t2 = operation_8c25f88c(o);
    if (t2 != 0) {
        g_8c4e3130 = 1;
        g_8c32c108 = 0;
        select_mode10_8c1cc588();
    }
    if ((g_8c513400) == 0 && (g_8c513408) == 0) {
        goto L_8c25f4aa;
    }
    if ((g_8c4db9e4->f118c) != 0 && (g_8c4db9e4->f119c) != 0) {
        goto L_8c25f4aa;
    }
    g_8c513410 = 1;
    select_mode16_8c1cc600();
    return o;
L_8c25f4aa:;
    if ((g_8c4db9e4->f12b8) != 0 && (g_8c4db9e4->f12c8) != 0) {
        g_8c4e3130 = 1;
        select_mode10_8c1cc588();
        return o;
    }
    t3 = operation_8c232480();
    if (t3 != 0) {
        g_8c513410 = 1;
        select_mode16_8c1cc600();
        return o;
    }
    t4 = operation_8c2324e0();
    if (t4 != 0) {
        g_8c4e3130 = 1;
        select_mode10_8c1cc588();
        return o;
    }
    t5 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
    if (t5 != 0) {
        call_8c198294(t5, o);
    }
    t6 = call_8c25f6f8(o);
    o->f28 = (int)(t6);
    return o;
}
