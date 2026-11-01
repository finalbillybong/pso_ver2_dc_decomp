/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d6550
 * function: operation_8c1d6550
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 30 of 72 reference instruction lines
 * differing bytes: 30
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x3a0];
    int f3a0;
    int f3a4;
    int f3a8;
    int f3ac;
    int f3b0;
    int f3b4;
};
extern S_g8c467180 *g_8c467180;
extern void call_8c0e196c(void *, void *);
extern void operation_8c1e5ecc(void *, int);
void operation_8c1d6550(Object *o)
{
    char *v6;
    char *v7;
    char *v8;
    char *v9;
    char *v10;
    char *v1;
    char *v2;
    char *v3;
    char *v4;
    char *v5;
    call_8c0e196c((void *)(((char *)o + 0x2c)), (void *)((void *)0x8c329a4c));
    v6 = (char *)o->f30->f04;
    v1 = (char *)v6;
    v7 = (char *)o->f30->f08;
    v2 = (char *)v7;
    v8 = (char *)o->f30->f0c;
    v3 = (char *)v8;
    v9 = (char *)o->f30->f10;
    v4 = (char *)v9;
    v10 = (char *)o->f30->f14;
    v5 = (char *)v10;
    operation_8c1e5ecc((void *)(o->f30->f00), (int)(g_8c467180->f2c->f3a0));
    operation_8c1e5ecc((void *)v1, (int)(g_8c467180->f2c->f3a4));
    operation_8c1e5ecc((void *)v2, (int)(g_8c467180->f2c->f3a8));
    operation_8c1e5ecc((void *)v3, (int)(g_8c467180->f2c->f3ac));
    operation_8c1e5ecc((void *)v4, (int)(g_8c467180->f2c->f3b0));
    operation_8c1e5ecc((void *)v5, (int)(g_8c467180->f2c->f3b4));
}
