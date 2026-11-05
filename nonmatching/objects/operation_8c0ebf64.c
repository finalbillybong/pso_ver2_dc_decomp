/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ebf64
 * function: operation_8c0ebf64
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 18 of 64 reference instruction lines
 * differing bytes: 23
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
    char unknown0[0x24];
    int f24;
    char unknown28[0x58];
    float f80;
    char unknown84[0x4];
    float f88;
    char unknown8c[0x14];
    float fa0;
    char unknowna4[0x4];
    float fa8;
    char unknownac[0x14];
    float fc0;
    char unknownc4[0x4];
    float fc8;
    char unknowncc[0x14];
    float fe0;
    char unknowne4[0x4];
    float fe8;
    char unknownec[0x14];
    float f100;
    char unknown104[0x4];
    float f108;
    char unknown10c[0x14];
    float f120;
    char unknown124[0x4];
    float f128;
};
void operation_8c0ebf64(Object *o)
{
    o->f80 = o->fa0 = o->fc0 = o->fe0 = o->f100 = o->f120 = (float)o->f24 * 93.0f + 180.0f;
    o->f88 = o->fa8 = o->fc8 = o->fe8 = o->f108 = o->f128 = (float)o->f24 * 93.0f + 208.0f;
}
