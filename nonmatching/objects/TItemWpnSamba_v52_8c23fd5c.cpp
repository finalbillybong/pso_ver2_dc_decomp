/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23fd5c
 * function: TItemWpnSamba_v52_8c23fd5c
 * language: c++
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 16 of 37 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnSamba.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x2];
    short f142;
};
extern "C" void operation_8c075730(void *, void *, int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void TItemWpnSamba_v52_8c23fd5c(Object *o)
{
    operation_8c075730((void *)o, (void *)(o->f13c), (int)(o->f142));
    operation_8c075894((void *)o, (void *)(o->f13c), 2, (int)(((char *)o + 0x234)));
    operation_8c075730((void *)o, (void *)(o->f13c), 0x23);
    operation_8c075894((void *)o, (void *)(o->f13c), 2, (int)(((char *)o + 0x240)));
}
