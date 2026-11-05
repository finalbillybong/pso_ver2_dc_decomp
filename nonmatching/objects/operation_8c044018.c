/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c044018
 * function: operation_8c044018
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 12 of 53 reference instruction lines
 * differing bytes: 15
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
extern float errno_wrap_8c130334(float, float);
extern int angle_halfway(int, int);
extern void angle_difference(int, int);
void operation_8c044018(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int t1;
    float t2;
    v1 = (S_vv1 *)((char *)o + 0x164);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v1->f00;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
    t2 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    t1 = angle_halfway((int)(o->f64), v2 = (int)(t2 * 65536.0f / 6.28318405f));
    o->f64 = (Arg0_64 *)t1;
    angle_difference((int)(o->f64), v2);
}
