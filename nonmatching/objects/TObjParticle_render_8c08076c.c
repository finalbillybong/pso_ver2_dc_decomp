/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08076c
 * function: TObjParticle_render_8c08076c
 * language: c
 * reference size: 36 bytes
 * compiled size: 36 bytes (+0.0%)
 * differing lines: 4 of 14 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjParticle.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    volatile int f94;
};
extern int hierarchy_is_active(void *);
void TObjParticle_render_8c08076c(Object *o)
{
    int t1;
    t1 = hierarchy_is_active((void *)o);
    if (t1 != 0 && o->f94 != 0) {
    }
}
