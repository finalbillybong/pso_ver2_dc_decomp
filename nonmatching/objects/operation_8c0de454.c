/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0de454
 * function: operation_8c0de454
 * language: c
 * reference size: 112 bytes
 * compiled size: 122 bytes (+8.9%)
 * differing lines: 68 of 56 reference instruction lines
 * differing bytes: 113
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +10 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and first-16-call I/O); not proof
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
    int f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
};
Object *operation_8c0de454(Object *o)
{
    float z;
    z = 0.0f;
    o->tag = z;
    o->f04 = z;
    o->f08 = z;
    o->f0c = z;
    o->f10 = z;
    o->f14 = z;
    o->dispatch = z;
    o->f1c = z;
    o->f38 = z;
    o->f3c = z;
    o->f40 = z;
    o->f44 = z;
    o->f20 = z;
    o->f24 = z;
    o->f28 = 1.0f;
    o->f2c = 1.0f;
    o->f30 = 0;
    o->f34 = z;
    return o;
}
