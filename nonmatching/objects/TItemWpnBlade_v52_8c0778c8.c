/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0778c8
 * function: TItemWpnBlade_v52_8c0778c8
 * language: c
 * reference size: 64 bytes
 * compiled size: 64 bytes (+0.0%)
 * differing lines: 4 of 25 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TItemWpnBlade.h (shared layout for modders; this draft keeps its own local types)
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
};
extern void operation_8c075730(void *, void *, int);
extern void call_8c076fc8(Object *, int);
void TItemWpnBlade_v52_8c0778c8(Object *o)
{
    operation_8c075730((void *)o, (void *)(o->f13c), 0x30);
    call_8c076fc8(o, 1);
    {
        int t0 = 0x23;
        operation_8c075730((void *)o, (void *)(o->f13c), t0);
    }
    call_8c076fc8(o, 0);
}
