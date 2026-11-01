/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c250b14
 * function: TItemWpnOnBlade_v52_8c250b14
 * language: c
 * reference size: 64 bytes
 * compiled size: 64 bytes (+0.0%)
 * differing lines: 4 of 25 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
void TItemWpnOnBlade_v52_8c250b14(Object *o)
{
    operation_8c075730((void *)o, (void *)(o->f13c), 0x30);
    call_8c076fc8(o, 1);
    operation_8c075730((void *)o, (void *)(o->f13c), 0x23);
    call_8c076fc8(o, 0);
}
