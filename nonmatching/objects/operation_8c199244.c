/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c199244
 * function: operation_8c199244
 * language: c
 * reference size: 324 bytes
 * compiled size: 324 bytes (+0.0%)
 * differing lines: 18 of 123 reference instruction lines
 * differing bytes: 89
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
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Object {
    char unknown0[0x80];
    char f80;
    char f81;
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
extern int clip_and_scale_rectangle(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c199244(Object *o, Arg1 *a1)
{
    Frame frame;
    float v2;
    float v3;
    float v1;
    int t1;
    if (a1->f30 >= 0) {
        v1 = (float)(-1.0f / (a1->f34 + 0.1196f));
        v2 = a1->f10 + (float)o->f80 * 58.0f - 1.0f;
        v3 = a1->f14 + (float)o->f81 * 51.0f + 6.0f;
        sq_select_8c38aeb4(1);
        call_8c3827d8(g_8c46fe00);
        sq_header_8c38af22(2, -1);
        (&frame)->f00 = v2;
        (&frame)->f04 = v3;
        (&frame)->f08 = (&frame)->f00 + 64.0f;
        (&frame)->f0c = (&frame)->f04 + 54.0f;
        (&frame)->f10 = 0.6171875f;
        (&frame)->f14 = 0.0f;
        (&frame)->f18 = 0.8671875f;
        (&frame)->f1c = 0.2109375f;
        t1 = clip_and_scale_rectangle((void *)a1, (void *)(&frame));
        if (t1 != 0) {
            sq_quad_8c38b09e((Frame *)((&frame)), v1);
        }
        sq_flush_8c38af12();
    }
}
