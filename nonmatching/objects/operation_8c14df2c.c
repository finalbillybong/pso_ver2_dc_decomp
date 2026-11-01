/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14df2c
 * function: operation_8c14df2c
 * language: c
 * reference size: 92 bytes
 * compiled size: 92 bytes (+0.0%)
 * differing lines: 4 of 40 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x74];
    float f74;
    char unknown78[0x300];
    int f378;
};
extern int g_8c4703c0;
void operation_8c14df2c(Object *o)
{
    int v1;
    o->f378 = (int)(o->f74 + ((float)g_8c4703c0 * 2.0f + 1.0f));
    v1 = (int)o->f378;
    if (v1 < 0) {
        o->f378 = 0;
    } else if (g_8c4703c0 == 3) {
        if (v1 > 0x1d) {
            o->f378 = 0x1d;
        }
    } else if (v1 > 0xe) {
        o->f378 = 0xe;
    }
}
