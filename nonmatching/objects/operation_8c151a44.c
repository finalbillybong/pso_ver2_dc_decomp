/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151a44
 * function: operation_8c151a44
 * language: c
 * reference size: 48 bytes
 * compiled size: 52 bytes (+8.3%)
 * differing lines: 2 of 20 reference instruction lines
 * differing bytes: 19
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x360];
    int f398;
};
void operation_8c151a44(Object *o)
{
    switch (o->f398) {
    case 0:
        o->f34 &= -0x40001;
        o->f398 = 1;
        break;
    case -1:
    case 1:
        break;
    default:
        return;
    }
}
