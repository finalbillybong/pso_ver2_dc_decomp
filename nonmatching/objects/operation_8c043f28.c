/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c043f28
 * function: operation_8c043f28
 * language: c
 * reference size: 140 bytes
 * compiled size: 144 bytes (+2.9%)
 * differing lines: 26 of 55 reference instruction lines
 * differing bytes: 126
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct S_vv1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float hs_8c130334(float, float);
extern int angle_step(void *, int, int);
extern void angle_difference(void *, int);
void operation_8c043f28(Object *o, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int t1;
    float t2;
    v1 = (S_vv1 *)((char *)o + 0x164);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v1->f00;
    vector_sub_in_place_8c37f6f0((&frame), ((char *)o + 0x3c));
    t2 = hs_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    v2 = (int)(int)(t2 * 65536.0f / 6.28318405f);
    t1 = angle_step(o->f64, v2, a1);
    o->f64 = (Arg0_64 *)t1;
    angle_difference(o->f64, v2);
}
