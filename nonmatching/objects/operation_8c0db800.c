/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0db800
 * function: operation_8c0db800
 * language: c
 * reference size: 396 bytes
 * compiled size: 400 bytes (+1.0%)
 * differing lines: 114 of 182 reference instruction lines
 * differing bytes: 335
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x20];
    float f20;
    char unknown24[0x4];
    float f28;
    char unknown2c[0x8];
    float f34;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x4];
    float f18;
};
struct Object {
    char unknown0[0x48];
    float f48;
    char unknown4c[0x4];
    float f50;
};
extern void sq_quad_8c38b09e(Arg1 *, float);
void operation_8c0db800(Object *o, Arg1 *a1, Arg2 *a2)
{
    float v1;
    float v2;
    float v8;
    float v3;
    float v4;
    float c;
    v1 = (float)-1.0f;
    v2 = (float)(v1 / a2->f34);
    a1->f00 = o->f48;
    a1->f08 = o->f48 + 32.0f;
    a1->f10 = 0.0f;
    a1->f18 = 0.125f;
    c = a2->f20;
    a1->f00 = (a1->f00 - c) * a2->f28 + c;
    c = a2->f20;
    a1->f08 = (a1->f08 - c) * a2->f28 + c;
    sq_quad_8c38b09e(a1, v2);
    a1->f00 = o->f48 + o->f50 - 32.0f;
    a1->f08 = o->f48 + o->f50;
    a1->f10 = 0.25f;
    a1->f18 = 0.375f;
    c = a2->f20;
    a1->f00 = (a1->f00 - c) * a2->f28 + c;
    c = a2->f20;
    a1->f08 = (a1->f08 - c) * a2->f28 + c;
    sq_quad_8c38b09e(a1, v2);
    a1->f00 = o->f48 + 32.0f;
    a1->f10 = 0.125f;
    a1->f18 = 0.25f;
    v8 = (float)a2->f28;
    v3 = (float)((o->f50 - 64.0f) * v8);
    c = a2->f20;
    a1->f00 = (a1->f00 - c) * v8 + c;
    v4 = (float)v3;
    while (!(0.0f > v4)) {
        if (32.0f > v4) {
            a1->f08 = a1->f00 + v4;
            a1->f18 = (v4 + 32.0f) / 256.0f;
        } else {
            a1->f08 = a1->f00 + 32.0f;
        }
        sq_quad_8c38b09e(a1, v2);
        a1->f00 += 32.0f;
        v4 = (float)(v4 - 32.0f);
    }
}
