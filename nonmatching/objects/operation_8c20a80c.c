/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20a80c
 * function: operation_8c20a80c
 * language: c
 * reference size: 144 bytes
 * compiled size: 152 bytes (+5.6%)
 * differing lines: 106 of 66 reference instruction lines
 * differing bytes: 141
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +8 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    float tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
};
void operation_8c20a80c(Object *o, float f0, float f1, float f2)
{
    float v1;
    float v2;
    float v4;
    v1 = f0 * 0.00390625f;
    o->tag = v1;
    v2 = f1 * 0.00390625f;
    o->f04 = v2;
    f1 += 20.0f;
    o->f08 = v1;
    f1 *= 0.00390625f;
    o->f0c = f1;
    v4 = (f0 + f2) * 0.00390625f;
    o->f10 = v4;
    o->f14 = v2;
    o->dispatch = v4;
    o->f1c = f1;
    f0 += 48.0f;
    v4 = (f0 - f2) * 0.00390625f;
    o->f20 = v4;
    o->f24 = v2;
    o->f28 = v4;
    o->f2c = f1;
    f0 *= 0.00390625f;
    o->f30 = f0;
    o->f34 = v2;
    o->f38 = f0;
    o->f3c = f1;
}
