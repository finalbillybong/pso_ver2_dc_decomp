/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c2dc8
 * function: operation_8c0c2dc8
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 18 of 56 reference instruction lines
 * differing bytes: 23
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
typedef struct Arg1 Arg1;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Arg1 {
    Vector3 f00;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float errno_wrap_8c130334(float, float);
extern int angle_step(int, int, int);
extern void angle_difference(int, int);
void operation_8c0c2dc8(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    int t1;
    float t2;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&a1->f00;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
    t2 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    a3 += (int)(t2 * 65536.0f / 6.28318405f);
    t1 = angle_step((int)(o->f64), a3, a2);
    o->f64 = (Arg0_64 *)t1;
    angle_difference((int)(o->f64), a3);
}
