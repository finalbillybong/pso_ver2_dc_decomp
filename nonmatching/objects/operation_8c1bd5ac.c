/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bd5ac
 * function: operation_8c1bd5ac
 * language: c
 * reference size: 632 bytes
 * compiled size: 624 bytes (-1.3%)
 * differing lines: 158 of 275 reference instruction lines
 * differing bytes: 526
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
struct Frame {
    Block16 f00;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Arg2 {
    char unknown0[0x8];
    float f08;
    float f0c;
    float f10;
};
struct S_vv1 {
    float f00;
    float f04;
};
extern Block16 g_8c327f88;
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c1bd5ac(int a0, Arg1 *a1, Arg2 *a2, int a3)
{
    Frame frame;
    float v2;
    float v5;
    S_vv1 *v1;
    float v6;
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&g_8c327f88;
    if (!(a1->f30 >= 0)) {
        return;
    }
    if (a3 != 0) {
        v1 = (S_vv1 *)((char *)(&frame) + 0x8);
    } else {
        v1 = (S_vv1 *)(&frame);
    }
    v2 = (float)(a1->f10 + a2->f08 - a2->f10 * 0.5f - 7.0f);
    v5 = (float)(a1->f14 + a2->f0c);
    v6 = (float)(-1.0f / (a1->f34 + 0.22425f));
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0, -1);
    (&frame)->f10 = v2;
    (&frame)->f14 = v5 - 15.0f;
    (&frame)->f18 = (&frame)->f10 + 14.0f;
    (&frame)->f1c = (&frame)->f14 + 12.0f;
    (&frame)->f20 = v1->f00 / 256.0f;
    (&frame)->f24 = v1->f04 / 256.0f;
    (&frame)->f28 = (v1->f00 + 14.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 12.0f) / 256.0f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f10));
    sq_quad_8c38b09e((void *)(&(&frame)->f10), v6);
    (&frame)->f10 = v2;
    (&frame)->f14 = v5 + 19.0f;
    (&frame)->f18 = (&frame)->f10 + 14.0f;
    (&frame)->f1c = (&frame)->f14 + 12.0f;
    (&frame)->f20 = v1->f00 / 256.0f;
    (&frame)->f24 = (v1->f04 + 13.0f) / 256.0f;
    (&frame)->f28 = (v1->f00 + 14.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 12.0f + 13.0f) / 256.0f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f10));
    sq_quad_8c38b09e((void *)(&(&frame)->f10), v6);
    (&frame)->f10 = v2;
    (&frame)->f14 = v5 + 25.0f;
    (&frame)->f18 = (&frame)->f10 + 14.0f;
    (&frame)->f1c = (&frame)->f14 + 12.0f;
    (&frame)->f20 = v1->f00 / 256.0f;
    (&frame)->f24 = (v1->f04 + 28.0f) / 256.0f;
    (&frame)->f28 = (v1->f00 + 14.0f) / 256.0f;
    (&frame)->f2c = (v1->f04 + 12.0f + 28.0f) / 256.0f;
    scale_rectangle_fields((void *)a1, (void *)(&(&frame)->f10));
    sq_quad_8c38b09e((void *)(&(&frame)->f10), v6);
    sq_flush_8c38af12();
}
