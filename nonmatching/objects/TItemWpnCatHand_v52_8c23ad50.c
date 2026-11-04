/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23ad50
 * function: TItemWpnCatHand_v52_8c23ad50
 * language: c
 * reference size: 80 bytes
 * compiled size: 80 bytes (+0.0%)
 * differing lines: 8 of 32 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TItemWpnCatHand.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown0[0x38];
    int f38;
    char unknown3c[0x100];
    Arg0_13c *f13c;
    char unknown140[0x94];
    int f1d4;
};
extern void operation_8c075730(void *, void *, int);
extern void call_8c076fc8(Object *, int);
void TItemWpnCatHand_v52_8c23ad50(Object *o)
{
    int v2;
    char *v1;
    v2 = (int)o->f13c;
    v1 = (char *)o->f38;
    operation_8c075730((void *)o, (void *)v2, 0x2f);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
    o->f38 = (int)(o->f1d4);
    operation_8c075730((void *)o, (void *)(o->f13c), 0x22);
    o->f38 = (int)(v1);
}
