/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a4dd4
 * function: operation_8c0a4dd4
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 4 of 52 reference instruction lines
 * differing bytes: 7
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
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    float tag;
    float f04;
    float f08;
};
struct Arg2 {
    int f00;
};
struct Arg1 {
    int f00;
};
extern float errno_wrap_8c130334(float, float);
extern float signed_sqrt_8c37f6c0(float);
void operation_8c0a4dd4(Object *o, Arg1 *a1, Arg2 *a2)
{
    float t1;
    float t2;
    float t3;
    t1 = errno_wrap_8c130334(-o->tag, -o->f08);
    a2->f00 = (int)(t1 * 65536.0f / 6.28318405f);
    t2 = signed_sqrt_8c37f6c0(o->tag * o->tag + o->f08 * o->f08);
    a1->f00 = (int)(errno_wrap_8c130334(o->f04, t2) * 65536.0f / 6.28318405f);
}
