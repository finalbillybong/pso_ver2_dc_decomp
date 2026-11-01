/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c190ea0
 * function: operation_8c190ea0
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 32 reference instruction lines
 * differing bytes: 4
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
typedef struct S_c8c1d50b4 S_c8c1d50b4;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x224];
    int f224;
};
struct S_c8c1d50b4 {
    char unknown0[0x80];
    unsigned short f80;
};
extern S_g8c467180 *g_8c467180;
extern S_c8c1d50b4 *TWindowSubEquipKind_ctor_8c1d50b4(int, int);
extern void operation_8c1cd38c(void *, int);
extern void operation_8c1d5530(int, int);
S_c8c1d50b4 *operation_8c190ea0(void)
{
    S_c8c1d50b4 *t1;
    t1 = TWindowSubEquipKind_ctor_8c1d50b4((int)((void *)0x8c2876c0), (int)((void *)0x8c2876c8));
    operation_8c1cd38c((void *)t1, (int)(g_8c467180->f2c->f224));
    t1->f80 = (t1->f80 & 0xffff) | 0x10;
    operation_8c1d5530((int)t1, 2);
    return t1;
}
