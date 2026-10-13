typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    char unknown34[0x4];
    int f38;
    char unknown3c[0x14];
    int f50;
};
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c5108c0;
extern unsigned char g_8c513410;
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c25c2c4(Object *);
extern void operation_8c25c308(Object *);
extern void operation_8c25c35c(int);
extern int operation_8c232480(Object *);
extern void select_mode11_8c1cc5a0(void);
extern int operation_8c25e540(void);
extern int global_present_8c25e560(void);
extern int features_ready_8c25c3dc(Object *);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern void call_8c25b830(Object *);
Object *operation_8c25b3cc(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    (void)home;
    initialize_hierarchy_node((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c281bc4;
    o->f20 = 0;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0;
    o->f30 = 0;
    o->f50 = 0;
    o->f38 = g_8c513410;
    call_8c25c2c4(o);
    operation_8c25c308(o);
    operation_8c25c35c((int)o);
    if (o->f38 != 0) {
        if (o->f38 == 1) {
            goto L_8c25b46a;
        }
        if (o->f38 == 2) {
            goto L_8c25b482;
        }
    } else {
        t1 = operation_8c232480(o);
        if (t1 != 0) {
            g_8c5108c0 = 1;
            select_mode11_8c1cc5a0();
            return o;
        }
        t2 = operation_8c25e540();
        if (t2 == 0) {
            t3 = global_present_8c25e560();
            if (t3 == 0) {
                g_8c5108c0 = 1;
                select_mode11_8c1cc5a0();
                return o;
L_8c25b46a:;
                t4 = features_ready_8c25c3dc(o);
                if (t4 != 0) {
                    g_8c5108c0 = 2;
                    select_mode11_8c1cc5a0();
                    return o;
                }
            }
        }
    }
L_8c25b482:;
    t5 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
    if (t5 != 0) {
        call_8c198294(t5, o);
    }
    call_8c25b830(o);
    return o;
}
