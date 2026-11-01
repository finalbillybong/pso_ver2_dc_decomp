/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d1928
 * function: operation_8c1d1928
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 74 of 92 reference instruction lines
 * differing bytes: 65
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
typedef struct S_c8c156bd8 S_c8c156bd8;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_414 S_g8c467180_2c_414;
typedef struct S_g8c467180_2c_418 S_g8c467180_2c_418;
typedef struct S_g8c467180_2c_41c S_g8c467180_2c_41c;
typedef struct S_g8c467180_2c_420 S_g8c467180_2c_420;
typedef struct S_g8c467180_2c_424 S_g8c467180_2c_424;
typedef struct S_g8c467180_2c_428 S_g8c467180_2c_428;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f4];
    int f1f4;
    char unknown1f8[0x21c];
    S_g8c467180_2c_414 *f414;
    S_g8c467180_2c_418 *f418;
    S_g8c467180_2c_41c *f41c;
    S_g8c467180_2c_420 *f420;
    S_g8c467180_2c_424 *f424;
    S_g8c467180_2c_428 *f428;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void operation_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c15700c(S_c8c156bd8 *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d1928(void)
{
    char *v1;
    S_c8c156bd8 *t1;
    v1 = (char *)g_8c467180->f2c->f1f4;
    t1 = operation_8c156bd8((int)((void *)0x8c329964), 6, (int)(v1));
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f414), 6, 6);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f418), 6, 0xa);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f41c), 6, 0x14);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f420), 6, 0x22);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f424), 6, 0x26);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f428), 6, 0x28);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c(t1, 215.0f);
    operation_8c157138((void *)t1);
    return t1;
}
