/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1585a8
 * function: operation_8c1585a8
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 28 of 71 reference instruction lines
 * differing bytes: 32
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
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_38 S_g8c4daaa4_38;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv12 S_vv12;
typedef struct S_vv12_0 S_vv12_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
struct S_g8c4daaa4 {
    char unknown0[0x38];
    S_g8c4daaa4_38 *f38;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv11 {
    S_vv11_0 *f00;
};
struct S_vv12 {
    S_vv12_0 *f00;
};
extern S_g8c4daaa4 *g_8c4daaa4;
extern int play_se_8c05fbf8(void *, int, int, int);
extern void emit_control_60320(int, void *, int);
void operation_8c1585a8(int a0, int a1)
{
    int v73;
    S_vv2 *v2;
    S_vv4 *v4;
    int t1;
    int t2;
    v73 = (int)(unsigned char)a0;
    if ((unsigned int)0x89 > v73) {
        v4 = (S_vv4 *)g_8c4daaa4->f38;
        v2 = (S_vv2 *)((int)v4 + (v73 << 5));
        v73 <<= 3;
        v4 = (S_vv4 *)((int)v4 + (v73 + 1 << 2));
        if ((int)(v2->f00) != 0xf0001) {
            t1 = play_se_8c05fbf8((void *)(v2->f00), a1, 0, 0);
            if (v4->f00 != 0) {
                emit_control_60320(t1, (void *)(v4->f00), 0);
            }
        }
        v4 = (S_vv4 *)g_8c4daaa4->f38;
        v2 = (S_vv2 *)((int)v4 + (v73 + 2 << 2));
        v73 = v73 + 3 << 2;
        v4 = (S_vv4 *)((int)v4 + v73);
        if ((int)(v2->f00) != 0xf0001) {
            t2 = play_se_8c05fbf8((void *)(v2->f00), a1, 0, 0);
            if (v4->f00 != 0) {
                emit_control_60320(t2, (void *)(v4->f00), 0);
            }
        }
    }
}
