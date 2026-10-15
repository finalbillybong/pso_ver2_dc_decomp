typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
};
extern int g_8c3405c0;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c5108c0;
extern char g_8c513410;
extern char g_8c3405d4[];
extern void initialize_hierarchy_node(void *, void *);
extern int call_8c03f6d8(void);
extern int operation_8c25e540(void);
extern int global_present_8c25e560(void);
extern void select_mode16_8c1cc600(void);
extern void select_mode11_8c1cc5a0(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int call_8c25e4e4(Object *);
extern void call_8c1003d0(void *);
Object *operation_8c25e254(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    (void)home;
    initialize_hierarchy_node((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c281d00;
    o->tag = (int)(g_8c3405c0);
    o->size = 0x30;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    t1 = call_8c03f6d8();
    if (t1 == 1) {
        t2 = operation_8c25e540();
        if (t2 != 0) {
            goto L_8c25e2cc;
        }
        t3 = global_present_8c25e560();
        if (t3 != 0) {
            goto L_8c25e2cc;
        }
        g_8c513410 = 0;
        select_mode16_8c1cc600();
        return o;
    }
    t4 = global_present_8c25e560();
    if (t4 == 0) {
        g_8c5108c0 = 1;
        select_mode11_8c1cc5a0();
        return o;
    }
L_8c25e2cc:;
    t5 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
    if (t5 != 0) {
        call_8c198294(t5, o);
    }
    t6 = call_8c25e4e4(o);
    o->f28 = (int)(t6);
    t7 = call_8c03f6d8();
    if (t7 != 1) {
        call_8c1003d0((void *)((g_8c3405d4 + 0xb)));
    }
    return o;
}
