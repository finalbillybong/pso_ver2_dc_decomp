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
};
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2e24;
extern char g_8c4e3130;
extern int g_8c5108c0;
extern unsigned char g_8c513400;
extern unsigned char g_8c513408;
extern void initialize_hierarchy_node(void *, void *);
extern void call_8c01c250(int);
extern int operation_8c2324c0(Object *);
extern int call_8c03f6d8(void);
extern void call_8c03f4bc(void);
extern void call_8c03f6cc(Object *);
extern void select_mode19_8c1cc648(void);
extern int call_8c232060(Object *);
extern int operation_8c232480(void);
extern void select_mode18_8c1cc630(void);
extern void call_8c01c1a4(int);
extern void select_mode4_8c1cc4f8(void);
extern void select_mode23_8c1cc678(void);
extern void select_mode10_8c1cc588(void);
extern void clear_global_render_resources(void);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern int create_pair_widget_8c231e40(Object *);
Object *operation_8c231ba0(Object *o)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    (void)home;
    initialize_hierarchy_node((void *)o, g_8c44be88);
    o->dispatch = (void *)0x8c278fb4;
    o->f28 = 0;
    o->f24 = 0;
    o->f20 = 0;
    o->f2c = (int)(g_8c5108c0);
    call_8c01c250(2);
    if (o->f2c != 0) {
        if (o->f2c == 1) {
            goto L_8c231c24;
        }
        if (o->f2c == 2) {
            goto L_8c231c7e;
        }
    } else {
        t1 = operation_8c2324c0(o);
        if (t1 != 0) {
            t2 = call_8c03f6d8();
            if (t2 != 0) {
                if (t2 == 1) {
                    goto L_8c231c10;
                }
                if (t2 == 2) {
                    goto L_8c231c1a;
                }
            } else {
                call_8c03f4bc();
                return o;
L_8c231c10:;
                call_8c03f6cc(o);
                return o;
L_8c231c1a:;
                select_mode19_8c1cc648();
                return o;
L_8c231c24:;
                t3 = call_8c232060(o);
                if (t3 != 0) {
                    t4 = operation_8c232480();
                    if (t4 == 0) {
                        goto L_8c231cae;
                    }
                }
                t5 = call_8c03f6d8();
                if (t5 != 0) {
                    if (t5 == 1) {
                        goto L_8c231c58;
                    }
                    if (t5 == 2) {
                        goto L_8c231c74;
                    }
                } else {
                    select_mode18_8c1cc630();
                    return o;
L_8c231c58:;
                    if (g_8c4e2e24 != 0) {
                        call_8c01c1a4(9);
                    } else {
                        select_mode4_8c1cc4f8();
                    }
                    return o;
L_8c231c74:;
                    select_mode23_8c1cc678();
                    return o;
L_8c231c7e:;
                    t6 = ((int (*)(Object *))operation_8c232480)(o);
                    if (t6 == 0 && (g_8c513400) != 0 && (g_8c513408) != 0) {
                        goto L_8c231cae;
                    }
                    g_8c4e3130 = 1;
                    select_mode10_8c1cc588();
                    return o;
                }
            }
        }
    }
L_8c231cae:;
    clear_global_render_resources();
    t7 = allocate_block(g_8c4d97e0, (unsigned int)0x40);
    if (t7 != 0) {
        call_8c198294(t7, o);
    }
    t8 = create_pair_widget_8c231e40(o);
    o->f28 = (int)(t8);
    return o;
}
