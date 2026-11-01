/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1cd28c
 * function: operation_8c1cd28c
 * language: c
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 22 of 40 reference instruction lines
 * differing bytes: 13
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
    char unknown0[0x54];
    float f54;
    int f58;
    char unknown5c[0x20];
    float f7c;
    char unknown80[0x4];
    short f84;
    char unknown86[0xe];
    int f94;
};
void operation_8c1cd28c(Object *o)
{
    if (o->f94 != 0 && o->f58 == 0) {
        o->f7c += (float)(o->f84 * 0x14) + 9.0f - (o->f54 - 15.0f - 13.0f) * 0.5f - o->f7c;
    }
}
