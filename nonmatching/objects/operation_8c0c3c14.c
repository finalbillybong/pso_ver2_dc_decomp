/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3c14
 * function: operation_8c0c3c14
 * language: c
 * reference size: 320 bytes
 * compiled size: 332 bytes (+3.8%)
 * differing lines: 132 of 154 reference instruction lines
 * differing bytes: 298
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_4 S_frame_4;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    float f08;
};
struct S_vv2 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
};
struct S_vv1 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    float f10;
};
struct Arg2 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct S_frame_4 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
struct S_frame_0 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
extern void call_8c0c3a8c(int, int, int, void *, Frame *, void *);
extern float call_8c12afc0(float);
void operation_8c0c3c14(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    S_vv2 *v2;
    S_vv1 *v1;
    float v3;
    float v7;
    float t1;
    call_8c0c3a8c(a0, 0x14, a1, (void *)(&(&frame)->f04), (Frame *)((&frame)), (void *)(&(&frame)->f08));
    v1 = (S_vv1 *)(&frame)->f00;
    v2 = (S_vv2 *)(&frame)->f04;
    v3 = (float)(1.0f - (&frame)->f08);
    if (0.0f > (v2->f04 * v1->f04 + v2->f08 * v1->f08 + v2->f0c * v1->f0c + v2->f10 * v1->f10)) {
        (&frame)->f08 *= -1.0f;
    }
    a2->f00 = v2->f04 * v3 + v1->f04 * (&frame)->f08;
    a2->f04 = (&frame)->f04->f08 * v3 + (&frame)->f00->f08 * (&frame)->f08;
    a2->f08 = (&frame)->f04->f0c * v3 + (&frame)->f00->f0c * (&frame)->f08;
    a2->f0c = (&frame)->f04->f10 * v3 + (&frame)->f00->f10 * (&frame)->f08;
    t1 = call_8c12afc0(a2->f00 * a2->f00 + a2->f04 * a2->f04 + a2->f08 * a2->f08 + a2->f0c * a2->f0c);
    v7 = (float)(1.0f / t1);
    a2->f00 *= v7;
    a2->f04 *= v7;
    a2->f08 *= v7;
    a2->f0c *= v7;
}
