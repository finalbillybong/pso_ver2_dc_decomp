/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c510c
 * function: operation_8c0c510c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 4 of 51 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg2 Arg2;
struct Object {
    float tag;
    float f04;
    float f08;
};
struct Arg1 {
    int f00;
};
struct Arg2 {
    int f00;
};
extern float errno_wrap_8c130334(float, float);
extern float signed_sqrt_8c37f6c0(float);
void operation_8c0c510c(Object *o, Arg1 *a1, Arg2 *a2)
{
    float t1;
    float t2;
    float t3;
    t1 = errno_wrap_8c130334(o->f08, o->tag);
    a1->f00 = -(int)(t1 * 65536.0f / 6.28318405f);
    t2 = signed_sqrt_8c37f6c0(o->f08 * o->f08 + o->tag * o->tag);
    t3 = errno_wrap_8c130334(o->f04, t2);
    a2->f00 = (int)(t3 * 65536.0f / 6.28318405f);
}
