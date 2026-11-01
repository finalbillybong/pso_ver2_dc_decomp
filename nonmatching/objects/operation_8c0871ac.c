/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0871ac
 * function: operation_8c0871ac
 * language: c
 * reference size: 152 bytes
 * compiled size: 160 bytes (+5.3%)
 * differing lines: 76 of 65 reference instruction lines
 * differing bytes: 144
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
extern int g_8c469d20;
void operation_8c0871ac(int a0, Arg1 *a1)
{
    float *row;
    float u;
    float v;
    a0 = (unsigned char)a0;
    u = (float)((a0 & 0xf) << 4);
    v = (float)(a0 & 0xf0) + 109.0f;
    row = (float *)((char *)g_8c469d20 + (a0 + -0x20 << 3));
    a1->f04 += row[1];
    a1->f08 = a1->f00 + row[0];
    a1->f0c = a1->f04 + 15.0f;
    a1->f10 = u / 256.0f;
    a1->f14 = v / 256.0f;
    a1->f18 = (u + row[0]) / 256.0f;
    a1->f1c = (v + 15.0f) / 256.0f;
}
