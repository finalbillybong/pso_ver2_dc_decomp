/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d37dc
 * function: operation_8c1d37dc
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 26 of 115 reference instruction lines
 * differing bytes: 26
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_g8c467180_2c_2dc S_g8c467180_2c_2dc;
typedef struct S_g8c467180_2c_2e0 S_g8c467180_2c_2e0;
typedef struct S_g8c467180_2c_2e4 S_g8c467180_2c_2e4;
typedef struct S_g8c467180_2c_348 S_g8c467180_2c_348;
typedef struct S_g8c467180_2c_510 S_g8c467180_2c_510;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x1f4];
    int f1f4;
    char unknown1f8[0xe4];
    S_g8c467180_2c_2dc *f2dc;
    S_g8c467180_2c_2e0 *f2e0;
    S_g8c467180_2c_2e4 *f2e4;
    char unknown2e8[0x60];
    S_g8c467180_2c_348 *f348;
    char unknown34c[0x1c4];
    S_g8c467180_2c_510 *f510;
};
struct S_c8c156bd8 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c156bd8 *operation_8c156bd8(int, int, int);
extern void operation_8c156d30(S_c8c156bd8 *, void *, int, int);
extern int get_game_mode_8c01c25c(void);
extern void call_8c156d48(S_c8c156bd8 *, void *, int, int, int);
extern void operation_8c15700c(void *, float);
extern void operation_8c157138(void *);
S_c8c156bd8 *operation_8c1d37dc(void)
{
    S_c8c156bd8 *t1;
    int t2;
    t1 = operation_8c156bd8((int)((void *)0x8c289370), 5, (int)(g_8c467180->f2c->f1f4));
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f2dc), 6, 3);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f2e0), 6, 0xb);
    operation_8c156d30(t1, (void *)(g_8c467180->f2c->f2e4), 6, 0x19);
    t2 = get_game_mode_8c01c25c();
    if (t2 == 0x10) {
        operation_8c156d30(t1, (void *)(g_8c467180->f2c->f510), 6, 0x23);
        operation_8c156d30(t1, (void *)(g_8c467180->f2c->f348), 6, 0x2f);
    } else {
        call_8c156d48(t1, (void *)(g_8c467180->f2c->f510), 0x16, 0x23, -0x979798);
        call_8c156d48(t1, (void *)(g_8c467180->f2c->f348), 0x16, 0x2f, -0x979798);
    }
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c15700c((void *)t1, 179.0f);
    operation_8c157138((void *)t1);
    return t1;
}
