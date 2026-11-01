/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a291c
 * function: operation_8c1a291c
 * language: c
 * reference size: 652 bytes
 * compiled size: 664 bytes (+1.8%)
 * differing lines: 112 of 256 reference instruction lines
 * differing bytes: 421
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Rect Rect;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    float f00;
    float f04;
    char unknown8[0x28];
    int f30;
    float f34;
};
struct Frame {
    float f00;
    float f04;
};
struct Rect {
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
    char unknown0[0x9c];
    int f9c;
};
extern S_g8c46fe00 *g_8c46fe00;
extern char g_8c31dafc[];
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
void operation_8c1a291c(Object *o, Arg1 *a1)
{
    Rect r;
    Frame frame;
    float v2;
    int t1;
    int t2;
    int t3;
    if (!(a1->f30 >= 0)) {
        return;
    }
    (&frame)->f00 = a1->f00 + 166.0f - 8.0f;
    (&frame)->f04 = a1->f04 - 13.0f;
    v2 = (float)(-1.0f / (a1->f34 + 0.1495f));
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, -1);
    r.f08 = (&frame)->f00;
    r.f0c = (&frame)->f04;
    r.f10 = r.f08 + 50.0f;
    r.f14 = r.f0c + 27.0f;
    r.f18 = 0.0f;
    r.f1c = 0.3828125f;
    r.f20 = 0.1953125f;
    r.f24 = 0.48828125f;
    scale_rectangle_fields((void *)a1, (void *)(&r));
    sq_quad_8c38b09e((void *)(&r), v2);
    r.f08 = (&frame)->f00 + 50.0f;
    r.f0c = (&frame)->f04;
    r.f10 = r.f08 + 50.0f;
    r.f14 = r.f0c + 27.0f;
    r.f18 = 0.4296875f;
    r.f20 = 0.625f;
    scale_rectangle_fields((void *)a1, (void *)(&r));
    sq_quad_8c38b09e((void *)(&r), v2);
    sq_flush_8c38af12();
    (&frame)->f00 += 50.0f;
    (&frame)->f04 += 4.0f;
    operation_8c19a370((int)a1, 0, 0, -1.0f / (a1->f34 + 0.1794f), 100000.0f);
    reset_text_cursor_8c18ea38();
    operation_8c18eb44((int)(o->f9c));
    t1 = operation_8c04b8dc((void *)((void *)0x8c4dbe40));
    (&frame)->f00 -= (float)(unsigned int)t1;
    t2 = operation_8c04b794(0x2f);
    t3 = operation_8c04b8b0(t2);
    (&frame)->f00 -= (float)(unsigned char)t3 * 0.5f;
    operation_8c18ea4c((int)(g_8c31dafc + 0x13));
    operation_8c18eb44(0x1e);
    call_8c19a3a0((Frame *)((&frame)), (void *)((void *)0x8c4dbe40), -1, 100000.0f);
}
