/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1744b4
 * function: operation_8c1744b4
 * language: c
 * reference size: 56 bytes
 * compiled size: 56 bytes (+0.0%)
 * differing lines: 4 of 18 reference instruction lines
 * differing bytes: 5
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
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_c S_g8c467180_c;
struct S_g8c467180 {
    char unknown0[0xc];
    S_g8c467180_c *f0c;
};
extern S_g8c467180 *g_8c467180;
extern int g_8c4db658;
extern char g_8c318df4[];
void *operation_8c1744b4(void)
{
    if (g_8c4db658 > 0) {
        return (void *)(*(int *)((char *)((char *)g_8c467180->f0c + 0x0) + (*(int *)((char *)0x8c286668 + (g_8c4db658 << 2)) << 2)));
    }
    return (g_8c318df4 + 0x3c3);
}
