/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09e850
 * function: operation_8c09e850
 * language: c
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 6 of 54 reference instruction lines
 * differing bytes: 8
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
typedef struct S_vv12 S_vv12;
struct S_vv12 {
    char unknown0[0x2];
    short f02;
    char unknown4[0x6];
    short f0a;
    short f0c;
};
extern int g_8c46ec50;
void operation_8c09e850(int a0, int a1, int a2, int a3, short a4)
{
    int v6;
    int v11;
    int v5;
    short v13;
    S_vv12 *v12;
    int v16;
    v13 = a4;
    if (a0 > 0x11) {
        v12 = 0;
    } else {
        v6 = (int)0;
        for (v5 = v6; a0 > v5; v5++) {
            v6 += *(int *)((char *)0x8c46ec58 + (v5 << 2));
        }
        v12 = (S_vv12 *)(g_8c46ec50 + v6 * 0x44);
    }
    v11 = (int)*(int *)((char *)0x8c46ec58 + (a0 << 2));
    for (v16 = 0; v11 > v16; v16++, v12 = (S_vv12 *)((char *)v12 + 0x44)) {
        if (v12->f0c == (short)a1 && v12->f0a == (short)a2) {
            v12->f02 &= a3;
            v12->f02 |= v13;
        }
    }
}
