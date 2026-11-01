/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c234cb8
 * function: TWindowShortListCtrl_ctor_8c234cb8
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 4 of 142 reference instruction lines
 * differing bytes: 188
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
typedef struct S_c8c021ef8_s7e4 S_c8c021ef8_s7e4;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct S_vv17 S_vv17;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char f20;
    char unknown21[0x1];
    short f22;
    char unknown24[0x8];
    int f2c;
    int f30;
};
struct S_c8c021ef8_s7e4 {
    char unknown0[0x34];
    int f34;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_vv17 {
    char unknown0[0x20];
    short f20;
};
extern int g_8c339248;
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int lookup_low_id(int);
extern int operation_8c20987c(void);
extern int operation_8c2357f4(void);
extern void operation_8c2356b0(void *);
extern void operation_8c026450(void);
Object *TWindowShortListCtrl_ctor_8c234cb8(Object *o, int a1)
{
    Object **home = &o;
    S_vv17 *v17;
    int t1;
    int t2;
    int t3;
    S_c8c021ef8_s7e4 *p;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c279030;
    o->tag = (int)(g_8c339248);
    o->size = 0x34;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        o->f04 |= 1;
        return o;
    }
    p = (S_c8c021ef8_s7e4 *)((char *)t1 + 0x7e4);
    if (p == 0) {
        o->f04 |= 1;
        return o;
    }
    t2 = operation_8c20987c();
    o->f20 = t2;
    if (o->f20 == 2) {
        t3 = operation_8c2357f4();
        if (t3 == 0) {
            o->f20 += 1;
            if (o->f20 >= 4) {
                o->f20 -= 4;
            }
        }
    }
    if (((p->f34 & 0x10)) != 0 && o->f20 == 3) {
        o->f20 += 1;
        if (o->f20 >= 4) {
            o->f20 -= 4;
        }
    }
    operation_8c2356b0((void *)o);
    o->f22 = 0;
    o->f2c = 0;
    o->f30 = 0;
    if (g_8c46fe20 != 0) {
        g_8c46fe20->f20 |= 0x20;
    }
    v17 = (S_vv17 *)g_8c46fe20;
    if (v17 != 0) {
        v17->f20 |= 0x100;
    }
    operation_8c026450();
    return o;
}
