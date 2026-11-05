/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a29a0
 * function: operation_8c0a29a0
 * language: c
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 12 of 62 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
struct S_L8c46efc8 {
    char unknown0[0x8];
    int f08;
};
extern S_L8c46efc8 g_8c46efc8;
typedef struct View {
    int f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
} View;
extern View g_8c46efd4;
void operation_8c0a29a0(void)
{
    if ((((&g_8c46efc8)->f08 & 0x400)) != 0) {
        (&g_8c46efc8)->f08 &= -0x401;
    }
    (&g_8c46efc8)->f08 |= 0x200;
    g_8c46efd4.f04 = 640.0f;
    g_8c46efd4.f08 = 480.0f;
    g_8c46efd4.f0c = 320.0f;
    g_8c46efd4.f10 = 240.0f;
    g_8c46efd4.f14 = 0.0f;
    g_8c46efd4.f18 = 0.0f;
    g_8c46efd4.f20 = 15.0f;
    g_8c46efd4.f1c = 20.0f;
    g_8c46efd4.f24 = 1.0f;
    g_8c46efd4.f28 = 0.85f;
}
