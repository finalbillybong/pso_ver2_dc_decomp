/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05b08c
 * function: operation_8c05b08c
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 42 reference instruction lines
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
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_x2048 S_x2048;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x74];
    int fdc;
};
struct S_x2048 {
    Vector3 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct S_vv1 {
    Vector3 f00;
};
extern void rotate_scalar_pair(void *, void *, int);
extern void call_8c3bdf60(S_vv1 *, void *);
void operation_8c05b08c(Object *o, Arg1 *a1, int a2)
{
    S_vv1 *v1;
    *(Vector3 *)&((S_x2048 *)((int)o->fdc + a2 * 0x2c))->f00 = *(Vector3 *)&a1->f00;
    v1 = (S_vv1 *)((int)o->fdc + a2 * 0x2c + 0x1c);
    *(Vector3 *)&v1->f00 = *(Vector3 *)&a1->f00;
    rotate_scalar_pair((void *)v1, (void *)((int)v1 + 8), (int)(o->f64));
    call_8c3bdf60(v1, (void *)(((char *)o + 0x3c)));
}
