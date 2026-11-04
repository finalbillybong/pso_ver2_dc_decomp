/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0db98c
 * function: operation_8c0db98c
 * language: c
 * reference size: 732 bytes
 * compiled size: 736 bytes (+0.5%)
 * differing lines: 86 of 319 reference instruction lines
 * differing bytes: 420
 * provenance: hand pass on a generator draft (address casts converted to prototypes)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
    char unknown0[0x14];
    float f14;
    char unknown18[0xc];
    float f24;
    char unknown28[0x4];
    float f2c;
    int f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
};
struct Object {
    char unknown0[0x4c];
    float f4c;
    char unknown50[0x4];
    float f54;
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
extern void hs_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void hs_8c0dbc68(Object *, Frame *, Arg1 *);
extern int clip_and_scale_rectangle(Arg1 *, Frame *);
extern void sq_quad_8c38b09e(Frame *, float);
extern void sq_flush_8c38af12(void);
void operation_8c0db98c(Object *o, Arg1 *a1)
{
    Frame frame;
    float a;
    float v4;
    float v5;
    float v6;
    float v12;
    float v13;
    float v14;
    float v16;
    float v15;
    int t1;
    if (!(a1->f30 >= 0)) {
        return;
    }
    sq_select_8c38aeb4(1);
    hs_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(0xa, -1);
    if (64.0f > o->f54) {
        v12 = (float)(o->f54 * 0.5f);
    } else {
        v12 = (float)32.0f;
    }
    (&frame)->f04 = o->f4c;
    (&frame)->f0c = o->f4c + v12;
    (&frame)->f14 = 0.0f;
    (&frame)->f1c = v12 / 128.0f;
    a = a1->f24;
    (&frame)->f04 = ((&frame)->f04 - a) * a1->f2c + a;
    a = a1->f24;
    (&frame)->f0c = ((&frame)->f0c - a) * a1->f2c + a;
    hs_8c0dbc68(o, (&frame), a1);
    (&frame)->f04 = o->f4c + o->f54 - v12;
    (&frame)->f0c = o->f4c + o->f54;
    (&frame)->f14 = (96.0f - v12) / 128.0f;
    (&frame)->f1c = 0.75f;
    a = a1->f24;
    (&frame)->f04 = ((&frame)->f04 - a) * a1->f2c + a;
    a = a1->f24;
    (&frame)->f0c = ((&frame)->f0c - a) * a1->f2c + a;
    hs_8c0dbc68(o, (&frame), a1);
    (&frame)->f04 = o->f4c + 32.0f;
    (&frame)->f14 = 0.25f;
    (&frame)->f1c = 0.5f;
    v5 = o->f54 - 64.0f;
    a = a1->f24;
    (&frame)->f04 = ((&frame)->f04 - a) * a1->f2c + a;
    v12 = a1->f2c * 32.0f;
    while (!(0.0f > v5)) {
        if (32.0f > v5) {
            v12 = v5 * a1->f2c;
            (&frame)->f1c = (v5 + 32.0f) / 128.0f;
        }
        (&frame)->f0c = (&frame)->f04 + v12;
        hs_8c0dbc68(o, (&frame), a1);
        (&frame)->f04 += v12;
        v5 -= 32.0f;
    }
    v15 = -1.0f / (a1->f34 + 0.0299f);
    v16 = a1->f14;
    (&frame)->f10 = 0.0078125f;
    (&frame)->f18 = 0.1171875f;
    while (a1->f44 > v16) {
        if (!((v16 + 18.0f) < a1->f3c)) {
            (&frame)->f00 = a1->f38;
            (&frame)->f04 = v16;
            (&frame)->f08 = a1->f40;
            (&frame)->f0c = v16 + 18.0f;
            (&frame)->f14 = 0.78125f;
            (&frame)->f1c = 0.921875f;
            t1 = clip_and_scale_rectangle(a1, (&frame));
            if (t1 != 0) {
                sq_quad_8c38b09e((&frame), v15);
            }
        }
        v16 = (float)(v16 + 20.0f);
    }
    sq_flush_8c38af12();
}
