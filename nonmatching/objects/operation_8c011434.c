/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c011434
 * function: operation_8c011434
 * language: c
 * reference size: 280 bytes
 * compiled size: 280 bytes (+0.0%)
 * differing lines: 40 of 120 reference instruction lines
 * differing bytes: 37
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv22 S_vv22;
typedef struct S_vv22_0 S_vv22_0;
typedef struct S_vv6 S_vv6;
typedef struct S_vv8 S_vv8;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv6 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    float f10;
    int f14;
};
struct Object {
    float tag;
    char unknown4[0x4];
    float f08;
};
struct S_L8c46f5a0 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv8 {
    S_vv6 *f00;
};
struct S_vv22 {
    S_vv22_0 *f00;
};
struct S_vv1 {
    int f00;
};
extern int g_8c417b80;
extern int g_8c4dc5e0;
extern S_L8c46f5a0 g_8c46f5a0;
extern void subtract_vector_components(void *, void *, void *);
extern float njScalor_8c37e480(Frame *);
extern void signed_sqrt_8c37f6c0(float);
extern int call_8c011e10(void *, Object *, int, Frame *, float, float, float);
extern void operation_8c011e88(void *);
int operation_8c011434(Object *o, int a1, int a2)
{
    Frame frame;
    float d;
    float inv;
    float t2;
    float r;
    int count;
    S_vv6 *e;
    S_vv6 **p;
    S_vv6 **q;
    p = (S_vv6 **)&g_8c417b80;
    count = 0;
    q = (S_vv6 **)(g_8c4dc5e0 + 0x20);
    subtract_vector_components((void *)o, (void *)a1, (void *)(&frame));
    t2 = njScalor_8c37e480((Frame *)((&frame)));
    d = (&frame)->f00 * (&frame)->f00 + (&frame)->f08 * (&frame)->f08;
    if (d == 0.0f) {
        d = 1e-07f;
    }
    inv = 1.0f;
    inv = inv / d;
    signed_sqrt_8c37f6c0(d);
    while ((e = *q++) != 0) {
        if ((e->f14 & a2) == 0) {
            continue;
        }
        (&g_8c46f5a0)->f00 = e->f04 - o->tag;
        (&g_8c46f5a0)->f08 = e->f0c - o->f08;
        r = t2 + e->f10;
        if ((&g_8c46f5a0)->f00 * (&g_8c46f5a0)->f00 + (&g_8c46f5a0)->f08 * (&g_8c46f5a0)->f08 > r * r) {
            continue;
        }
        if (call_8c011e10((void *)((int)e + 4), o, a1, (Frame *)((&frame)), e->f10, d, inv) == 0) {
            continue;
        }
        if (!(0x100 > ++count)) {
            break;
        }
        *p++ = e;
    }
    *p = 0;
    operation_8c011e88((void *)((void *)&g_8c417b80));
    return (int)(g_8c417b80);
}
