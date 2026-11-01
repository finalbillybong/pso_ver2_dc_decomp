/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22b368
 * function: TWindowEff_update_8c22b368
 * language: c
 * reference size: 164 bytes
 * compiled size: 164 bytes (+0.0%)
 * differing lines: 16 of 74 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float f;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    char unknown24[0xc];
    char f30;
    char f31;
    char f32;
    char f33;
    float f34;
    float f38;
    float f3c;
    float f40;
};
void TWindowEff_update_8c22b368(Object *o)
{
    float a;
    float b;
    float s;
    float x;
    float f;
    o->f34 += o->f38;
    s = o->f34;
    b = a = 1.0f;
    if (0.1f > s) {
        a = s * o->f3c;
    }
    if (0.1f > 1.0f - s) {
        b = (1.0f - s) * o->f40;
    }
    a = (b > a) ? a : b;
    f = 254.0f;
    o->f33 = f;
    x = a * 0.3f * 254.0f;
    o->f30 = o->f31 = o->f32 = (int)x;
    o->f20 *= 1.05f;
    if (!(1.0f > o->f34)) {
        o->f04 |= 1;
    }
}
