/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c227320
 * function: operation_8c227320
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 8 of 40 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode switch2ext)
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
extern char g_8c337834[];
extern int operation_8c1d0224(int, int);
extern void operation_8c1d02e0(int, int, int);
extern int operation_8c227554(void);
extern void operation_8c1d039c(void *, int);
int operation_8c227320(void)
{
    int t1;
    int t2;
    t1 = operation_8c1d0224((int)((void *)0x8c2e19e0), (int)((void *)0x8c2e19e8));
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x3e9), 0);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x3ee), 1);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x3f5), 2);
    t2 = operation_8c227554();
    operation_8c1d039c((void *)t1, t2);
    return (int)(t1);
}
