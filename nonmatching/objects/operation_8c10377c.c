/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10377c
 * function: operation_8c10377c
 * language: c
 * reference size: 248 bytes
 * compiled size: 252 bytes (+1.6%)
 * differing lines: 30 of 95 reference instruction lines
 * differing bytes: 179
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x30];
    int f30;
};
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0xc];
    float f5c;
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
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c10377c(Object *o, Arg1 *a1)
{
    Frame frame;
    float v1;
    float v2;
    if (a1->f30 >= 0) {
        v1 = (float)-1.0f;
        v2 = (float)(v1 / o->f5c);
        sq_select_8c38aeb4(1);
        call_8c3827d8(g_8c46fe00);
        sq_header_8c38af22(2, -1);
        (&frame)->f00 = o->f48 + 9.0f;
        (&frame)->f04 = o->f4c + 13.0f;
        (&frame)->f08 = (&frame)->f00 + 158.0f;
        (&frame)->f0c = (&frame)->f04 + 107.0f;
        (&frame)->f10 = 0.0f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.6171875f;
        (&frame)->f1c = 0.41796875f;
        scale_rectangle_fields((void *)a1, (void *)(&frame));
        sq_quad_8c38b09e((Frame *)((&frame)), v2);
        sq_flush_8c38af12();
    }
}
