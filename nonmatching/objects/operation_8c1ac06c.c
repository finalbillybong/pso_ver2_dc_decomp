/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ac06c
 * function: operation_8c1ac06c
 * language: c
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 4 of 39 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
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
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
struct Object {
    char unknown0[0x64];
    short f64;
};
extern void mark_effect_for_release(void *);
extern int create_effect_78d0(void *, void *, int, short);
int operation_8c1ac06c(Object *o, int a1, int a2)
{
    S_vv1 *v1;
    int t1;
    if (a2 >= 0 && 2 > a2) {
        v1 = (S_vv1 *)((char *)o + (a2 << 2) + 0x5c);
        mark_effect_for_release(v1->f00);
        t1 = create_effect_78d0(((char *)o + 0x20), ((char *)o + 0x2c), a1, o->f64 | 0x40);
        v1->f00 = (S_vv1_0 *)t1;
        return (int)(v1->f00);
    }
    return 0;
}
