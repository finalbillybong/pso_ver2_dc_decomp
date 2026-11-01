/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19e58c
 * function: operation_8c19e58c
 * language: c
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 6 of 100 reference instruction lines
 * differing bytes: 24
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
typedef struct S_c8c19e67c S_c8c19e67c;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Arg1 Arg1;
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
struct Arg1 {
    float f00;
    float f04;
};
struct S_c8c19e67c {
    float f00;
    float f04;
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern S_c8c19e67c *record8_8c19e67c(unsigned char);
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c19e58c(int a0, Arg1 *a1, int a2, int a3, float f0)
{
    Frame frame;
    S_c8c19e67c *t1;
    int t2;
    if ((unsigned char)a2 != 0x2d) {
        sq_select_8c38aeb4(1);
        call_8c3827d8(g_8c46fe00);
        sq_header_8c38af22(1, a3);
        t1 = record8_8c19e67c((unsigned char)a2);
        (&frame)->f00 = a1->f00;
        (&frame)->f04 = a1->f04;
        (&frame)->f08 = a1->f00 + 18.0f;
        (&frame)->f0c = a1->f04 + 18.0f;
        (&frame)->f10 = t1->f00 / 256.0f;
        (&frame)->f14 = t1->f04 / 256.0f;
        (&frame)->f18 = (t1->f00 + 18.0f) / 256.0f;
        (&frame)->f1c = (t1->f04 + 18.0f) / 256.0f;
        t2 = clip_and_scale_rectangle((void *)a0, (void *)(&frame));
        if (t2 != 0) {
            sq_quad_8c38b09e((Frame *)((&frame)), f0);
        }
        sq_flush_8c38af12();
    }
}
