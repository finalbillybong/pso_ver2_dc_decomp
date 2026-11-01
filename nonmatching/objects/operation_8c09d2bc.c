/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09d2bc
 * function: operation_8c09d2bc
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 86 of 135 reference instruction lines
 * differing bytes: 76
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
typedef struct S_g8c46ec50 S_g8c46ec50;
typedef struct S_g8c46ec54 S_g8c46ec54;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct S_g8c46ed10 S_g8c46ed10;
extern int g_8c46ec48;
extern short g_8c46ec4c;
extern S_g8c46ec50 *g_8c46ec50;
extern S_g8c46ec54 *g_8c46ec54;
extern S_g8c46ed0c *g_8c46ed0c;
extern S_g8c46ed10 *g_8c46ed10;
extern int g_8c46ed14;
extern int g_8c46ed18;
extern int g_8c46ed40;
extern int g_8c46ed44;
extern int g_8c46ed48;
extern int g_8c46ed4c;
extern void memset_8c12b880(void *, int, int);
void operation_8c09d2bc(void)
{
    int v1;
    int v13;
    int v24;
    int v25;
    int v26;
    int v30;
    g_8c46ec4c = 0;
    if (g_8c46ec50 != 0) {
        memset_8c12b880(g_8c46ec50, 0, 0x31680);
        v1 = (int)0;
        while (0xba0 > v1) {
            *(short *)((char *)((char *)g_8c46ec50 + 0x0) + (v1 * 0x44)) = -1;
            v1 = (int)(v1 + 1);
        }
    }
    if (g_8c46ec54 != 0) {
        memset_8c12b880(g_8c46ec54, 0, 0x19740);
        v13 = (int)0;
        while (0x5a8 > v13) {
            *(short *)((char *)((char *)g_8c46ec54 + 0x0) + (v13 * 0x48)) = -1;
            v13 = (int)(v13 + 1);
        }
    }
    memset_8c12b880((void *)((void *)0x8c46ec58), 0, 0x48);
    memset_8c12b880((void *)((void *)0x8c46eca0), 0, 0x48);
    memset_8c12b880((void *)((void *)0x8c46ece8), 0, 0x24);
    v24 = (int)0;
    if (g_8c46ed0c != 0) {
        memset_8c12b880(g_8c46ed0c, v24, 0x2e80);
        v26 = (int)0;
        v25 = (int)0xba0;
        while (v25 > v26) {
            *(short *)((char *)((char *)g_8c46ed0c + 0x2) + (v26 << 2)) = v24 + 0x100;
            v24 = (int)(v24 + 1);
            v26 = (int)(v26 + 1);
        }
    }
    if (g_8c46ed10 != 0) {
        memset_8c12b880(g_8c46ed10, 0, 0x87c0);
        v30 = (int)0;
        while (0xb50 > v30) {
            *(short *)((char *)((char *)g_8c46ed10 + 0x4) + (v30 * 0xc)) = v24 + 0x100;
            v24 = (int)(v24 + 1);
            v30 = (int)(v30 + 1);
        }
    }
    g_8c46ed14 = 0;
    g_8c46ed18 = 0;
    g_8c46ed40 = 0;
    g_8c46ed48 = 0;
    g_8c46ed44 = 0;
    g_8c46ed4c = 0;
    g_8c46ec48 = 0;
}
