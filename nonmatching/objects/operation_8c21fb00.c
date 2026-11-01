/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21fb00
 * function: operation_8c21fb00
 * language: c
 * reference size: 260 bytes
 * compiled size: 260 bytes (+0.0%)
 * differing lines: 56 of 105 reference instruction lines
 * differing bytes: 172
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
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Arg1 {
    float f00;
    float f04;
    char unknown8[0x2c];
    float f34;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
};
struct S_vv1 {
    float f00;
    float f04;
};
extern void sq_header3_8c38b02e(int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
void operation_8c21fb00(int a0, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    S_vv1 *v1;
    float v2;
    v1 = (S_vv1 *)&*(int *)((char *)0x8c2e18e8 + (a2 << 3));
    v2 = (float)(-1.0f / (a1->f34 + 0.1794f));
    sq_header3_8c38b02e(a3);
    (&frame)->f00 = a1->f00 + 429.0f - 420.0f;
    (&frame)->f04 = a1->f04 + 348.0f - 335.0f + (float)a2 * 16.0f;
    (&frame)->f08 = (&frame)->f00 + 16.0f;
    (&frame)->f0c = (&frame)->f04 + 16.0f;
    (&frame)->f10 = v1->f00 / 256.0f;
    (&frame)->f14 = v1->f04 / 256.0f;
    (&frame)->f18 = (v1->f00 + 16.0f) / 256.0f;
    (&frame)->f1c = (v1->f04 + 16.0f) / 256.0f;
    scale_rectangle_fields((void *)a1, (void *)(&frame));
    sq_quad_8c38b09e((Frame *)((&frame)), v2);
}
