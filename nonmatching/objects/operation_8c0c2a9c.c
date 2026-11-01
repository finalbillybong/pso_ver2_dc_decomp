/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c2a9c
 * function: operation_8c0c2a9c
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 12 of 66 reference instruction lines
 * differing bytes: 8
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
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x214];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x74];
    int f398;
};
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void apply_object_velocity(void *);
void operation_8c0c2a9c(Object *o)
{
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->ff0 = 4;
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        refresh_follow_effect_8c052180((void *)o);
        if ((o->f100 * 30.0f * 0.5f) > o->ff8) {
            apply_object_velocity((void *)o);
            o->f318 *= 0.5f;
            o->f320 *= 0.5f;
        }
    }
}
