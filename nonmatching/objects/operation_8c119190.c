/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c119190
 * function: operation_8c119190
 * language: c
 * reference size: 84 bytes
 * compiled size: 84 bytes (+0.0%)
 * differing lines: 16 of 38 reference instruction lines
 * differing bytes: 10
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
    int tag;
    int f04;
    char unknown8[0x4];
    float f0c;
    float f10;
    float f14;
};
extern float floor_e(float);
int operation_8c119190(Object *o, float f0)
{
    float t1;
    if (o->f0c > f0 || f0 > o->f10) {
        return 0;
    }
    t1 = floor_e((f0 - o->f0c + 0.01f) / o->f14);
    return (int)o->tag + (int)t1 * o->f04 * 0xc;
}
