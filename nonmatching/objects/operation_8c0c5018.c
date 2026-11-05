/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c5018
 * function: operation_8c0c5018
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 54 reference instruction lines
 * differing bytes: 7
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
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
void operation_8c0c5018(Object *o, Arg1 *a1, Arg2 *a2)
{
    float t1;
    float t2;
    float t3;
    t1 = errno_wrap_8c130334(o->f04, o->f08);
    a1->f00 = -(int)(t1 * 65536.0f / 6.28318405f);
    t2 = signed_sqrt_8c37f6c0(o->f04 * o->f04 + o->f08 * o->f08);
    t3 = errno_wrap_8c130334(o->tag, t2);
    a2->f00 = (int)(t3 * 65536.0f / 6.28318405f);
}
