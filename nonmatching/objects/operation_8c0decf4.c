/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0decf4
 * function: operation_8c0decf4
 * language: c
 * reference size: 896 bytes
 * compiled size: 928 bytes (+3.6%)
 * differing lines: 370 of 406 reference instruction lines
 * differing bytes: 659
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in stack
 *   frame and spills, instruction or operand order; review found and fixed behaviour defects of
 *   the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by +32 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
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
    char unknown0[0x24];
    float f24;
    char unknown28[0x4];
    float f2c;
    int f30;
};
struct Object {
    char unknown0[0x4c];
    float f4c;
    float f50;
    float f54;
    char unknown58[0x4];
    float f5c;
    char unknown60[0x30];
    float f90;
};
struct Frame {
    int f08;
    float f0c;
    float f10;
    char unknown14[0x4];
    float f18;
    char unknown1c[0x4];
    float f20;
    char unknown24[0x8];
    float f2c;
    char unknown30[0x4];
    float f34;
    float f38;
    float f3c;
    char unknown40[0x8];
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void call_8c0df074(Object *, void *, Arg1 *, float, float, float, float);
extern void sq_header3_8c38b02e(int);
extern void sq_flush_8c38af12(void);
void operation_8c0decf4(Object *o, Arg1 *a1, int a2)
{
    Frame frame;
    float v;
    float h;
    float w;
    float s;
    float d;
    float t;
    float u;
    if (!(a1->f30 >= 0)) {
        return;
    }
    v = o->f50 + o->f54 * 0.342f;
    frame.f18 = 0.0f;
    frame.f34 = 0.0f;
    frame.f38 = 0.0f;
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, a2);
    w = o->f54;
    if (64.0f > w) {
        w *= 0.5f;
    } else {
        w = 32.0f;
    }
    frame.f10 = -1.0f / (o->f5c + 0.0299f);
    frame.f0c = o->f4c;
    frame.f20 = w;
    frame.f2c = 0.0f;
    t = w / 256.0f;
    frame.f3c = t;
    frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
    frame.f20 *= a1->f2c;
    call_8c0df074(o, &frame.f08, a1, 0.0f, 0.0f, v, w);
    frame.f0c = o->f4c + o->f54 - w;
    frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
    h = (96.0f - w) / 256.0f;
    frame.f2c = h;
    call_8c0df074(o, &frame.f08, a1, 0.0f, o->f54 - w, v, w);
    d = (o->f54 - 64.0f) * a1->f2c;
    if (!(0.0f > d)) {
        frame.f0c = o->f4c + 32.0f;
        frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
        frame.f20 = d;
        frame.f2c = 0.125f;
        call_8c0df074(o, &frame.f08, a1, 0.0f, 32.0f, v, o->f54 - 64.0f);
    }
    sq_header3_8c38b02e(-0x1000000);
    s = o->f90;
    u = s * 3.0f;
    frame.f10 = -1.0f / (o->f5c + 0.01495f);
    s *= 2.5f;
    frame.f0c = o->f4c + s;
    frame.f20 = w;
    frame.f2c = 0.0f;
    frame.f3c = t;
    frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
    frame.f20 *= a1->f2c;
    call_8c0df074(o, &frame.f08, a1, u, 0.0f, v, w);
    frame.f0c = o->f4c + s + o->f54 - w;
    frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
    frame.f2c = h;
    call_8c0df074(o, &frame.f08, a1, u, o->f54 - w, v, w);
    d = (o->f54 - 64.0f) * a1->f2c;
    if (!(0.0f > d)) {
        frame.f0c = o->f4c + s + 32.0f;
        frame.f0c = (frame.f0c - a1->f24) * a1->f2c + a1->f24;
        frame.f20 = d;
        frame.f2c = 0.125f;
        call_8c0df074(o, &frame.f08, a1, u, 32.0f, v, o->f54 - 64.0f);
    }
    sq_flush_8c38af12();
}
