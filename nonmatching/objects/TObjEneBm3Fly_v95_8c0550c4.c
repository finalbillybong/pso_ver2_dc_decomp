/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0550c4
 * function: TObjEneBm3Fly_v95_8c0550c4
 * language: c
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 10 of 30 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneBm3Fly.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x2e4];
    float f328;
    char unknown32c[0x11c];
    float f448;
};
extern void operation_8c05b16c(void *);
void TObjEneBm3Fly_v95_8c0550c4(Object *o)
{
    float v1;
    operation_8c05b16c((void *)o);
    {
        float *p;
        v1 = (float)o->f40;
        p = &o->f448;
        if (1.2f > (*p - v1)) {
            *p = v1 + 1.2f;
        }
    }
    o->f328 = o->f448;
}
