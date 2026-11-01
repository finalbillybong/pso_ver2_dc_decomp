/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c192c20
 * function: operation_8c192c20
 * language: c
 * reference size: 680 bytes
 * compiled size: 688 bytes (+1.2%)
 * differing lines: 68 of 269 reference instruction lines
 * differing bytes: 526
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
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
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x20];
    int f30;
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
    float f20;
    float f24;
};
struct Object {
    char tag;
    char f01;
    char unknown2[0x2];
    float f04;
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void operation_8c19a370(int, int, int, float, float);
extern void reset_text_cursor_8c18ea38(void);
extern void operation_8c18eb44(int);
extern int operation_8c04b8dc(void *);
extern int operation_8c04b794(int);
extern int operation_8c04b8b0(int);
extern void operation_8c18ea4c(int);
extern void call_8c19a3a0(Frame *, void *, int, float);
void operation_8c192c20(Object *o, Arg1 *a1)
{
    Frame frame;
    float v2;
    float v1;
    float v5;
    int t1;
    int t2;
    int t3;
    if (!(a1->f30 >= 0)) {
        return;
    }
    (&frame)->f00 = a1->f00 + a1->f08 - 79.0f;
    (&frame)->f04 = a1->f04 + a1->f0c - 25.0f;
    v1 = (float)(-1.0f / (a1->f34 + 0.1495f));
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, -1);
    (&frame)->f08 = (&frame)->f00 + 40.0f;
    (&frame)->f0c = (&frame)->f04 + 2.0f;
    v2 = (float)o->f04;
    if (v2 > 0.0f) {
        (&frame)->f08 += v2;
    }
    (&frame)->f10 = (&frame)->f08 + 29.0f;
    (&frame)->f14 = (&frame)->f0c + 15.0f;
    (&frame)->f18 = 0.5625f;
    (&frame)->f1c = 0.328125f;
    (&frame)->f20 = 0.67578125f;
    (&frame)->f24 = 0.38671875f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f08));
    sq_quad_8c38b09e((void *)(&(&frame)->f08), v1);
    (&frame)->f08 = (&frame)->f00 - 69.0f;
    (&frame)->f0c = (&frame)->f04 + 2.0f;
    v5 = (float)o->f04;
    if (0.0f > v5) {
        (&frame)->f08 += v5;
    }
    (&frame)->f10 = (&frame)->f08 + 29.0f;
    (&frame)->f14 = (&frame)->f0c + 15.0f;
    (&frame)->f18 = 0.44140625f;
    (&frame)->f20 = 0.5546875f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f08));
    sq_quad_8c38b09e((void *)(&(&frame)->f08), v1);
    sq_flush_8c38af12();
    operation_8c19a370((int)a1, 0, 1, v1, 100000.0f);
    reset_text_cursor_8c18ea38();
    operation_8c18eb44((int)(o->tag + 1));
    t1 = operation_8c04b8dc((void *)((void *)0x8c4dbe40));
    (&frame)->f00 -= (float)(unsigned int)t1;
    t2 = operation_8c04b794(0x2f);
    t3 = operation_8c04b8b0(t2);
    (&frame)->f00 -= (float)(unsigned char)t3 * 0.5f;
    operation_8c18ea4c((int)((void *)0x8c31a2e0));
    operation_8c18eb44((int)(o->f01));
    call_8c19a3a0((Frame *)((&frame)), (void *)((void *)0x8c4dbe40), -1, 100000.0f);
}
