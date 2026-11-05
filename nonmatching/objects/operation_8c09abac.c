/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09abac
 * function: operation_8c09abac
 * language: c
 * reference size: 72 bytes
 * compiled size: 72 bytes (+0.0%)
 * differing lines: 28 of 36 reference instruction lines
 * differing bytes: 38
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
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    int dispatch;
};
int operation_8c09abac(Object *o, int a1, int a2)
{
    a1 = a1 << 0x18 | ((a2 << 8 | a1) ^ ((o->dispatch >> 1 >> 1 >> 1 & 0x1f) << 0xa | ((short)((unsigned int)o->dispatch >> 0x10) >> 1 >> 1 >> 1 & 0x1f) << 5 | o->dispatch >> 0xb & 0x1f)) << 8 | a2;
    return a1;
}
