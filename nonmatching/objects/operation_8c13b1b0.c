/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13b1b0
 * function: operation_8c13b1b0
 * language: c
 * reference size: 72 bytes
 * compiled size: 72 bytes (+0.0%)
 * differing lines: 2 of 27 reference instruction lines
 * differing bytes: 7
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
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x360];
    int f398;
};
extern int g_8c4d9c18;
void operation_8c13b1b0(Object *o)
{
    switch (o->f398) {
    case 0:
        g_8c4d9c18 = 1;
        o->f34 |= 0x2040000;
        o->f398 = 1;
        return;
    case -1:
        o->f34 &= -0x2040001;
        break;
    case 1:
        break;
    default:
        return;
    }
}
