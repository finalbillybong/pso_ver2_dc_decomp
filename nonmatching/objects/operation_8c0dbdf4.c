/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0dbdf4
 * function: operation_8c0dbdf4
 * language: c
 * reference size: 508 bytes
 * compiled size: 516 bytes (+1.6%)
 * differing lines: 204 of 228 reference instruction lines
 * differing bytes: 265
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
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
    char unknown0[0x4c];
    float f4c;
    char unknown50[0x4];
    float f54;
};
struct Frame {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
    float f0c;
    char unknown10[0x4];
    float f14;
    char unknown18[0x4];
    float f1c;
};
struct Arg1 {
    char unknown0[0x24];
    float f24;
    char unknown28[0x4];
    float f2c;
};
extern S_g8c46fe00 *g_8c46fe00;
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void call_8c0dbff0(Object *, Frame *, Arg1 *);
extern void sq_flush_8c38af12(void);
void operation_8c0dbdf4(Object *o, Arg1 *a1)
{
    Frame frame;
    float v1;
    float v4;
    float v5;
    float v6;
    float v12;
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c46fe00);
    sq_header_8c38af22(1, -1);
    if (64.0f > o->f54) {
        v1 = (float)(o->f54 * 0.5f);
    } else {
        v1 = (float)32.0f;
    }
    (&frame)->f04 = o->f4c;
    (&frame)->f0c = o->f4c + v1;
    (&frame)->f14 = 0.0f;
    (&frame)->f1c = 0.125f;
    (&frame)->f04 = ((&frame)->f04 - a1->f24) * a1->f2c + a1->f24;
    (&frame)->f0c = ((&frame)->f0c - a1->f24) * a1->f2c + a1->f24;
    call_8c0dbff0(o, (Frame *)((&frame)), a1);
    (&frame)->f04 = o->f4c + o->f54 - v1;
    (&frame)->f0c = o->f4c + o->f54;
    (&frame)->f14 = 0.25f;
    (&frame)->f1c = 0.375f;
    (&frame)->f04 = ((&frame)->f04 - a1->f24) * a1->f2c + a1->f24;
    (&frame)->f0c = ((&frame)->f0c - a1->f24) * a1->f2c + a1->f24;
    call_8c0dbff0(o, (Frame *)((&frame)), a1);
    (&frame)->f04 = o->f4c + 32.0f;
    (&frame)->f14 = 0.125f;
    (&frame)->f1c = 0.25f;
    v4 = (float)o->f54;
    v4 = (float)(v4 - 64.0f);
    (&frame)->f04 = ((&frame)->f04 - a1->f24) * a1->f2c + a1->f24;
    v5 = (float)v4;
    while (!(0.0f > v5)) {
        v12 = (float)(a1->f2c * 32.0f);
        if (32.0f > v5) {
            v6 = (float)(v5 * a1->f2c);
            (&frame)->f1c = (v5 + 32.0f) / 256.0f;
            v12 = (float)v6;
        }
        (&frame)->f0c = (&frame)->f04 + v12;
        call_8c0dbff0(o, (Frame *)((&frame)), a1);
        (&frame)->f04 += v12;
        v4 = (float)(v5 - 32.0f);
        v5 = (float)v4;
    }
    sq_flush_8c38af12();
}
