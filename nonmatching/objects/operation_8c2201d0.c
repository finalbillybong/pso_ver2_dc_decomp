/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2201d0
 * function: operation_8c2201d0
 * language: c
 * reference size: 656 bytes
 * compiled size: 652 bytes (-0.6%)
 * differing lines: 296 of 284 reference instruction lines
 * differing bytes: 500
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
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
struct Object {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x18];
    int f30;
    float f34;
};
struct Arg1 {
    float f00;
    float f04;
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
    float f28;
};
extern int g_8c418244;
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int, float, float, float);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void scale_rectangle_fields(void *, void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
void operation_8c2201d0(Object *o, Arg1 *a1, float f0, float f1)
{
    Frame frame;
    int v19;
    float v10;
    float v12;
    float v11;
    int v4;
    float v14;
    float v13;
    float v15;
    float v16;
    float v18;
    if (!(o->f30 >= 0)) {
        return;
    }
    if (6 > o->f30) {
        v19 = (int)(o->f30 * 0xff);
        if (((float)v19 * 0.166666672f) > 2147483648.0f) {
        }
        v4 = (int)((unsigned int)((float)v19 * 0.166666672f) << 0x18);
    } else {
        v4 = (int)-0x1000000;
    }
    v10 = (float)o->f10;
    v11 = (float)-1.0f;
    v12 = (float)o->f14;
    v13 = (float)((float)(g_8c418244 & 0xf) * f1);
    v14 = (float)(v10 + a1->f00);
    v15 = (float)(v12 + a1->f04);
    v16 = (float)(v11 / (o->f34 + 0.2691f));
    (&frame)->f00 = f0 - 12.0f;
    sq_select_8c38aeb4(1, f0, f1, 12.0f);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(2, (int)(v4 | 0xffffff));
    (&frame)->f04 = v14 + v13;
    (&frame)->f0c = v14 + v13;
    (&frame)->f08 = v15 + v13;
    (&frame)->f10 = v15 + v13;
    (&frame)->f14 = (&frame)->f0c + 12.0f;
    (&frame)->f18 = (&frame)->f10 + 12.0f;
    (&frame)->f1c = 0.87109375f;
    (&frame)->f20 = 0.0f;
    (&frame)->f24 = 0.91796875f;
    (&frame)->f28 = 0.046875f;
    scale_rectangle_fields((void *)o, (void *)(&(&frame)->f0c));
    sq_quad_8c38b09e((void *)(&(&frame)->f0c), v16);
    v10 = (float)(v14 - v13);
    (&frame)->f10 = (&frame)->f08;
    (&frame)->f14 = (&frame)->f0c + 12.0f;
    (&frame)->f18 = (&frame)->f10 + 12.0f;
    (&frame)->f1c = 0.91796875f;
    (&frame)->f24 = 0.96484375f;
    scale_rectangle_fields((void *)o, (void *)(&(&frame)->f0c));
    sq_quad_8c38b09e((void *)(&(&frame)->f0c), v16);
    v12 = (float)(v15 - v13);
    v18 = (float)(v12 + (&frame)->f00);
    (&frame)->f10 = v18;
    (&frame)->f14 = (&frame)->f0c + 12.0f;
    (&frame)->f18 = (&frame)->f10 + 12.0f;
    (&frame)->f20 = 0.046875f;
    (&frame)->f28 = 0.09375f;
    scale_rectangle_fields((void *)o, (void *)(&(&frame)->f0c));
    sq_quad_8c38b09e((void *)(&(&frame)->f0c), v16);
    (&frame)->f0c = (&frame)->f04;
    (&frame)->f10 = v18;
    (&frame)->f14 = (&frame)->f0c + 12.0f;
    (&frame)->f18 = (&frame)->f10 + 12.0f;
    (&frame)->f1c = 0.87109375f;
    (&frame)->f24 = 0.91796875f;
    scale_rectangle_fields((void *)o, (void *)(&(&frame)->f0c));
    sq_quad_8c38b09e((void *)(&(&frame)->f0c), v16);
    sq_flush_8c38af12();
}
