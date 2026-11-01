/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2314a0
 * function: operation_8c2314a0
 * language: c
 * reference size: 120 bytes
 * compiled size: 132 bytes (+10.0%)
 * differing lines: 82 of 45 reference instruction lines
 * differing bytes: 107
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_x81120 S_x81120;
typedef struct S_x96208 S_x96208;
struct S_x96208 {
    short f00;
};
struct S_x81120 {
    short f00;
};
struct S_vv1 {
    int f00;
};
extern int g_8c50656c;
extern void call_8c36c674(int);
void operation_8c2314a0(void)
{
    S_vv1 *v1;
    short v2;
    int v10;
    g_8c50656c += 1;
    call_8c36c674(0xf);
    v1 = (S_vv1 *)(void *)0x8c5065a0;
    v2 = (short)((S_x96208 *)(-0x17fff0))->f00;
    if (((((S_x81120 *)(-0x17ffdc))->f00 & 1)) != 0) {
        ((S_x81120 *)(-0x17ffdc))->f00 &= -2;
        v1->f00 = -2;
    }
    v10 = (int)(short)v2;
    if (((0x80 & v10)) != 0) {
        ((S_x96208 *)(-0x17fff0))->f00 &= -0x81;
        v1->f00 = -4;
    }
    if (((v10 & 0x10)) != 0) {
        ((S_x96208 *)(-0x17fff0))->f00 &= -0x11;
        v1->f00 = -6;
    }
}
