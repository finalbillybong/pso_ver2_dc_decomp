/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dbff0
 * function: operation_8c0dbff0
 * language: c
 * reference size: 436 bytes
 * compiled size: 440 bytes (+0.9%)
 * differing lines: 72 of 195 reference instruction lines
 * differing bytes: 370
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
struct Object {
    char unknown0[0x48];
    float f48;
    char unknown4c[0x4];
    float f50;
};
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
extern void sq_quad_8c38b09e(Arg1 *, float);
void operation_8c0dbff0(Object *o, Arg1 *a1, Arg2 *a2)
{
    float v4;
    float v1;
    float v5;
    float v13;
    float v6;
    float v7;
    if (64.0f > o->f50) {
        v1 = (float)(o->f50 * 0.5f);
    } else {
        v1 = (float)32.0f;
    }
    v4 = (float)-1.0f;
    v5 = (float)(v4 / a2->f34);
    a1->f00 = o->f48;
    a1->f08 = o->f48 + v1;
    a1->f10 = 0.3828125f;
    a1->f18 = 0.5078125f;
    { float b = a2->f20; a1->f00 = (a1->f00 - b) * a2->f28 + b; }
    { float b = a2->f20; a1->f08 = (a1->f08 - b) * a2->f28 + b; }
    sq_quad_8c38b09e(a1, v5);
    a1->f00 = o->f48 + o->f50 - v1;
    a1->f08 = o->f48 + o->f50;
    a1->f10 = 0.6328125f;
    a1->f18 = 0.7578125f;
    { float b = a2->f20; a1->f00 = (a1->f00 - b) * a2->f28 + b; }
    { float b = a2->f20; a1->f08 = (a1->f08 - b) * a2->f28 + b; }
    sq_quad_8c38b09e(a1, v5);
    a1->f00 = o->f48 + 32.0f;
    a1->f10 = 0.5078125f;
    a1->f18 = 0.6328125f;
    v13 = (float)a2->f28;
    v6 = (float)((o->f50 - 64.0f) * v13);
    { float b = a2->f20; a1->f00 = (a1->f00 - b) * v13 + b; }
    v7 = (float)v6;
    while (!(0.0f > v7)) {
        if (32.0f > v7) {
            a1->f08 = a1->f00 + v7;
            a1->f18 = (v7 + 130.0f) / 256.0f;
        } else {
            a1->f08 = a1->f00 + 32.0f;
        }
        sq_quad_8c38b09e(a1, v5);
        a1->f00 += 32.0f;
        v7 = (float)(v7 - 32.0f);
    }
}
