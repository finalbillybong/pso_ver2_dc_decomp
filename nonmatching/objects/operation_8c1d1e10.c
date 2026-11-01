/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d1e10
 * function: operation_8c1d1e10
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 86 of 124 reference instruction lines
 * differing bytes: 78
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
typedef struct S_g8c467180_2c_44c S_g8c467180_2c_44c;
typedef struct S_g8c467180_2c_450 S_g8c467180_2c_450;
typedef struct S_g8c467180_2c_454 S_g8c467180_2c_454;
typedef struct S_g8c467180_2c_458 S_g8c467180_2c_458;
typedef struct S_g8c467180_2c_45c S_g8c467180_2c_45c;
typedef struct S_g8c467180_2c_460 S_g8c467180_2c_460;
typedef struct S_g8c467180_2c_464 S_g8c467180_2c_464;
typedef struct S_g8c467180_2c_468 S_g8c467180_2c_468;
typedef struct S_g8c467180_2c_46c S_g8c467180_2c_46c;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x420];
    int f420;
    char unknown424[0x28];
    S_g8c467180_2c_44c *f44c;
    S_g8c467180_2c_450 *f450;
    S_g8c467180_2c_454 *f454;
    S_g8c467180_2c_458 *f458;
    S_g8c467180_2c_45c *f45c;
    S_g8c467180_2c_460 *f460;
    S_g8c467180_2c_464 *f464;
    S_g8c467180_2c_468 *f468;
    S_g8c467180_2c_46c *f46c;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void operation_8c156d30(S_c8c156bd8 *, void *, int, int);
extern void operation_8c1570b4(void *, float, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d1e10(void)
{
    S_c8c156bd8 *t1;
    t1 = operation_8c156bd8((int)((void *)0x8c329984), 9, (int)(g_8c467180->f2c->f420));
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f44c), 0x26, 0);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f450), 0x26, 1);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f454), 0x26, 2);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f458), 0x26, 3);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f45c), 0x26, 4);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f460), 0x26, 5);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f464), 0x26, 6);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f468), 0x26, 7);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f46c), 0x26, 8);
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c1570b4((void *)t1, 215.0f, 128.0f);
    operation_8c157138((void *)t1);
    return t1;
}
