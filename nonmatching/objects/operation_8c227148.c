/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c227148
 * function: operation_8c227148
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 16 of 52 reference instruction lines
 * differing bytes: 16
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
typedef struct S_g8c467188 S_g8c467188;
extern S_g8c467188 *g_8c467188;
extern char g_8c337834[];
extern int operation_8c1d0224(int, int);
extern void operation_8c1d02e0(int, int, int);
extern void operation_8c1d039c(void *, int);
int operation_8c227148(void)
{
    int t1;
    t1 = operation_8c1d0224((int)((void *)0x8c2e19b0), (int)((void *)0x8c2e19b8));
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x8b), 0);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x94), 1);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0x9c), 2);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0xa3), 3);
    operation_8c1d02e0(t1, (int)(g_8c337834 + 0xaa), 4);
    operation_8c1d039c((void *)t1, (int)g_8c467188);
    return (int)(t1);
}
