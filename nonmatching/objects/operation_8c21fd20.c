/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21fd20
 * function: operation_8c21fd20
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 16 of 200 reference instruction lines
 * differing bytes: 71
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
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
typedef struct Arg1 Arg1;
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
struct Object {
    char unknown0[0x68];
    char f68;
    char unknown69[0x3];
    Arg0_6c *f6c;
};
struct Arg0_6c {
    char f00;
};
extern int operation_8c1a68f8(int);
extern int operation_8c1a6904(int);
extern void sq_header3_8c38b02e(int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(Frame *, float);
void operation_8c21fd20(Object *o, Arg1 *a1)
{
    int t2;
    Frame frame;
    short pm5;
    int v1;
    int v3;
    float pm3;
    float v2;
    float pm7;
    v2 = (float)(-1.0f / (a1->f34 + 0.1794f));
    v1 = 0;
    (&frame)->f10 = 0.9375f;
    (&frame)->f14 = 0.15234375f;
    (&frame)->f18 = 0.9921875f;
    pm7 = 0.20703125f;
    (&frame)->f1c = pm7;
    while (8 > v1) {
        float pm4;
        Frame *pm6;
        if (0 != (((int)o->f68 & 2))) {
            int t1;
            t1 = operation_8c1a68f8(v1);
            v3 = (int)t1;
        } else {
            t2 = operation_8c1a6904(v1);
            v3 = (int)t2;
        }
        sq_header3_8c38b02e(v3);
        (&frame)->f00 = a1->f00 + 525.0f - 420.0f + (float)v1 * 12.0f;
        pm4 = 335.0f;
        pm6 = &frame;
        (&frame)->f04 = 398.0f + a1->f04 - pm4;
        (&frame)->f08 = (pm6)->f00 + 14.0f;
        (&frame)->f0c = 14.0f + (&frame)->f04;
        scale_rectangle_fields((void *)a1, (void *)(&frame));
        sq_quad_8c38b09e(((&frame)), v2);
        v1 += 1;
    }
    pm5 = o->f68;
    if (0 != ((2 & pm5))) {
        sq_header3_8c38b02e(-1);
    } else {
        sq_header3_8c38b02e(-0x7f7f80);
    }
    (&frame)->f00 = 525.0f + a1->f00 - 420.0f + (float)o->f6c->f00 * 12.0f;
    (&frame)->f04 = 398.0f + a1->f04 - 335.0f;
    pm3 = (&frame)->f00;
    (&frame)->f08 = 14.0f + pm3;
    (&frame)->f0c = (&frame)->f04 + 14.0f;
    (&frame)->f10 = 0.87109375f;
    (&frame)->f14 = 0.15234375f;
    (&frame)->f18 = 0.92578125f;
    (&frame)->f1c = 0.20703125f;
    scale_rectangle_fields((void *)a1, (void *)(&frame));
    sq_quad_8c38b09e((Frame *)((&frame)), v2);
}
