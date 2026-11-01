/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10351c
 * function: operation_8c10351c
 * language: c
 * reference size: 552 bytes
 * compiled size: 552 bytes (+0.0%)
 * differing lines: 12 of 224 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_3b8 S_c8c021ef8_3b8;
typedef struct S_c8c025f7c S_c8c025f7c;
typedef struct S_c8c026104 S_c8c026104;
typedef struct S_c8c026104_s4 S_c8c026104_s4;
typedef struct S_c8c026104_s8 S_c8c026104_s8;
typedef struct S_c8c026104_sc S_c8c026104_sc;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_1c Arg0_30_1c;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x10];
    char f78;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_30 {
    char unknown0[0x1c];
    Arg0_30_1c *f1c;
};
struct S_vv5 {
    char unknown0[0x2c];
    int f2c;
};
struct S_c8c021ef8 {
    char unknown0[0x3b8];
    S_c8c021ef8_3b8 *f3b8;
    char unknown3bc[0x9c];
    float f458;
    char unknown45c[0x64];
    int f4c0;
};
struct S_c8c021ef8_3b8 {
    char unknown0[0x442];
    short f442;
    short f444;
};
struct S_c8c025f7c {
    int f00;
};
struct S_c8c026104_s4 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_c8c026104 {
    char unknown0[0x4];
    unsigned char f04;
    char unknown5[0x3];
    unsigned char f08;
    char unknown9[0x3];
    unsigned char f0c;
};
struct S_c8c026104_s8 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_c8c026104_sc {
    char unknown0[0x1];
    unsigned char f01;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern S_c8c021ef8 *lookup_low_id(int);
extern S_c8c025f7c *operation_8c025f7c(void *);
extern int operation_8c2097a8(int);
extern void operation_8c103c0c(void *, void *);
extern void operation_8c1acd24(void *, short, short);
extern int operation_8c0260d8(int, int, int, int);
extern S_c8c026104 *select_member_8c026104(void *, int);
extern void operation_8c103874(Object *, int, int, int);
extern int operation_8c184c80(void *, void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
static inline unsigned char *member_entry(void *p, int index)
{
    return (unsigned char *)p + (index << 2);
}
void operation_8c10351c(Object *o)
{
    int v2;
    S_c8c021ef8 *t1;
    S_c8c025f7c *t2;
    S_vv5 *v5;
    int v8;
    int v19;
    int v12;
    int v13;
    int t3;
    int t4;
    S_c8c026104 *t5;
    S_c8c026104 *t6;
    S_c8c026104 *t7;
    int t8;
    S_c8c026104 *t9;
    S_c8c026104 *t10;
    S_c8c026104 *t11;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    t2 = operation_8c025f7c((void *)t1);
    if (t2 == 0) {
        return;
    }
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    t3 = operation_8c2097a8(2);
    if (t3 != 0) {
        v2 = (int)0x20000;
    } else {
        v2 = (int)0x10000;
    }
    if ((((&g_8c41cba0)->f20 & v2)) != 0) {
        o->f78 = 3;
    }
    v5 = (S_vv5 *)o->f30->f1c;
    operation_8c103c0c((void *)v5, (void *)((void *)0x8c285d4c));
    if (o->f78 > 0) {
        o->f78 -= 1;
        v5->f2c = -1;
    } else {
        v5->f2c = -0x99999a;
    }
    operation_8c1acd24((void *)(&t1->f4c0), t1->f3b8->f442, t1->f3b8->f444);
    t4 = operation_8c0260d8((int)t1, 0, 0, 0);
    if ((unsigned short)t4 == 0) {
        t9 = select_member_8c026104((void *)t2, (int)(t2->f00));
        v8 = (int)member_entry(t9, 1)[1];
        t5 = select_member_8c026104((void *)t2, (int)(t2->f00));
        operation_8c103874(o, 0, (unsigned char)*member_entry(t5, 1), v8);
    } else {
        operation_8c103874(o, 0, 7, t4);
    }
    t10 = select_member_8c026104((void *)t2, (int)(t2->f00));
    v12 = (int)member_entry(t10, 2)[1];
    t6 = select_member_8c026104((void *)t2, (int)(t2->f00));
    operation_8c103874(o, 1, (unsigned char)*member_entry(t6, 2), v12);
    t11 = select_member_8c026104((void *)t2, (int)(t2->f00));
    v13 = (int)member_entry(t11, 3)[1];
    t7 = select_member_8c026104((void *)t2, (int)(t2->f00));
    operation_8c103874(o, 2, (unsigned char)*member_entry(t7, 3), v13);
    t8 = operation_8c184c80((void *)(((char *)t1 + 0x418)), (void *)t1);
    if ((unsigned short)t8 != 0xffff && (unsigned short)t8 != (int)(g_8c418248) && (int)t1->f458 > 0) {
        goto L_8c1036ae;
    }
    v19 = (int)(t1->f4c0 == 0);
    if (v19 != 0) {
        operation_8c103874(o, 3, 7, 0);
    } else {
        operation_8c103874(o, 3, 7, 8);
        goto L_8c1036ba;
L_8c1036ae:;
        operation_8c103874(o, 3, 7, 7);
    }
L_8c1036ba:;
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
