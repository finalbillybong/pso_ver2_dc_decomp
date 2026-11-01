/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23332c
 * function: operation_8c23332c
 * language: c
 * reference size: 140 bytes
 * compiled size: 152 bytes (+8.6%)
 * differing lines: 80 of 56 reference instruction lines
 * differing bytes: 139
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c338cb4 S_g8c338cb4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv7 S_vv7;
struct S_g8c338cb4 {
    int f00;
};
struct S_vv3 {
    char unknown0[0x162];
    unsigned short f162;
};
struct S_vv7 {
    int f00;
};
extern S_g8c338cb4 *g_8c338cb4;
extern int g_8c338cb8;
int operation_8c23332c(int a0)
{
    int v4;
    S_vv3 *v3;
    S_vv7 *v7;
    if (a0 != 1 && a0 != 2) {
        return -2;
    }
    if (((g_8c338cb8 & 4)) != 0) {
        if (a0 == 1) {
            v3 = (S_vv3 *)((char *)g_8c338cb4 + 0x4);
        } else {
            v3 = (S_vv3 *)((char *)g_8c338cb4 + 0x168);
        }
        if (a0 == 1) {
            v4 = (int)((char *)g_8c338cb4 + 0x2d0);
            v7 = (S_vv7 *)v4;
        } else {
            v7 = (S_vv7 *)((char *)g_8c338cb4 + 0x528);
        }
        if (((g_8c338cb4->f00 & 0x1000000)) != 0 && ((v3->f162 & 1)) != 0 && v7->f00 == 0x41474553) {
            goto L_8c2333b2;
        }
    }
    return -3;
L_8c2333b2:;
    return 0;
}
