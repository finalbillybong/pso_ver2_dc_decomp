/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6cf8
 * function: operation_8c1d6cf8
 * language: c
 * reference size: 460 bytes
 * compiled size: 460 bytes (+0.0%)
 * differing lines: 52 of 181 reference instruction lines
 * differing bytes: 20
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_3b8 S_g8c467180_2c_3b8;
typedef struct S_g8c467180_2c_3bc S_g8c467180_2c_3bc;
typedef struct S_g8c467180_2c_3c0 S_g8c467180_2c_3c0;
typedef struct S_g8c467180_2c_3c4 S_g8c467180_2c_3c4;
typedef struct S_g8c467180_2c_3c8 S_g8c467180_2c_3c8;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_a8 Arg0_a8;
struct Frame {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    short f10;
    short f12;
    short f14;
    char unknown16[0x2];
};
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    Arg0_78 *f78;
    char unknown7c[0x2c];
    Arg0_a8 *fa8;
    Vector3 fac;
};
struct Arg0_30 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3b8];
    S_g8c467180_2c_3b8 *f3b8;
    S_g8c467180_2c_3bc *f3bc;
    S_g8c467180_2c_3c0 *f3c0;
    S_g8c467180_2c_3c4 *f3c4;
    S_g8c467180_2c_3c8 *f3c8;
};
struct S_c8c021ef8 {
    char unknown0[0x1ca];
    short f1ca;
    short f1cc;
    short f1ce;
    short f1d0;
    short f1d2;
};
extern Vector3 g_8c32a1d4;
extern S_g8c418248 *g_8c418248;
extern S_g8c467180 *g_8c467180;
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c0e196c(void *, void *);
extern void operation_8c1e5ecc(void *, int);
extern void operation_8c1e5f20(int, int);
extern int operation_8c1d78fc(void *);
extern void call_8c0229e0(S_c8c021ef8 *, Frame *, void *);
extern void call_8c022718(S_c8c021ef8 *, Frame *, void *);
extern void operation_8c1e5f5c(int, int);
void operation_8c1d6cf8(Object *o)
{
    Frame frame;
    char *v29;
    char *v30;
    char *v31;
    char *v32;
    S_c8c021ef8 *t1;
    char *v2;
    char *v3;
    char *v4;
    char *v5;
    char *v1;
    int t2;
    (&frame)->f0a = 0;
    (&frame)->f08 = 0;
    (&frame)->f06 = 0;
    (&frame)->f04 = 0;
    (&frame)->f02 = 0;
    (&frame)->f00 = 0;
    (&frame)->f14 = 0;
    (&frame)->f12 = 0;
    (&frame)->f10 = 0;
    (&frame)->f0e = 0;
    (&frame)->f0c = 0;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329b9c));
    *(Vector3 *)&o->fac = *(Vector3 *)&g_8c32a1d4;
    v1 = (char *)o->f30->f00;
    v29 = (char *)o->f30->f04;
    v2 = (char *)v29;
    v30 = (char *)o->f30->f08;
    v3 = (char *)v30;
    v31 = (char *)o->f30->f0c;
    v4 = (char *)v31;
    v32 = (char *)o->f30->f10;
    v5 = (char *)v32;
    operation_8c1e5ecc((void *)v1, (int)(g_8c467180->f2c->f3b8));
    operation_8c1e5ecc((void *)v2, (int)(g_8c467180->f2c->f3bc));
    operation_8c1e5ecc((void *)v3, (int)(g_8c467180->f2c->f3c0));
    operation_8c1e5ecc((void *)v4, (int)(g_8c467180->f2c->f3c4));
    operation_8c1e5ecc((void *)v5, (int)(g_8c467180->f2c->f3c8));
    operation_8c1e5f20((int)(v1), (int)(t1->f1ca));
    operation_8c1e5f20((int)(v2), (int)(t1->f1ce));
    operation_8c1e5f20((int)(v3), (int)(t1->f1cc));
    operation_8c1e5f20((int)(v4), (int)(t1->f1d0));
    operation_8c1e5f20((int)(v5), (int)(t1->f1d2));
    if (o->f78 != 0) {
        t2 = operation_8c1d78fc((void *)o);
        if (t2 != 0) {
            call_8c0229e0(t1, (Frame *)((&frame)), (void *)(o->fa8));
        } else {
            call_8c022718(t1, (Frame *)((&frame)), (void *)(o->f78));
        }
        operation_8c1e5f5c((int)(v1), (int)((&frame)->f0c));
        operation_8c1e5f5c((int)(v2), (int)((&frame)->f0e));
        operation_8c1e5f5c((int)(v3), (int)((&frame)->f10));
        operation_8c1e5f5c((int)(v4), (int)((&frame)->f14));
        operation_8c1e5f5c((int)(v5), (int)((&frame)->f12));
    }
}
