/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c031430
 * function: operation_8c031430
 * language: c
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 36 of 117 reference instruction lines
 * differing bytes: 31
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
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_g8c44be0c_8 S_g8c44be0c_8;
typedef struct S_vv3 S_vv3;
typedef struct S_vv38 S_vv38;
typedef struct S_vv3_20 S_vv3_20;
typedef struct S_vv3_28 S_vv3_28;
typedef struct S_vv5 S_vv5;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    S_g8c44be0c_8 *f08;
};
struct S_vv3 {
    char unknown0[0x20];
    S_vv3_20 *f20;
    char unknown24[0x4];
    S_vv3_28 *f28;
    int f2c;
    char unknown30[0x4];
    int f34;
};
struct S_vv5 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv38 {
    char unknown0[0x38];
    int f38;
};
extern S_g8c44be0c *g_8c44be0c;
extern int g_8c44be30;
extern int call_8c03153c(int, void *);
extern int call_8c0315d8(int, void *);
void operation_8c031430(int a0)
{
    int v2;
    S_vv3 *v3;
    int v1;
    int v4;
    S_vv5 *v5;
    int v6;
    S_vv38 *v38;
    int v39;
    if (g_8c44be30 == 0 || g_8c44be0c == 0) {
        return;
    }
    v1 = 0x800;
    v2 = -0x801;
    v3 = (S_vv3 *)g_8c44be0c->f08;
    for (v4 = 0; v4 < g_8c44be0c->f00; v4++) {
        v5 = (S_vv5 *)v3->f20;
        for (v6 = 0; v6 < v3->f2c; v6++) {
            if ((v5->f2c & 0x400) != 0) {
                if (call_8c03153c(a0, (void *)((int)v5 + 8)) == 0) {
                    v5->f2c &= -0x401;
                }
            }
            if ((v5->f2c & v1) != 0) {
                if (call_8c0315d8(a0, (void *)((int)v5 + 0x1c)) == 0) {
                    v5->f2c &= v2;
                }
            }
            v5 = (S_vv5 *)((int)v5 + 0x30);
        }
        v38 = (S_vv38 *)v3->f28;
        for (v39 = 0; v39 < v3->f34; v39++) {
            if ((v38->f38 & 0x400) != 0) {
                if (call_8c03153c(a0, (void *)((int)v38 + 0x14)) == 0) {
                    v38->f38 &= -0x401;
                }
            }
            if ((v38->f38 & v1) != 0) {
                if (call_8c0315d8(a0, (void *)((int)v38 + 0x28)) == 0) {
                    v38->f38 &= v2;
                }
            }
            v38 = (S_vv38 *)((int)v38 + 0x3c);
        }
        v3 = (S_vv3 *)((int)v3 + 0x3c);
    }
}
