/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09d42c
 * function: operation_8c09d42c
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 44 of 58 reference instruction lines
 * differing bytes: 44
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
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed10 S_g8c46ed10;
extern S_g8c46ed0c *g_8c46ed0c;
extern S_g8c46ed10 *g_8c46ed10;
extern void memset_8c12b880(void *, int, int);
void operation_8c09d42c(void)
{
    int v1;
    int v3;
    int v15;
    int v2;
    v1 = (int)0;
    if (g_8c46ed0c != 0) {
        memset_8c12b880(g_8c46ed0c, v1, 0x2e80);
        v3 = (int)0;
        v2 = (int)0xba0;
        while (v2 > v3) {
            *(short *)((char *)((char *)g_8c46ed0c + 0x2) + (v3 << 2)) = v1 + 0x100;
            v1 = (int)(v1 + 1);
            v3 = (int)(v3 + 1);
        }
    }
    if (g_8c46ed10 != 0) {
        memset_8c12b880(g_8c46ed10, 0, 0x87c0);
        v15 = (int)0;
        while (0xb50 > v15) {
            *(short *)((char *)((char *)g_8c46ed10 + 0x4) + (v15 * 0xc)) = v1 + 0x100;
            v1 = (int)(v1 + 1);
            v15 = (int)(v15 + 1);
        }
    }
}
